// Copyright 2018 The Cockroach Authors.
//
// Use of this software is governed by the Business Source License
// included in the file licenses/BSL.txt.
//
// As of the Change Date specified in that file, in accordance with
// the Business Source License, use of this software will be governed
// by the Apache License, Version 2.0, included in the file
// licenses/APL.txt.

package main

import (
	"context"
	"fmt"
	"regexp"
)

var typeORMReleaseTagRegex = regexp.MustCompile(`^(?P<major>\d+)\.(?P<minor>\d+)\.(?P<point>\d+)$`)

// This test runs TypeORM's full test suite against a single cockroach node.
func registerTypeORM(r *registry) {
	runTypeORM := func(
		ctx context.Context,
		t *test,
		c *cluster,
	) {
		if c.isLocal() {
			t.Fatal("cannot be run in local mode")
		}
		node := c.Node(1)
		t.Status("setting up cockroach")
		c.Put(ctx, cockroach, "./cockroach", c.All())
		c.Start(ctx, t, c.All())

		t.Status("cloning TypeORM and installing prerequisites")
		latestTag, err := repeatGetLatestTag(ctx, c, "typeorm", "typeorm", typeORMReleaseTagRegex)
		if err != nil {
			t.Fatal(err)
		}
		c.l.Printf("Latest TypeORM release is %s.", latestTag)

		if err := repeatRunE(
			ctx, c, node, "update apt-get", `sudo apt-get -qq update`,
		); err != nil {
			t.Fatal(err)
		}

		if err := repeatRunE(
			ctx,
			c,
			node,
			"install dependencies",
			`sudo apt-get -qq install make python3 libpq-dev python-dev gcc g++ `+
				`python-software-properties build-essential`,
		); err != nil {
			t.Fatal(err)
		}

		if err := repeatRunE(
			ctx,
			c,
			node,
			"add nodesource repository",
			`curl -sL https://deb.nodesource.com/setup_11.x | sudo -E bash -`,
		); err != nil {
			t.Fatal(err)
		}

		if err := repeatRunE(
			ctx, c, node, "install nodejs and npm", `sudo apt-get -qq install nodejs`,
		); err != nil {
			t.Fatal(err)
		}

		if err := repeatRunE(
			ctx, c, node, "update npm", `sudo npm i -g npm`,
		); err != nil {
			t.Fatal(err)
		}

		if err := repeatRunE(
			ctx, c, node, "remove old TypeORM", `sudo rm -rf /mnt/data1/typeorm`,
		); err != nil {
			t.Fatal(err)
		}

		if err := repeatGitCloneE(
			ctx,
			c,
			"https://github.com/typeorm/typeorm.git",
			"/mnt/data1/typeorm",
			latestTag,
			node,
		); err != nil {
			t.Fatal(err)
		}

		// TypeORM is super picky about this file format and if it cannot be parsed
		// it will return a file not found error.
		if err := repeatRunE(
			ctx,
			c,
			node,
			"configuring tests for cockroach only",
			fmt.Sprintf("echo '%s' > /mnt/data1/typeorm/ormconfig.json", typeORMConfigJSON),
		); err != nil {
			t.Fatal(err)
		}

		if err := repeatRunE(
			ctx,
			c,
			node,
			"building TypeORM",
			`cd /mnt/data1/typeorm/ && sudo npm install --unsafe-perm=true --allow-root`,
		); err != nil {
			t.Fatal(err)
		}

		t.Status("running TypeORM test suite - approx 12 mins")
		rawResults, err := c.RunWithBuffer(ctx, t.l, node,
			`cd /mnt/data1/typeorm/ && sudo npm test --unsafe-perm=true --allow-root`,
		)
		c.l.Printf("Test Results: %s", rawResults)
		if err != nil {
			t.Fatal(err)
		}
	}

	r.Add(testSpec{
		Name:       "typeorm",
		Cluster:    makeClusterSpec(1),
		MinVersion: "v19.1.0",
		Run: func(ctx context.Context, t *test, c *cluster) {
			runTypeORM(ctx, t, c)
		},
	})
}

// This full config is required, but notice that all the non-cockroach databases
// are set to skip.  Some of the unit tests look for a specific config, like
// sqlite and will fail if it is not present.
const typeORMConfigJSON = `
[
  {
    "skip": true,
    "name": "mysql",
    "type": "mysql",
    "host": "localhost",
    "port": 3306,
    "username": "root",
    "password": "admin",
    "database": "test",
    "logging": false
  },
  {
    "skip": true,
    "name": "mariadb",
    "type": "mariadb",
    "host": "localhost",
    "port": 3307,
    "username": "root",
    "password": "admin",
    "database": "test",
    "logging": false
  },
  {
    "skip": true,
    "name": "sqlite",
    "type": "sqlite",
    "database": "temp/sqlitedb.db",
    "logging": false
  },
  {
    "skip": true,
    "name": "postgres",
    "type": "postgres",
    "host": "localhost",
    "port": 5432,
    "username": "test",
    "password": "test",
    "database": "test",
    "logging": false
  },
  {
    "skip": true,
    "name": "mssql",
    "type": "mssql",
    "host": "localhost",
    "username": "sa",
    "password": "Admin12345",
    "database": "tempdb",
    "logging": false
  },
  {
    "skip": true,
    "name": "oracle",
    "type": "oracle",
    "host": "localhost",
    "username": "system",
    "password": "oracle",
    "port": 1521,
    "sid": "xe.oracle.docker",
    "logging": false
  },
  {
    "skip": false,
    "name": "cockroachdb",
    "type": "cockroachdb",
    "host": "localhost",
    "port": 26257,
    "username": "root",
    "password": "",
    "database": "defaultdb"
  },
  {
    "skip": true,
    "disabledIfNotEnabledImplicitly": true,
    "name": "mongodb",
    "type": "mongodb",
    "database": "test",
    "logging": false,
    "useNewUrlParser": true
  }
]
`
