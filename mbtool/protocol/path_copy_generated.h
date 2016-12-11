// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_PATHCOPY_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_PATHCOPY_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v3 {

struct PathCopyError;

struct PathCopyRequest;

struct PathCopyResponse;

struct PathCopyError FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ERRNO_VALUE = 4,
    VT_MSG = 6
  };
  int32_t errno_value() const { return GetField<int32_t>(VT_ERRNO_VALUE, 0); }
  const flatbuffers::String *msg() const { return GetPointer<const flatbuffers::String *>(VT_MSG); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ERRNO_VALUE) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_MSG) &&
           verifier.Verify(msg()) &&
           verifier.EndTable();
  }
};

struct PathCopyErrorBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_errno_value(int32_t errno_value) { fbb_.AddElement<int32_t>(PathCopyError::VT_ERRNO_VALUE, errno_value, 0); }
  void add_msg(flatbuffers::Offset<flatbuffers::String> msg) { fbb_.AddOffset(PathCopyError::VT_MSG, msg); }
  PathCopyErrorBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PathCopyErrorBuilder &operator=(const PathCopyErrorBuilder &);
  flatbuffers::Offset<PathCopyError> Finish() {
    auto o = flatbuffers::Offset<PathCopyError>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<PathCopyError> CreatePathCopyError(flatbuffers::FlatBufferBuilder &_fbb,
    int32_t errno_value = 0,
    flatbuffers::Offset<flatbuffers::String> msg = 0) {
  PathCopyErrorBuilder builder_(_fbb);
  builder_.add_msg(msg);
  builder_.add_errno_value(errno_value);
  return builder_.Finish();
}

inline flatbuffers::Offset<PathCopyError> CreatePathCopyErrorDirect(flatbuffers::FlatBufferBuilder &_fbb,
    int32_t errno_value = 0,
    const char *msg = nullptr) {
  return CreatePathCopyError(_fbb, errno_value, msg ? _fbb.CreateString(msg) : 0);
}

struct PathCopyRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SOURCE = 4,
    VT_TARGET = 6
  };
  const flatbuffers::String *source() const { return GetPointer<const flatbuffers::String *>(VT_SOURCE); }
  const flatbuffers::String *target() const { return GetPointer<const flatbuffers::String *>(VT_TARGET); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_SOURCE) &&
           verifier.Verify(source()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_TARGET) &&
           verifier.Verify(target()) &&
           verifier.EndTable();
  }
};

struct PathCopyRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_source(flatbuffers::Offset<flatbuffers::String> source) { fbb_.AddOffset(PathCopyRequest::VT_SOURCE, source); }
  void add_target(flatbuffers::Offset<flatbuffers::String> target) { fbb_.AddOffset(PathCopyRequest::VT_TARGET, target); }
  PathCopyRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PathCopyRequestBuilder &operator=(const PathCopyRequestBuilder &);
  flatbuffers::Offset<PathCopyRequest> Finish() {
    auto o = flatbuffers::Offset<PathCopyRequest>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<PathCopyRequest> CreatePathCopyRequest(flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> source = 0,
    flatbuffers::Offset<flatbuffers::String> target = 0) {
  PathCopyRequestBuilder builder_(_fbb);
  builder_.add_target(target);
  builder_.add_source(source);
  return builder_.Finish();
}

inline flatbuffers::Offset<PathCopyRequest> CreatePathCopyRequestDirect(flatbuffers::FlatBufferBuilder &_fbb,
    const char *source = nullptr,
    const char *target = nullptr) {
  return CreatePathCopyRequest(_fbb, source ? _fbb.CreateString(source) : 0, target ? _fbb.CreateString(target) : 0);
}

struct PathCopyResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SUCCESS = 4,
    VT_ERROR_MSG = 6,
    VT_ERROR = 8
  };
  bool success() const { return GetField<uint8_t>(VT_SUCCESS, 0) != 0; }
  const flatbuffers::String *error_msg() const { return GetPointer<const flatbuffers::String *>(VT_ERROR_MSG); }
  const PathCopyError *error() const { return GetPointer<const PathCopyError *>(VT_ERROR); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR_MSG) &&
           verifier.Verify(error_msg()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR) &&
           verifier.VerifyTable(error()) &&
           verifier.EndTable();
  }
};

struct PathCopyResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(bool success) { fbb_.AddElement<uint8_t>(PathCopyResponse::VT_SUCCESS, static_cast<uint8_t>(success), 0); }
  void add_error_msg(flatbuffers::Offset<flatbuffers::String> error_msg) { fbb_.AddOffset(PathCopyResponse::VT_ERROR_MSG, error_msg); }
  void add_error(flatbuffers::Offset<PathCopyError> error) { fbb_.AddOffset(PathCopyResponse::VT_ERROR, error); }
  PathCopyResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PathCopyResponseBuilder &operator=(const PathCopyResponseBuilder &);
  flatbuffers::Offset<PathCopyResponse> Finish() {
    auto o = flatbuffers::Offset<PathCopyResponse>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<PathCopyResponse> CreatePathCopyResponse(flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    flatbuffers::Offset<flatbuffers::String> error_msg = 0,
    flatbuffers::Offset<PathCopyError> error = 0) {
  PathCopyResponseBuilder builder_(_fbb);
  builder_.add_error(error);
  builder_.add_error_msg(error_msg);
  builder_.add_success(success);
  return builder_.Finish();
}

inline flatbuffers::Offset<PathCopyResponse> CreatePathCopyResponseDirect(flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    const char *error_msg = nullptr,
    flatbuffers::Offset<PathCopyError> error = 0) {
  return CreatePathCopyResponse(_fbb, success, error_msg ? _fbb.CreateString(error_msg) : 0, error);
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_PATHCOPY_MBTOOL_DAEMON_V3_H_
