// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: state_manage/state_manage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_state_5fmanage_2fstate_5fmanage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_state_5fmanage_2fstate_5fmanage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_state_5fmanage_2fstate_5fmanage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_state_5fmanage_2fstate_5fmanage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_state_5fmanage_2fstate_5fmanage_2eproto;
namespace xpilot {
namespace sr2_0 {
namespace proto {
class StateManagementMsg;
class StateManagementMsgDefaultTypeInternal;
extern StateManagementMsgDefaultTypeInternal _StateManagementMsg_default_instance_;
}  // namespace proto
}  // namespace sr2_0
}  // namespace xpilot
PROTOBUF_NAMESPACE_OPEN
template<> ::xpilot::sr2_0::proto::StateManagementMsg* Arena::CreateMaybeMessage<::xpilot::sr2_0::proto::StateManagementMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace xpilot {
namespace sr2_0 {
namespace proto {

// ===================================================================

class StateManagementMsg PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:xpilot.sr2_0.proto.StateManagementMsg) */ {
 public:
  inline StateManagementMsg() : StateManagementMsg(nullptr) {};
  virtual ~StateManagementMsg();

  StateManagementMsg(const StateManagementMsg& from);
  StateManagementMsg(StateManagementMsg&& from) noexcept
    : StateManagementMsg() {
    *this = ::std::move(from);
  }

  inline StateManagementMsg& operator=(const StateManagementMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline StateManagementMsg& operator=(StateManagementMsg&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const StateManagementMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StateManagementMsg* internal_default_instance() {
    return reinterpret_cast<const StateManagementMsg*>(
               &_StateManagementMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StateManagementMsg& a, StateManagementMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(StateManagementMsg* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StateManagementMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StateManagementMsg* New() const final {
    return CreateMaybeMessage<StateManagementMsg>(nullptr);
  }

  StateManagementMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StateManagementMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StateManagementMsg& from);
  void MergeFrom(const StateManagementMsg& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StateManagementMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "xpilot.sr2_0.proto.StateManagementMsg";
  }
  protected:
  explicit StateManagementMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_state_5fmanage_2fstate_5fmanage_2eproto);
    return ::descriptor_table_state_5fmanage_2fstate_5fmanage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRdmodulecomCruiseVehSpdFieldNumber = 1,
    kRdmodulecomCruisevehSpdStFieldNumber = 2,
    kRdmodulecom9StFieldNumber = 3,
    kRdmodulecom10StateFieldNumber = 4,
    kRdmodulecom11StateFieldNumber = 5,
    kRdmodulecom13StateFieldNumber = 6,
    kRdmodulecom14StateFieldNumber = 7,
    kRdmodulecom15StateFieldNumber = 8,
    kRdmodulecom16StateFieldNumber = 9,
    kRdmodulecom26StateFieldNumber = 10,
    kRdmodulecom29StateFieldNumber = 11,
    kRdmodulecom30StateFieldNumber = 12,
    kRdmodulecom36StateFieldNumber = 13,
    kMflStateFieldNumber = 14,
    kRdmodulecomTurnstateFieldNumber = 15,
    kModelModeFieldNumber = 16,
    kIntersectionStateFieldNumber = 17,
  };
  // int32 rdmodulecom_CruiseVehSpd = 1;
  void clear_rdmodulecom_cruisevehspd();
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_cruisevehspd() const;
  void set_rdmodulecom_cruisevehspd(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rdmodulecom_cruisevehspd() const;
  void _internal_set_rdmodulecom_cruisevehspd(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // float rdmodulecom_cruisevehSpd_st = 2;
  void clear_rdmodulecom_cruisevehspd_st();
  float rdmodulecom_cruisevehspd_st() const;
  void set_rdmodulecom_cruisevehspd_st(float value);
  private:
  float _internal_rdmodulecom_cruisevehspd_st() const;
  void _internal_set_rdmodulecom_cruisevehspd_st(float value);
  public:

  // int32 rdmodulecom_9_st = 3;
  void clear_rdmodulecom_9_st();
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_9_st() const;
  void set_rdmodulecom_9_st(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rdmodulecom_9_st() const;
  void _internal_set_rdmodulecom_9_st(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 rdmodulecom_10_state = 4;
  void clear_rdmodulecom_10_state();
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_10_state() const;
  void set_rdmodulecom_10_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rdmodulecom_10_state() const;
  void _internal_set_rdmodulecom_10_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 rdmodulecom_11_state = 5;
  void clear_rdmodulecom_11_state();
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_11_state() const;
  void set_rdmodulecom_11_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rdmodulecom_11_state() const;
  void _internal_set_rdmodulecom_11_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 rdmodulecom_13_state = 6;
  void clear_rdmodulecom_13_state();
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_13_state() const;
  void set_rdmodulecom_13_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rdmodulecom_13_state() const;
  void _internal_set_rdmodulecom_13_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 rdmodulecom_14_state = 7;
  void clear_rdmodulecom_14_state();
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_14_state() const;
  void set_rdmodulecom_14_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rdmodulecom_14_state() const;
  void _internal_set_rdmodulecom_14_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 rdmodulecom_15_state = 8;
  void clear_rdmodulecom_15_state();
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_15_state() const;
  void set_rdmodulecom_15_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rdmodulecom_15_state() const;
  void _internal_set_rdmodulecom_15_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 rdmodulecom_16_state = 9;
  void clear_rdmodulecom_16_state();
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_16_state() const;
  void set_rdmodulecom_16_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rdmodulecom_16_state() const;
  void _internal_set_rdmodulecom_16_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 rdmodulecom_26_state = 10;
  void clear_rdmodulecom_26_state();
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_26_state() const;
  void set_rdmodulecom_26_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rdmodulecom_26_state() const;
  void _internal_set_rdmodulecom_26_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 rdmodulecom_29_state = 11;
  void clear_rdmodulecom_29_state();
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_29_state() const;
  void set_rdmodulecom_29_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rdmodulecom_29_state() const;
  void _internal_set_rdmodulecom_29_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 rdmodulecom_30_state = 12;
  void clear_rdmodulecom_30_state();
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_30_state() const;
  void set_rdmodulecom_30_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rdmodulecom_30_state() const;
  void _internal_set_rdmodulecom_30_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 rdmodulecom_36_state = 13;
  void clear_rdmodulecom_36_state();
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_36_state() const;
  void set_rdmodulecom_36_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rdmodulecom_36_state() const;
  void _internal_set_rdmodulecom_36_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 mfl_state = 14;
  void clear_mfl_state();
  ::PROTOBUF_NAMESPACE_ID::int32 mfl_state() const;
  void set_mfl_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_mfl_state() const;
  void _internal_set_mfl_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 rdmodulecom_turnstate = 15;
  void clear_rdmodulecom_turnstate();
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_turnstate() const;
  void set_rdmodulecom_turnstate(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rdmodulecom_turnstate() const;
  void _internal_set_rdmodulecom_turnstate(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 model_mode = 16;
  void clear_model_mode();
  ::PROTOBUF_NAMESPACE_ID::int32 model_mode() const;
  void set_model_mode(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_model_mode() const;
  void _internal_set_model_mode(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 intersection_state = 17;
  void clear_intersection_state();
  ::PROTOBUF_NAMESPACE_ID::int32 intersection_state() const;
  void set_intersection_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_intersection_state() const;
  void _internal_set_intersection_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:xpilot.sr2_0.proto.StateManagementMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_cruisevehspd_;
  float rdmodulecom_cruisevehspd_st_;
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_9_st_;
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_10_state_;
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_11_state_;
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_13_state_;
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_14_state_;
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_15_state_;
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_16_state_;
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_26_state_;
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_29_state_;
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_30_state_;
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_36_state_;
  ::PROTOBUF_NAMESPACE_ID::int32 mfl_state_;
  ::PROTOBUF_NAMESPACE_ID::int32 rdmodulecom_turnstate_;
  ::PROTOBUF_NAMESPACE_ID::int32 model_mode_;
  ::PROTOBUF_NAMESPACE_ID::int32 intersection_state_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_state_5fmanage_2fstate_5fmanage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StateManagementMsg

// int32 rdmodulecom_CruiseVehSpd = 1;
inline void StateManagementMsg::clear_rdmodulecom_cruisevehspd() {
  rdmodulecom_cruisevehspd_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_rdmodulecom_cruisevehspd() const {
  return rdmodulecom_cruisevehspd_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::rdmodulecom_cruisevehspd() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_CruiseVehSpd)
  return _internal_rdmodulecom_cruisevehspd();
}
inline void StateManagementMsg::_internal_set_rdmodulecom_cruisevehspd(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rdmodulecom_cruisevehspd_ = value;
}
inline void StateManagementMsg::set_rdmodulecom_cruisevehspd(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rdmodulecom_cruisevehspd(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_CruiseVehSpd)
}

// float rdmodulecom_cruisevehSpd_st = 2;
inline void StateManagementMsg::clear_rdmodulecom_cruisevehspd_st() {
  rdmodulecom_cruisevehspd_st_ = 0;
}
inline float StateManagementMsg::_internal_rdmodulecom_cruisevehspd_st() const {
  return rdmodulecom_cruisevehspd_st_;
}
inline float StateManagementMsg::rdmodulecom_cruisevehspd_st() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_cruisevehSpd_st)
  return _internal_rdmodulecom_cruisevehspd_st();
}
inline void StateManagementMsg::_internal_set_rdmodulecom_cruisevehspd_st(float value) {
  
  rdmodulecom_cruisevehspd_st_ = value;
}
inline void StateManagementMsg::set_rdmodulecom_cruisevehspd_st(float value) {
  _internal_set_rdmodulecom_cruisevehspd_st(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_cruisevehSpd_st)
}

// int32 rdmodulecom_9_st = 3;
inline void StateManagementMsg::clear_rdmodulecom_9_st() {
  rdmodulecom_9_st_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_rdmodulecom_9_st() const {
  return rdmodulecom_9_st_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::rdmodulecom_9_st() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_9_st)
  return _internal_rdmodulecom_9_st();
}
inline void StateManagementMsg::_internal_set_rdmodulecom_9_st(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rdmodulecom_9_st_ = value;
}
inline void StateManagementMsg::set_rdmodulecom_9_st(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rdmodulecom_9_st(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_9_st)
}

// int32 rdmodulecom_10_state = 4;
inline void StateManagementMsg::clear_rdmodulecom_10_state() {
  rdmodulecom_10_state_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_rdmodulecom_10_state() const {
  return rdmodulecom_10_state_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::rdmodulecom_10_state() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_10_state)
  return _internal_rdmodulecom_10_state();
}
inline void StateManagementMsg::_internal_set_rdmodulecom_10_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rdmodulecom_10_state_ = value;
}
inline void StateManagementMsg::set_rdmodulecom_10_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rdmodulecom_10_state(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_10_state)
}

// int32 rdmodulecom_11_state = 5;
inline void StateManagementMsg::clear_rdmodulecom_11_state() {
  rdmodulecom_11_state_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_rdmodulecom_11_state() const {
  return rdmodulecom_11_state_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::rdmodulecom_11_state() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_11_state)
  return _internal_rdmodulecom_11_state();
}
inline void StateManagementMsg::_internal_set_rdmodulecom_11_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rdmodulecom_11_state_ = value;
}
inline void StateManagementMsg::set_rdmodulecom_11_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rdmodulecom_11_state(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_11_state)
}

// int32 rdmodulecom_13_state = 6;
inline void StateManagementMsg::clear_rdmodulecom_13_state() {
  rdmodulecom_13_state_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_rdmodulecom_13_state() const {
  return rdmodulecom_13_state_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::rdmodulecom_13_state() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_13_state)
  return _internal_rdmodulecom_13_state();
}
inline void StateManagementMsg::_internal_set_rdmodulecom_13_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rdmodulecom_13_state_ = value;
}
inline void StateManagementMsg::set_rdmodulecom_13_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rdmodulecom_13_state(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_13_state)
}

// int32 rdmodulecom_14_state = 7;
inline void StateManagementMsg::clear_rdmodulecom_14_state() {
  rdmodulecom_14_state_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_rdmodulecom_14_state() const {
  return rdmodulecom_14_state_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::rdmodulecom_14_state() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_14_state)
  return _internal_rdmodulecom_14_state();
}
inline void StateManagementMsg::_internal_set_rdmodulecom_14_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rdmodulecom_14_state_ = value;
}
inline void StateManagementMsg::set_rdmodulecom_14_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rdmodulecom_14_state(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_14_state)
}

// int32 rdmodulecom_15_state = 8;
inline void StateManagementMsg::clear_rdmodulecom_15_state() {
  rdmodulecom_15_state_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_rdmodulecom_15_state() const {
  return rdmodulecom_15_state_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::rdmodulecom_15_state() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_15_state)
  return _internal_rdmodulecom_15_state();
}
inline void StateManagementMsg::_internal_set_rdmodulecom_15_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rdmodulecom_15_state_ = value;
}
inline void StateManagementMsg::set_rdmodulecom_15_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rdmodulecom_15_state(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_15_state)
}

// int32 rdmodulecom_16_state = 9;
inline void StateManagementMsg::clear_rdmodulecom_16_state() {
  rdmodulecom_16_state_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_rdmodulecom_16_state() const {
  return rdmodulecom_16_state_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::rdmodulecom_16_state() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_16_state)
  return _internal_rdmodulecom_16_state();
}
inline void StateManagementMsg::_internal_set_rdmodulecom_16_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rdmodulecom_16_state_ = value;
}
inline void StateManagementMsg::set_rdmodulecom_16_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rdmodulecom_16_state(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_16_state)
}

// int32 rdmodulecom_26_state = 10;
inline void StateManagementMsg::clear_rdmodulecom_26_state() {
  rdmodulecom_26_state_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_rdmodulecom_26_state() const {
  return rdmodulecom_26_state_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::rdmodulecom_26_state() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_26_state)
  return _internal_rdmodulecom_26_state();
}
inline void StateManagementMsg::_internal_set_rdmodulecom_26_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rdmodulecom_26_state_ = value;
}
inline void StateManagementMsg::set_rdmodulecom_26_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rdmodulecom_26_state(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_26_state)
}

// int32 rdmodulecom_29_state = 11;
inline void StateManagementMsg::clear_rdmodulecom_29_state() {
  rdmodulecom_29_state_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_rdmodulecom_29_state() const {
  return rdmodulecom_29_state_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::rdmodulecom_29_state() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_29_state)
  return _internal_rdmodulecom_29_state();
}
inline void StateManagementMsg::_internal_set_rdmodulecom_29_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rdmodulecom_29_state_ = value;
}
inline void StateManagementMsg::set_rdmodulecom_29_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rdmodulecom_29_state(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_29_state)
}

// int32 rdmodulecom_30_state = 12;
inline void StateManagementMsg::clear_rdmodulecom_30_state() {
  rdmodulecom_30_state_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_rdmodulecom_30_state() const {
  return rdmodulecom_30_state_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::rdmodulecom_30_state() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_30_state)
  return _internal_rdmodulecom_30_state();
}
inline void StateManagementMsg::_internal_set_rdmodulecom_30_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rdmodulecom_30_state_ = value;
}
inline void StateManagementMsg::set_rdmodulecom_30_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rdmodulecom_30_state(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_30_state)
}

// int32 rdmodulecom_36_state = 13;
inline void StateManagementMsg::clear_rdmodulecom_36_state() {
  rdmodulecom_36_state_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_rdmodulecom_36_state() const {
  return rdmodulecom_36_state_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::rdmodulecom_36_state() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_36_state)
  return _internal_rdmodulecom_36_state();
}
inline void StateManagementMsg::_internal_set_rdmodulecom_36_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rdmodulecom_36_state_ = value;
}
inline void StateManagementMsg::set_rdmodulecom_36_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rdmodulecom_36_state(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_36_state)
}

// int32 mfl_state = 14;
inline void StateManagementMsg::clear_mfl_state() {
  mfl_state_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_mfl_state() const {
  return mfl_state_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::mfl_state() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.mfl_state)
  return _internal_mfl_state();
}
inline void StateManagementMsg::_internal_set_mfl_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  mfl_state_ = value;
}
inline void StateManagementMsg::set_mfl_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_mfl_state(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.mfl_state)
}

// int32 rdmodulecom_turnstate = 15;
inline void StateManagementMsg::clear_rdmodulecom_turnstate() {
  rdmodulecom_turnstate_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_rdmodulecom_turnstate() const {
  return rdmodulecom_turnstate_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::rdmodulecom_turnstate() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_turnstate)
  return _internal_rdmodulecom_turnstate();
}
inline void StateManagementMsg::_internal_set_rdmodulecom_turnstate(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rdmodulecom_turnstate_ = value;
}
inline void StateManagementMsg::set_rdmodulecom_turnstate(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rdmodulecom_turnstate(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.rdmodulecom_turnstate)
}

// int32 model_mode = 16;
inline void StateManagementMsg::clear_model_mode() {
  model_mode_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_model_mode() const {
  return model_mode_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::model_mode() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.model_mode)
  return _internal_model_mode();
}
inline void StateManagementMsg::_internal_set_model_mode(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  model_mode_ = value;
}
inline void StateManagementMsg::set_model_mode(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_model_mode(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.model_mode)
}

// int32 intersection_state = 17;
inline void StateManagementMsg::clear_intersection_state() {
  intersection_state_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::_internal_intersection_state() const {
  return intersection_state_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 StateManagementMsg::intersection_state() const {
  // @@protoc_insertion_point(field_get:xpilot.sr2_0.proto.StateManagementMsg.intersection_state)
  return _internal_intersection_state();
}
inline void StateManagementMsg::_internal_set_intersection_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  intersection_state_ = value;
}
inline void StateManagementMsg::set_intersection_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_intersection_state(value);
  // @@protoc_insertion_point(field_set:xpilot.sr2_0.proto.StateManagementMsg.intersection_state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace sr2_0
}  // namespace xpilot

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_state_5fmanage_2fstate_5fmanage_2eproto