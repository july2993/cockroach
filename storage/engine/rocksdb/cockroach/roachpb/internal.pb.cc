// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cockroach/roachpb/internal.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cockroach/roachpb/internal.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace cockroach {
namespace roachpb {

void protobuf_ShutdownFile_cockroach_2froachpb_2finternal_2eproto() {
  delete InternalTimeSeriesData::default_instance_;
  delete InternalTimeSeriesSample::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  InternalTimeSeriesData::default_instance_ = new InternalTimeSeriesData();
  InternalTimeSeriesSample::default_instance_ = new InternalTimeSeriesSample();
  InternalTimeSeriesData::default_instance_->InitAsDefaultInstance();
  InternalTimeSeriesSample::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cockroach_2froachpb_2finternal_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto_once_);
void protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto_once_,
                 &protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cockroach_2froachpb_2finternal_2eproto {
  StaticDescriptorInitializer_cockroach_2froachpb_2finternal_2eproto() {
    protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto();
  }
} static_descriptor_initializer_cockroach_2froachpb_2finternal_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForInternalTimeSeriesData(
    InternalTimeSeriesData* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InternalTimeSeriesData::kStartTimestampNanosFieldNumber;
const int InternalTimeSeriesData::kSampleDurationNanosFieldNumber;
const int InternalTimeSeriesData::kSamplesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InternalTimeSeriesData::InternalTimeSeriesData()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cockroach.roachpb.InternalTimeSeriesData)
}

void InternalTimeSeriesData::InitAsDefaultInstance() {
}

InternalTimeSeriesData::InternalTimeSeriesData(const InternalTimeSeriesData& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cockroach.roachpb.InternalTimeSeriesData)
}

void InternalTimeSeriesData::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  start_timestamp_nanos_ = GOOGLE_LONGLONG(0);
  sample_duration_nanos_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

InternalTimeSeriesData::~InternalTimeSeriesData() {
  // @@protoc_insertion_point(destructor:cockroach.roachpb.InternalTimeSeriesData)
  SharedDtor();
}

void InternalTimeSeriesData::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void InternalTimeSeriesData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const InternalTimeSeriesData& InternalTimeSeriesData::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto();
#endif
  return *default_instance_;
}

InternalTimeSeriesData* InternalTimeSeriesData::default_instance_ = NULL;

InternalTimeSeriesData* InternalTimeSeriesData::New(::google::protobuf::Arena* arena) const {
  InternalTimeSeriesData* n = new InternalTimeSeriesData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void InternalTimeSeriesData::Clear() {
// @@protoc_insertion_point(message_clear_start:cockroach.roachpb.InternalTimeSeriesData)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(InternalTimeSeriesData, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<InternalTimeSeriesData*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(start_timestamp_nanos_, sample_duration_nanos_);

#undef ZR_HELPER_
#undef ZR_

  samples_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool InternalTimeSeriesData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForInternalTimeSeriesData, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:cockroach.roachpb.InternalTimeSeriesData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 start_timestamp_nanos = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &start_timestamp_nanos_)));
          set_has_start_timestamp_nanos();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_sample_duration_nanos;
        break;
      }

      // optional int64 sample_duration_nanos = 2;
      case 2: {
        if (tag == 16) {
         parse_sample_duration_nanos:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &sample_duration_nanos_)));
          set_has_sample_duration_nanos();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_samples;
        break;
      }

      // repeated .cockroach.roachpb.InternalTimeSeriesSample samples = 3;
      case 3: {
        if (tag == 26) {
         parse_samples:
          DO_(input->IncrementRecursionDepth());
         parse_loop_samples:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_samples()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_loop_samples;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cockroach.roachpb.InternalTimeSeriesData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cockroach.roachpb.InternalTimeSeriesData)
  return false;
#undef DO_
}

void InternalTimeSeriesData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cockroach.roachpb.InternalTimeSeriesData)
  // optional int64 start_timestamp_nanos = 1;
  if (has_start_timestamp_nanos()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->start_timestamp_nanos(), output);
  }

  // optional int64 sample_duration_nanos = 2;
  if (has_sample_duration_nanos()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->sample_duration_nanos(), output);
  }

  // repeated .cockroach.roachpb.InternalTimeSeriesSample samples = 3;
  for (unsigned int i = 0, n = this->samples_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->samples(i), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:cockroach.roachpb.InternalTimeSeriesData)
}

int InternalTimeSeriesData::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cockroach.roachpb.InternalTimeSeriesData)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 3u) {
    // optional int64 start_timestamp_nanos = 1;
    if (has_start_timestamp_nanos()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->start_timestamp_nanos());
    }

    // optional int64 sample_duration_nanos = 2;
    if (has_sample_duration_nanos()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->sample_duration_nanos());
    }

  }
  // repeated .cockroach.roachpb.InternalTimeSeriesSample samples = 3;
  total_size += 1 * this->samples_size();
  for (int i = 0; i < this->samples_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->samples(i));
  }

  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InternalTimeSeriesData::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const InternalTimeSeriesData*>(&from));
}

void InternalTimeSeriesData::MergeFrom(const InternalTimeSeriesData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cockroach.roachpb.InternalTimeSeriesData)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  samples_.MergeFrom(from.samples_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_start_timestamp_nanos()) {
      set_start_timestamp_nanos(from.start_timestamp_nanos());
    }
    if (from.has_sample_duration_nanos()) {
      set_sample_duration_nanos(from.sample_duration_nanos());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void InternalTimeSeriesData::CopyFrom(const InternalTimeSeriesData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cockroach.roachpb.InternalTimeSeriesData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InternalTimeSeriesData::IsInitialized() const {

  return true;
}

void InternalTimeSeriesData::Swap(InternalTimeSeriesData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InternalTimeSeriesData::InternalSwap(InternalTimeSeriesData* other) {
  std::swap(start_timestamp_nanos_, other->start_timestamp_nanos_);
  std::swap(sample_duration_nanos_, other->sample_duration_nanos_);
  samples_.UnsafeArenaSwap(&other->samples_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string InternalTimeSeriesData::GetTypeName() const {
  return "cockroach.roachpb.InternalTimeSeriesData";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// InternalTimeSeriesData

// optional int64 start_timestamp_nanos = 1;
bool InternalTimeSeriesData::has_start_timestamp_nanos() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void InternalTimeSeriesData::set_has_start_timestamp_nanos() {
  _has_bits_[0] |= 0x00000001u;
}
void InternalTimeSeriesData::clear_has_start_timestamp_nanos() {
  _has_bits_[0] &= ~0x00000001u;
}
void InternalTimeSeriesData::clear_start_timestamp_nanos() {
  start_timestamp_nanos_ = GOOGLE_LONGLONG(0);
  clear_has_start_timestamp_nanos();
}
 ::google::protobuf::int64 InternalTimeSeriesData::start_timestamp_nanos() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesData.start_timestamp_nanos)
  return start_timestamp_nanos_;
}
 void InternalTimeSeriesData::set_start_timestamp_nanos(::google::protobuf::int64 value) {
  set_has_start_timestamp_nanos();
  start_timestamp_nanos_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesData.start_timestamp_nanos)
}

// optional int64 sample_duration_nanos = 2;
bool InternalTimeSeriesData::has_sample_duration_nanos() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void InternalTimeSeriesData::set_has_sample_duration_nanos() {
  _has_bits_[0] |= 0x00000002u;
}
void InternalTimeSeriesData::clear_has_sample_duration_nanos() {
  _has_bits_[0] &= ~0x00000002u;
}
void InternalTimeSeriesData::clear_sample_duration_nanos() {
  sample_duration_nanos_ = GOOGLE_LONGLONG(0);
  clear_has_sample_duration_nanos();
}
 ::google::protobuf::int64 InternalTimeSeriesData::sample_duration_nanos() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesData.sample_duration_nanos)
  return sample_duration_nanos_;
}
 void InternalTimeSeriesData::set_sample_duration_nanos(::google::protobuf::int64 value) {
  set_has_sample_duration_nanos();
  sample_duration_nanos_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesData.sample_duration_nanos)
}

// repeated .cockroach.roachpb.InternalTimeSeriesSample samples = 3;
int InternalTimeSeriesData::samples_size() const {
  return samples_.size();
}
void InternalTimeSeriesData::clear_samples() {
  samples_.Clear();
}
const ::cockroach::roachpb::InternalTimeSeriesSample& InternalTimeSeriesData::samples(int index) const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_.Get(index);
}
::cockroach::roachpb::InternalTimeSeriesSample* InternalTimeSeriesData::mutable_samples(int index) {
  // @@protoc_insertion_point(field_mutable:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_.Mutable(index);
}
::cockroach::roachpb::InternalTimeSeriesSample* InternalTimeSeriesData::add_samples() {
  // @@protoc_insertion_point(field_add:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_.Add();
}
::google::protobuf::RepeatedPtrField< ::cockroach::roachpb::InternalTimeSeriesSample >*
InternalTimeSeriesData::mutable_samples() {
  // @@protoc_insertion_point(field_mutable_list:cockroach.roachpb.InternalTimeSeriesData.samples)
  return &samples_;
}
const ::google::protobuf::RepeatedPtrField< ::cockroach::roachpb::InternalTimeSeriesSample >&
InternalTimeSeriesData::samples() const {
  // @@protoc_insertion_point(field_list:cockroach.roachpb.InternalTimeSeriesData.samples)
  return samples_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

static ::std::string* MutableUnknownFieldsForInternalTimeSeriesSample(
    InternalTimeSeriesSample* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InternalTimeSeriesSample::kOffsetFieldNumber;
const int InternalTimeSeriesSample::kSumFieldNumber;
const int InternalTimeSeriesSample::kCountFieldNumber;
const int InternalTimeSeriesSample::kMaxFieldNumber;
const int InternalTimeSeriesSample::kMinFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InternalTimeSeriesSample::InternalTimeSeriesSample()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cockroach.roachpb.InternalTimeSeriesSample)
}

void InternalTimeSeriesSample::InitAsDefaultInstance() {
}

InternalTimeSeriesSample::InternalTimeSeriesSample(const InternalTimeSeriesSample& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cockroach.roachpb.InternalTimeSeriesSample)
}

void InternalTimeSeriesSample::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  offset_ = 0;
  sum_ = 0;
  count_ = 0u;
  max_ = 0;
  min_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

InternalTimeSeriesSample::~InternalTimeSeriesSample() {
  // @@protoc_insertion_point(destructor:cockroach.roachpb.InternalTimeSeriesSample)
  SharedDtor();
}

void InternalTimeSeriesSample::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void InternalTimeSeriesSample::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const InternalTimeSeriesSample& InternalTimeSeriesSample::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_cockroach_2froachpb_2finternal_2eproto();
#endif
  return *default_instance_;
}

InternalTimeSeriesSample* InternalTimeSeriesSample::default_instance_ = NULL;

InternalTimeSeriesSample* InternalTimeSeriesSample::New(::google::protobuf::Arena* arena) const {
  InternalTimeSeriesSample* n = new InternalTimeSeriesSample;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void InternalTimeSeriesSample::Clear() {
// @@protoc_insertion_point(message_clear_start:cockroach.roachpb.InternalTimeSeriesSample)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(InternalTimeSeriesSample, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<InternalTimeSeriesSample*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 31u) {
    ZR_(sum_, min_);
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool InternalTimeSeriesSample::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForInternalTimeSeriesSample, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:cockroach.roachpb.InternalTimeSeriesSample)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 offset = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &offset_)));
          set_has_offset();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_count;
        break;
      }

      // optional uint32 count = 6;
      case 6: {
        if (tag == 48) {
         parse_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &count_)));
          set_has_count();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(57)) goto parse_sum;
        break;
      }

      // optional double sum = 7;
      case 7: {
        if (tag == 57) {
         parse_sum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &sum_)));
          set_has_sum();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(65)) goto parse_max;
        break;
      }

      // optional double max = 8;
      case 8: {
        if (tag == 65) {
         parse_max:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &max_)));
          set_has_max();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(73)) goto parse_min;
        break;
      }

      // optional double min = 9;
      case 9: {
        if (tag == 73) {
         parse_min:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &min_)));
          set_has_min();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cockroach.roachpb.InternalTimeSeriesSample)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cockroach.roachpb.InternalTimeSeriesSample)
  return false;
#undef DO_
}

void InternalTimeSeriesSample::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cockroach.roachpb.InternalTimeSeriesSample)
  // optional int32 offset = 1;
  if (has_offset()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->offset(), output);
  }

  // optional uint32 count = 6;
  if (has_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->count(), output);
  }

  // optional double sum = 7;
  if (has_sum()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->sum(), output);
  }

  // optional double max = 8;
  if (has_max()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->max(), output);
  }

  // optional double min = 9;
  if (has_min()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->min(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:cockroach.roachpb.InternalTimeSeriesSample)
}

int InternalTimeSeriesSample::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cockroach.roachpb.InternalTimeSeriesSample)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 31u) {
    // optional int32 offset = 1;
    if (has_offset()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->offset());
    }

    // optional double sum = 7;
    if (has_sum()) {
      total_size += 1 + 8;
    }

    // optional uint32 count = 6;
    if (has_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->count());
    }

    // optional double max = 8;
    if (has_max()) {
      total_size += 1 + 8;
    }

    // optional double min = 9;
    if (has_min()) {
      total_size += 1 + 8;
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InternalTimeSeriesSample::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const InternalTimeSeriesSample*>(&from));
}

void InternalTimeSeriesSample::MergeFrom(const InternalTimeSeriesSample& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cockroach.roachpb.InternalTimeSeriesSample)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_offset()) {
      set_offset(from.offset());
    }
    if (from.has_sum()) {
      set_sum(from.sum());
    }
    if (from.has_count()) {
      set_count(from.count());
    }
    if (from.has_max()) {
      set_max(from.max());
    }
    if (from.has_min()) {
      set_min(from.min());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void InternalTimeSeriesSample::CopyFrom(const InternalTimeSeriesSample& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cockroach.roachpb.InternalTimeSeriesSample)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InternalTimeSeriesSample::IsInitialized() const {

  return true;
}

void InternalTimeSeriesSample::Swap(InternalTimeSeriesSample* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InternalTimeSeriesSample::InternalSwap(InternalTimeSeriesSample* other) {
  std::swap(offset_, other->offset_);
  std::swap(sum_, other->sum_);
  std::swap(count_, other->count_);
  std::swap(max_, other->max_);
  std::swap(min_, other->min_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string InternalTimeSeriesSample::GetTypeName() const {
  return "cockroach.roachpb.InternalTimeSeriesSample";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// InternalTimeSeriesSample

// optional int32 offset = 1;
bool InternalTimeSeriesSample::has_offset() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void InternalTimeSeriesSample::set_has_offset() {
  _has_bits_[0] |= 0x00000001u;
}
void InternalTimeSeriesSample::clear_has_offset() {
  _has_bits_[0] &= ~0x00000001u;
}
void InternalTimeSeriesSample::clear_offset() {
  offset_ = 0;
  clear_has_offset();
}
 ::google::protobuf::int32 InternalTimeSeriesSample::offset() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.offset)
  return offset_;
}
 void InternalTimeSeriesSample::set_offset(::google::protobuf::int32 value) {
  set_has_offset();
  offset_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.offset)
}

// optional double sum = 7;
bool InternalTimeSeriesSample::has_sum() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void InternalTimeSeriesSample::set_has_sum() {
  _has_bits_[0] |= 0x00000002u;
}
void InternalTimeSeriesSample::clear_has_sum() {
  _has_bits_[0] &= ~0x00000002u;
}
void InternalTimeSeriesSample::clear_sum() {
  sum_ = 0;
  clear_has_sum();
}
 double InternalTimeSeriesSample::sum() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.sum)
  return sum_;
}
 void InternalTimeSeriesSample::set_sum(double value) {
  set_has_sum();
  sum_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.sum)
}

// optional uint32 count = 6;
bool InternalTimeSeriesSample::has_count() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void InternalTimeSeriesSample::set_has_count() {
  _has_bits_[0] |= 0x00000004u;
}
void InternalTimeSeriesSample::clear_has_count() {
  _has_bits_[0] &= ~0x00000004u;
}
void InternalTimeSeriesSample::clear_count() {
  count_ = 0u;
  clear_has_count();
}
 ::google::protobuf::uint32 InternalTimeSeriesSample::count() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.count)
  return count_;
}
 void InternalTimeSeriesSample::set_count(::google::protobuf::uint32 value) {
  set_has_count();
  count_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.count)
}

// optional double max = 8;
bool InternalTimeSeriesSample::has_max() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void InternalTimeSeriesSample::set_has_max() {
  _has_bits_[0] |= 0x00000008u;
}
void InternalTimeSeriesSample::clear_has_max() {
  _has_bits_[0] &= ~0x00000008u;
}
void InternalTimeSeriesSample::clear_max() {
  max_ = 0;
  clear_has_max();
}
 double InternalTimeSeriesSample::max() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.max)
  return max_;
}
 void InternalTimeSeriesSample::set_max(double value) {
  set_has_max();
  max_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.max)
}

// optional double min = 9;
bool InternalTimeSeriesSample::has_min() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void InternalTimeSeriesSample::set_has_min() {
  _has_bits_[0] |= 0x00000010u;
}
void InternalTimeSeriesSample::clear_has_min() {
  _has_bits_[0] &= ~0x00000010u;
}
void InternalTimeSeriesSample::clear_min() {
  min_ = 0;
  clear_has_min();
}
 double InternalTimeSeriesSample::min() const {
  // @@protoc_insertion_point(field_get:cockroach.roachpb.InternalTimeSeriesSample.min)
  return min_;
}
 void InternalTimeSeriesSample::set_min(double value) {
  set_has_min();
  min_ = value;
  // @@protoc_insertion_point(field_set:cockroach.roachpb.InternalTimeSeriesSample.min)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace roachpb
}  // namespace cockroach

// @@protoc_insertion_point(global_scope)
