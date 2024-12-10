// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mf_localpose/MfLocalPose.proto

#include "mf_localpose/MfLocalPose.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_base_5fstruct_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_LocalPoseInfo_base_5fstruct_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_base_5fstruct_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Pose6DOF_base_5fstruct_2eproto;
namespace xpilot {
namespace sr2_0 {
namespace proto {
class MfLocalPoseMsgDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MfLocalPoseMsg> _instance;
} _MfLocalPoseMsg_default_instance_;
}  // namespace proto
}  // namespace sr2_0
}  // namespace xpilot
static void InitDefaultsscc_info_MfLocalPoseMsg_mf_5flocalpose_2fMfLocalPose_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::xpilot::sr2_0::proto::_MfLocalPoseMsg_default_instance_;
    new (ptr) ::xpilot::sr2_0::proto::MfLocalPoseMsg();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::xpilot::sr2_0::proto::MfLocalPoseMsg::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_MfLocalPoseMsg_mf_5flocalpose_2fMfLocalPose_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_MfLocalPoseMsg_mf_5flocalpose_2fMfLocalPose_2eproto}, {
      &scc_info_LocalPoseInfo_base_5fstruct_2eproto.base,
      &scc_info_Pose6DOF_base_5fstruct_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mf_5flocalpose_2fMfLocalPose_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mf_5flocalpose_2fMfLocalPose_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mf_5flocalpose_2fMfLocalPose_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mf_5flocalpose_2fMfLocalPose_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::xpilot::sr2_0::proto::MfLocalPoseMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::xpilot::sr2_0::proto::MfLocalPoseMsg, timestamp_),
  PROTOBUF_FIELD_OFFSET(::xpilot::sr2_0::proto::MfLocalPoseMsg, mf_local_pose_),
  PROTOBUF_FIELD_OFFSET(::xpilot::sr2_0::proto::MfLocalPoseMsg, local_frame_ref_in_ecef_),
  PROTOBUF_FIELD_OFFSET(::xpilot::sr2_0::proto::MfLocalPoseMsg, last_mf_time_),
  PROTOBUF_FIELD_OFFSET(::xpilot::sr2_0::proto::MfLocalPoseMsg, fusion_status_),
  PROTOBUF_FIELD_OFFSET(::xpilot::sr2_0::proto::MfLocalPoseMsg, mf_dop_pose_),
  PROTOBUF_FIELD_OFFSET(::xpilot::sr2_0::proto::MfLocalPoseMsg, mf_dom_pose_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::xpilot::sr2_0::proto::MfLocalPoseMsg)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::xpilot::sr2_0::proto::_MfLocalPoseMsg_default_instance_),
};

const char descriptor_table_protodef_mf_5flocalpose_2fMfLocalPose_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036mf_localpose/MfLocalPose.proto\022\022xpilot"
  ".sr2_0.proto\032\021base_struct.proto\"\271\002\n\016MfLo"
  "calPoseMsg\022\021\n\ttimestamp\030\001 \001(\004\0228\n\rmf_loca"
  "l_pose\030\002 \001(\0132!.xpilot.sr2_0.proto.LocalP"
  "oseInfo\022=\n\027local_frame_ref_in_ecef\030\003 \001(\013"
  "2\034.xpilot.sr2_0.proto.Pose6DOF\022\024\n\014last_m"
  "f_time\030\004 \001(\004\022\025\n\rfusion_status\030\005 \001(\r\0226\n\013m"
  "f_dop_pose\030\006 \001(\0132!.xpilot.sr2_0.proto.Lo"
  "calPoseInfo\0226\n\013mf_dom_pose\030\007 \001(\0132!.xpilo"
  "t.sr2_0.proto.LocalPoseInfob\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mf_5flocalpose_2fMfLocalPose_2eproto_deps[1] = {
  &::descriptor_table_base_5fstruct_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_mf_5flocalpose_2fMfLocalPose_2eproto_sccs[1] = {
  &scc_info_MfLocalPoseMsg_mf_5flocalpose_2fMfLocalPose_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mf_5flocalpose_2fMfLocalPose_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mf_5flocalpose_2fMfLocalPose_2eproto = {
  false, false, descriptor_table_protodef_mf_5flocalpose_2fMfLocalPose_2eproto, "mf_localpose/MfLocalPose.proto", 395,
  &descriptor_table_mf_5flocalpose_2fMfLocalPose_2eproto_once, descriptor_table_mf_5flocalpose_2fMfLocalPose_2eproto_sccs, descriptor_table_mf_5flocalpose_2fMfLocalPose_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_mf_5flocalpose_2fMfLocalPose_2eproto::offsets,
  file_level_metadata_mf_5flocalpose_2fMfLocalPose_2eproto, 1, file_level_enum_descriptors_mf_5flocalpose_2fMfLocalPose_2eproto, file_level_service_descriptors_mf_5flocalpose_2fMfLocalPose_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_mf_5flocalpose_2fMfLocalPose_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_mf_5flocalpose_2fMfLocalPose_2eproto)), true);
namespace xpilot {
namespace sr2_0 {
namespace proto {

// ===================================================================

void MfLocalPoseMsg::InitAsDefaultInstance() {
  ::xpilot::sr2_0::proto::_MfLocalPoseMsg_default_instance_._instance.get_mutable()->mf_local_pose_ = const_cast< ::xpilot::sr2_0::proto::LocalPoseInfo*>(
      ::xpilot::sr2_0::proto::LocalPoseInfo::internal_default_instance());
  ::xpilot::sr2_0::proto::_MfLocalPoseMsg_default_instance_._instance.get_mutable()->local_frame_ref_in_ecef_ = const_cast< ::xpilot::sr2_0::proto::Pose6DOF*>(
      ::xpilot::sr2_0::proto::Pose6DOF::internal_default_instance());
  ::xpilot::sr2_0::proto::_MfLocalPoseMsg_default_instance_._instance.get_mutable()->mf_dop_pose_ = const_cast< ::xpilot::sr2_0::proto::LocalPoseInfo*>(
      ::xpilot::sr2_0::proto::LocalPoseInfo::internal_default_instance());
  ::xpilot::sr2_0::proto::_MfLocalPoseMsg_default_instance_._instance.get_mutable()->mf_dom_pose_ = const_cast< ::xpilot::sr2_0::proto::LocalPoseInfo*>(
      ::xpilot::sr2_0::proto::LocalPoseInfo::internal_default_instance());
}
class MfLocalPoseMsg::_Internal {
 public:
  static const ::xpilot::sr2_0::proto::LocalPoseInfo& mf_local_pose(const MfLocalPoseMsg* msg);
  static const ::xpilot::sr2_0::proto::Pose6DOF& local_frame_ref_in_ecef(const MfLocalPoseMsg* msg);
  static const ::xpilot::sr2_0::proto::LocalPoseInfo& mf_dop_pose(const MfLocalPoseMsg* msg);
  static const ::xpilot::sr2_0::proto::LocalPoseInfo& mf_dom_pose(const MfLocalPoseMsg* msg);
};

const ::xpilot::sr2_0::proto::LocalPoseInfo&
MfLocalPoseMsg::_Internal::mf_local_pose(const MfLocalPoseMsg* msg) {
  return *msg->mf_local_pose_;
}
const ::xpilot::sr2_0::proto::Pose6DOF&
MfLocalPoseMsg::_Internal::local_frame_ref_in_ecef(const MfLocalPoseMsg* msg) {
  return *msg->local_frame_ref_in_ecef_;
}
const ::xpilot::sr2_0::proto::LocalPoseInfo&
MfLocalPoseMsg::_Internal::mf_dop_pose(const MfLocalPoseMsg* msg) {
  return *msg->mf_dop_pose_;
}
const ::xpilot::sr2_0::proto::LocalPoseInfo&
MfLocalPoseMsg::_Internal::mf_dom_pose(const MfLocalPoseMsg* msg) {
  return *msg->mf_dom_pose_;
}
void MfLocalPoseMsg::clear_mf_local_pose() {
  if (GetArena() == nullptr && mf_local_pose_ != nullptr) {
    delete mf_local_pose_;
  }
  mf_local_pose_ = nullptr;
}
void MfLocalPoseMsg::clear_local_frame_ref_in_ecef() {
  if (GetArena() == nullptr && local_frame_ref_in_ecef_ != nullptr) {
    delete local_frame_ref_in_ecef_;
  }
  local_frame_ref_in_ecef_ = nullptr;
}
void MfLocalPoseMsg::clear_mf_dop_pose() {
  if (GetArena() == nullptr && mf_dop_pose_ != nullptr) {
    delete mf_dop_pose_;
  }
  mf_dop_pose_ = nullptr;
}
void MfLocalPoseMsg::clear_mf_dom_pose() {
  if (GetArena() == nullptr && mf_dom_pose_ != nullptr) {
    delete mf_dom_pose_;
  }
  mf_dom_pose_ = nullptr;
}
MfLocalPoseMsg::MfLocalPoseMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:xpilot.sr2_0.proto.MfLocalPoseMsg)
}
MfLocalPoseMsg::MfLocalPoseMsg(const MfLocalPoseMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_mf_local_pose()) {
    mf_local_pose_ = new ::xpilot::sr2_0::proto::LocalPoseInfo(*from.mf_local_pose_);
  } else {
    mf_local_pose_ = nullptr;
  }
  if (from._internal_has_local_frame_ref_in_ecef()) {
    local_frame_ref_in_ecef_ = new ::xpilot::sr2_0::proto::Pose6DOF(*from.local_frame_ref_in_ecef_);
  } else {
    local_frame_ref_in_ecef_ = nullptr;
  }
  if (from._internal_has_mf_dop_pose()) {
    mf_dop_pose_ = new ::xpilot::sr2_0::proto::LocalPoseInfo(*from.mf_dop_pose_);
  } else {
    mf_dop_pose_ = nullptr;
  }
  if (from._internal_has_mf_dom_pose()) {
    mf_dom_pose_ = new ::xpilot::sr2_0::proto::LocalPoseInfo(*from.mf_dom_pose_);
  } else {
    mf_dom_pose_ = nullptr;
  }
  ::memcpy(&timestamp_, &from.timestamp_,
    static_cast<size_t>(reinterpret_cast<char*>(&fusion_status_) -
    reinterpret_cast<char*>(&timestamp_)) + sizeof(fusion_status_));
  // @@protoc_insertion_point(copy_constructor:xpilot.sr2_0.proto.MfLocalPoseMsg)
}

void MfLocalPoseMsg::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_MfLocalPoseMsg_mf_5flocalpose_2fMfLocalPose_2eproto.base);
  ::memset(&mf_local_pose_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&fusion_status_) -
      reinterpret_cast<char*>(&mf_local_pose_)) + sizeof(fusion_status_));
}

MfLocalPoseMsg::~MfLocalPoseMsg() {
  // @@protoc_insertion_point(destructor:xpilot.sr2_0.proto.MfLocalPoseMsg)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void MfLocalPoseMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete mf_local_pose_;
  if (this != internal_default_instance()) delete local_frame_ref_in_ecef_;
  if (this != internal_default_instance()) delete mf_dop_pose_;
  if (this != internal_default_instance()) delete mf_dom_pose_;
}

void MfLocalPoseMsg::ArenaDtor(void* object) {
  MfLocalPoseMsg* _this = reinterpret_cast< MfLocalPoseMsg* >(object);
  (void)_this;
}
void MfLocalPoseMsg::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MfLocalPoseMsg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MfLocalPoseMsg& MfLocalPoseMsg::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MfLocalPoseMsg_mf_5flocalpose_2fMfLocalPose_2eproto.base);
  return *internal_default_instance();
}


void MfLocalPoseMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:xpilot.sr2_0.proto.MfLocalPoseMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && mf_local_pose_ != nullptr) {
    delete mf_local_pose_;
  }
  mf_local_pose_ = nullptr;
  if (GetArena() == nullptr && local_frame_ref_in_ecef_ != nullptr) {
    delete local_frame_ref_in_ecef_;
  }
  local_frame_ref_in_ecef_ = nullptr;
  if (GetArena() == nullptr && mf_dop_pose_ != nullptr) {
    delete mf_dop_pose_;
  }
  mf_dop_pose_ = nullptr;
  if (GetArena() == nullptr && mf_dom_pose_ != nullptr) {
    delete mf_dom_pose_;
  }
  mf_dom_pose_ = nullptr;
  ::memset(&timestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&fusion_status_) -
      reinterpret_cast<char*>(&timestamp_)) + sizeof(fusion_status_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MfLocalPoseMsg::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint64 timestamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .xpilot.sr2_0.proto.LocalPoseInfo mf_local_pose = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_mf_local_pose(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .xpilot.sr2_0.proto.Pose6DOF local_frame_ref_in_ecef = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_local_frame_ref_in_ecef(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 last_mf_time = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          last_mf_time_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 fusion_status = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          fusion_status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .xpilot.sr2_0.proto.LocalPoseInfo mf_dop_pose = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_mf_dop_pose(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .xpilot.sr2_0.proto.LocalPoseInfo mf_dom_pose = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_mf_dom_pose(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MfLocalPoseMsg::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xpilot.sr2_0.proto.MfLocalPoseMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 timestamp = 1;
  if (this->timestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_timestamp(), target);
  }

  // .xpilot.sr2_0.proto.LocalPoseInfo mf_local_pose = 2;
  if (this->has_mf_local_pose()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::mf_local_pose(this), target, stream);
  }

  // .xpilot.sr2_0.proto.Pose6DOF local_frame_ref_in_ecef = 3;
  if (this->has_local_frame_ref_in_ecef()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::local_frame_ref_in_ecef(this), target, stream);
  }

  // uint64 last_mf_time = 4;
  if (this->last_mf_time() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(4, this->_internal_last_mf_time(), target);
  }

  // uint32 fusion_status = 5;
  if (this->fusion_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(5, this->_internal_fusion_status(), target);
  }

  // .xpilot.sr2_0.proto.LocalPoseInfo mf_dop_pose = 6;
  if (this->has_mf_dop_pose()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::mf_dop_pose(this), target, stream);
  }

  // .xpilot.sr2_0.proto.LocalPoseInfo mf_dom_pose = 7;
  if (this->has_mf_dom_pose()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        7, _Internal::mf_dom_pose(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xpilot.sr2_0.proto.MfLocalPoseMsg)
  return target;
}

size_t MfLocalPoseMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xpilot.sr2_0.proto.MfLocalPoseMsg)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .xpilot.sr2_0.proto.LocalPoseInfo mf_local_pose = 2;
  if (this->has_mf_local_pose()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *mf_local_pose_);
  }

  // .xpilot.sr2_0.proto.Pose6DOF local_frame_ref_in_ecef = 3;
  if (this->has_local_frame_ref_in_ecef()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *local_frame_ref_in_ecef_);
  }

  // .xpilot.sr2_0.proto.LocalPoseInfo mf_dop_pose = 6;
  if (this->has_mf_dop_pose()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *mf_dop_pose_);
  }

  // .xpilot.sr2_0.proto.LocalPoseInfo mf_dom_pose = 7;
  if (this->has_mf_dom_pose()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *mf_dom_pose_);
  }

  // uint64 timestamp = 1;
  if (this->timestamp() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_timestamp());
  }

  // uint64 last_mf_time = 4;
  if (this->last_mf_time() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_last_mf_time());
  }

  // uint32 fusion_status = 5;
  if (this->fusion_status() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_fusion_status());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MfLocalPoseMsg::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:xpilot.sr2_0.proto.MfLocalPoseMsg)
  GOOGLE_DCHECK_NE(&from, this);
  const MfLocalPoseMsg* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MfLocalPoseMsg>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:xpilot.sr2_0.proto.MfLocalPoseMsg)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:xpilot.sr2_0.proto.MfLocalPoseMsg)
    MergeFrom(*source);
  }
}

void MfLocalPoseMsg::MergeFrom(const MfLocalPoseMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:xpilot.sr2_0.proto.MfLocalPoseMsg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_mf_local_pose()) {
    _internal_mutable_mf_local_pose()->::xpilot::sr2_0::proto::LocalPoseInfo::MergeFrom(from._internal_mf_local_pose());
  }
  if (from.has_local_frame_ref_in_ecef()) {
    _internal_mutable_local_frame_ref_in_ecef()->::xpilot::sr2_0::proto::Pose6DOF::MergeFrom(from._internal_local_frame_ref_in_ecef());
  }
  if (from.has_mf_dop_pose()) {
    _internal_mutable_mf_dop_pose()->::xpilot::sr2_0::proto::LocalPoseInfo::MergeFrom(from._internal_mf_dop_pose());
  }
  if (from.has_mf_dom_pose()) {
    _internal_mutable_mf_dom_pose()->::xpilot::sr2_0::proto::LocalPoseInfo::MergeFrom(from._internal_mf_dom_pose());
  }
  if (from.timestamp() != 0) {
    _internal_set_timestamp(from._internal_timestamp());
  }
  if (from.last_mf_time() != 0) {
    _internal_set_last_mf_time(from._internal_last_mf_time());
  }
  if (from.fusion_status() != 0) {
    _internal_set_fusion_status(from._internal_fusion_status());
  }
}

void MfLocalPoseMsg::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:xpilot.sr2_0.proto.MfLocalPoseMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MfLocalPoseMsg::CopyFrom(const MfLocalPoseMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xpilot.sr2_0.proto.MfLocalPoseMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MfLocalPoseMsg::IsInitialized() const {
  return true;
}

void MfLocalPoseMsg::InternalSwap(MfLocalPoseMsg* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MfLocalPoseMsg, fusion_status_)
      + sizeof(MfLocalPoseMsg::fusion_status_)
      - PROTOBUF_FIELD_OFFSET(MfLocalPoseMsg, mf_local_pose_)>(
          reinterpret_cast<char*>(&mf_local_pose_),
          reinterpret_cast<char*>(&other->mf_local_pose_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MfLocalPoseMsg::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace sr2_0
}  // namespace xpilot
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::xpilot::sr2_0::proto::MfLocalPoseMsg* Arena::CreateMaybeMessage< ::xpilot::sr2_0::proto::MfLocalPoseMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::xpilot::sr2_0::proto::MfLocalPoseMsg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
