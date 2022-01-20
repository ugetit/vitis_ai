// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: second/protos/pipeline.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "second/protos/pipeline.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace second {
namespace protos {
class TrainEvalPipelineConfigDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<TrainEvalPipelineConfig>
     _instance;
} _TrainEvalPipelineConfig_default_instance_;

namespace protobuf_second_2fprotos_2fpipeline_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrainEvalPipelineConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrainEvalPipelineConfig, model_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrainEvalPipelineConfig, train_input_reader_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrainEvalPipelineConfig, train_config_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrainEvalPipelineConfig, eval_input_reader_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(TrainEvalPipelineConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_TrainEvalPipelineConfig_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "second/protos/pipeline.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::second::protos::protobuf_second_2fprotos_2finput_5freader_2eproto::InitDefaults();
  ::second::protos::protobuf_second_2fprotos_2fmodel_2eproto::InitDefaults();
  ::second::protos::protobuf_second_2fprotos_2ftrain_2eproto::InitDefaults();
  _TrainEvalPipelineConfig_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_TrainEvalPipelineConfig_default_instance_);_TrainEvalPipelineConfig_default_instance_._instance.get_mutable()->model_ = const_cast< ::second::protos::DetectionModel*>(
      ::second::protos::DetectionModel::internal_default_instance());
  _TrainEvalPipelineConfig_default_instance_._instance.get_mutable()->train_input_reader_ = const_cast< ::second::protos::InputReader*>(
      ::second::protos::InputReader::internal_default_instance());
  _TrainEvalPipelineConfig_default_instance_._instance.get_mutable()->train_config_ = const_cast< ::second::protos::TrainConfig*>(
      ::second::protos::TrainConfig::internal_default_instance());
  _TrainEvalPipelineConfig_default_instance_._instance.get_mutable()->eval_input_reader_ = const_cast< ::second::protos::InputReader*>(
      ::second::protos::InputReader::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\034second/protos/pipeline.proto\022\rsecond.p"
      "rotos\032 second/protos/input_reader.proto\032"
      "\031second/protos/model.proto\032\031second/proto"
      "s/train.proto\"\350\001\n\027TrainEvalPipelineConfi"
      "g\022,\n\005model\030\001 \001(\0132\035.second.protos.Detecti"
      "onModel\0226\n\022train_input_reader\030\002 \001(\0132\032.se"
      "cond.protos.InputReader\0220\n\014train_config\030"
      "\003 \001(\0132\032.second.protos.TrainConfig\0225\n\021eva"
      "l_input_reader\030\004 \001(\0132\032.second.protos.Inp"
      "utReaderb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 376);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "second/protos/pipeline.proto", &protobuf_RegisterTypes);
  ::second::protos::protobuf_second_2fprotos_2finput_5freader_2eproto::AddDescriptors();
  ::second::protos::protobuf_second_2fprotos_2fmodel_2eproto::AddDescriptors();
  ::second::protos::protobuf_second_2fprotos_2ftrain_2eproto::AddDescriptors();
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_second_2fprotos_2fpipeline_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TrainEvalPipelineConfig::kModelFieldNumber;
const int TrainEvalPipelineConfig::kTrainInputReaderFieldNumber;
const int TrainEvalPipelineConfig::kTrainConfigFieldNumber;
const int TrainEvalPipelineConfig::kEvalInputReaderFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TrainEvalPipelineConfig::TrainEvalPipelineConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_second_2fprotos_2fpipeline_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:second.protos.TrainEvalPipelineConfig)
}
TrainEvalPipelineConfig::TrainEvalPipelineConfig(const TrainEvalPipelineConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_model()) {
    model_ = new ::second::protos::DetectionModel(*from.model_);
  } else {
    model_ = NULL;
  }
  if (from.has_train_input_reader()) {
    train_input_reader_ = new ::second::protos::InputReader(*from.train_input_reader_);
  } else {
    train_input_reader_ = NULL;
  }
  if (from.has_train_config()) {
    train_config_ = new ::second::protos::TrainConfig(*from.train_config_);
  } else {
    train_config_ = NULL;
  }
  if (from.has_eval_input_reader()) {
    eval_input_reader_ = new ::second::protos::InputReader(*from.eval_input_reader_);
  } else {
    eval_input_reader_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:second.protos.TrainEvalPipelineConfig)
}

void TrainEvalPipelineConfig::SharedCtor() {
  ::memset(&model_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&eval_input_reader_) -
      reinterpret_cast<char*>(&model_)) + sizeof(eval_input_reader_));
  _cached_size_ = 0;
}

TrainEvalPipelineConfig::~TrainEvalPipelineConfig() {
  // @@protoc_insertion_point(destructor:second.protos.TrainEvalPipelineConfig)
  SharedDtor();
}

void TrainEvalPipelineConfig::SharedDtor() {
  if (this != internal_default_instance()) delete model_;
  if (this != internal_default_instance()) delete train_input_reader_;
  if (this != internal_default_instance()) delete train_config_;
  if (this != internal_default_instance()) delete eval_input_reader_;
}

void TrainEvalPipelineConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TrainEvalPipelineConfig::descriptor() {
  protobuf_second_2fprotos_2fpipeline_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_second_2fprotos_2fpipeline_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TrainEvalPipelineConfig& TrainEvalPipelineConfig::default_instance() {
  protobuf_second_2fprotos_2fpipeline_2eproto::InitDefaults();
  return *internal_default_instance();
}

TrainEvalPipelineConfig* TrainEvalPipelineConfig::New(::google::protobuf::Arena* arena) const {
  TrainEvalPipelineConfig* n = new TrainEvalPipelineConfig;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TrainEvalPipelineConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:second.protos.TrainEvalPipelineConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && model_ != NULL) {
    delete model_;
  }
  model_ = NULL;
  if (GetArenaNoVirtual() == NULL && train_input_reader_ != NULL) {
    delete train_input_reader_;
  }
  train_input_reader_ = NULL;
  if (GetArenaNoVirtual() == NULL && train_config_ != NULL) {
    delete train_config_;
  }
  train_config_ = NULL;
  if (GetArenaNoVirtual() == NULL && eval_input_reader_ != NULL) {
    delete eval_input_reader_;
  }
  eval_input_reader_ = NULL;
  _internal_metadata_.Clear();
}

bool TrainEvalPipelineConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:second.protos.TrainEvalPipelineConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .second.protos.DetectionModel model = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_model()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .second.protos.InputReader train_input_reader = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_train_input_reader()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .second.protos.TrainConfig train_config = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_train_config()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .second.protos.InputReader eval_input_reader = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_eval_input_reader()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:second.protos.TrainEvalPipelineConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:second.protos.TrainEvalPipelineConfig)
  return false;
#undef DO_
}

void TrainEvalPipelineConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:second.protos.TrainEvalPipelineConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .second.protos.DetectionModel model = 1;
  if (this->has_model()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->model_, output);
  }

  // .second.protos.InputReader train_input_reader = 2;
  if (this->has_train_input_reader()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->train_input_reader_, output);
  }

  // .second.protos.TrainConfig train_config = 3;
  if (this->has_train_config()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->train_config_, output);
  }

  // .second.protos.InputReader eval_input_reader = 4;
  if (this->has_eval_input_reader()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->eval_input_reader_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:second.protos.TrainEvalPipelineConfig)
}

::google::protobuf::uint8* TrainEvalPipelineConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:second.protos.TrainEvalPipelineConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .second.protos.DetectionModel model = 1;
  if (this->has_model()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->model_, deterministic, target);
  }

  // .second.protos.InputReader train_input_reader = 2;
  if (this->has_train_input_reader()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->train_input_reader_, deterministic, target);
  }

  // .second.protos.TrainConfig train_config = 3;
  if (this->has_train_config()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->train_config_, deterministic, target);
  }

  // .second.protos.InputReader eval_input_reader = 4;
  if (this->has_eval_input_reader()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->eval_input_reader_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:second.protos.TrainEvalPipelineConfig)
  return target;
}

size_t TrainEvalPipelineConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:second.protos.TrainEvalPipelineConfig)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .second.protos.DetectionModel model = 1;
  if (this->has_model()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->model_);
  }

  // .second.protos.InputReader train_input_reader = 2;
  if (this->has_train_input_reader()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->train_input_reader_);
  }

  // .second.protos.TrainConfig train_config = 3;
  if (this->has_train_config()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->train_config_);
  }

  // .second.protos.InputReader eval_input_reader = 4;
  if (this->has_eval_input_reader()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->eval_input_reader_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TrainEvalPipelineConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:second.protos.TrainEvalPipelineConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const TrainEvalPipelineConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TrainEvalPipelineConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:second.protos.TrainEvalPipelineConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:second.protos.TrainEvalPipelineConfig)
    MergeFrom(*source);
  }
}

void TrainEvalPipelineConfig::MergeFrom(const TrainEvalPipelineConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:second.protos.TrainEvalPipelineConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_model()) {
    mutable_model()->::second::protos::DetectionModel::MergeFrom(from.model());
  }
  if (from.has_train_input_reader()) {
    mutable_train_input_reader()->::second::protos::InputReader::MergeFrom(from.train_input_reader());
  }
  if (from.has_train_config()) {
    mutable_train_config()->::second::protos::TrainConfig::MergeFrom(from.train_config());
  }
  if (from.has_eval_input_reader()) {
    mutable_eval_input_reader()->::second::protos::InputReader::MergeFrom(from.eval_input_reader());
  }
}

void TrainEvalPipelineConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:second.protos.TrainEvalPipelineConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TrainEvalPipelineConfig::CopyFrom(const TrainEvalPipelineConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:second.protos.TrainEvalPipelineConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrainEvalPipelineConfig::IsInitialized() const {
  return true;
}

void TrainEvalPipelineConfig::Swap(TrainEvalPipelineConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TrainEvalPipelineConfig::InternalSwap(TrainEvalPipelineConfig* other) {
  using std::swap;
  swap(model_, other->model_);
  swap(train_input_reader_, other->train_input_reader_);
  swap(train_config_, other->train_config_);
  swap(eval_input_reader_, other->eval_input_reader_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TrainEvalPipelineConfig::GetMetadata() const {
  protobuf_second_2fprotos_2fpipeline_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_second_2fprotos_2fpipeline_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TrainEvalPipelineConfig

// .second.protos.DetectionModel model = 1;
bool TrainEvalPipelineConfig::has_model() const {
  return this != internal_default_instance() && model_ != NULL;
}
void TrainEvalPipelineConfig::clear_model() {
  if (GetArenaNoVirtual() == NULL && model_ != NULL) delete model_;
  model_ = NULL;
}
const ::second::protos::DetectionModel& TrainEvalPipelineConfig::model() const {
  const ::second::protos::DetectionModel* p = model_;
  // @@protoc_insertion_point(field_get:second.protos.TrainEvalPipelineConfig.model)
  return p != NULL ? *p : *reinterpret_cast<const ::second::protos::DetectionModel*>(
      &::second::protos::_DetectionModel_default_instance_);
}
::second::protos::DetectionModel* TrainEvalPipelineConfig::mutable_model() {
  
  if (model_ == NULL) {
    model_ = new ::second::protos::DetectionModel;
  }
  // @@protoc_insertion_point(field_mutable:second.protos.TrainEvalPipelineConfig.model)
  return model_;
}
::second::protos::DetectionModel* TrainEvalPipelineConfig::release_model() {
  // @@protoc_insertion_point(field_release:second.protos.TrainEvalPipelineConfig.model)
  
  ::second::protos::DetectionModel* temp = model_;
  model_ = NULL;
  return temp;
}
void TrainEvalPipelineConfig::set_allocated_model(::second::protos::DetectionModel* model) {
  delete model_;
  model_ = model;
  if (model) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:second.protos.TrainEvalPipelineConfig.model)
}

// .second.protos.InputReader train_input_reader = 2;
bool TrainEvalPipelineConfig::has_train_input_reader() const {
  return this != internal_default_instance() && train_input_reader_ != NULL;
}
void TrainEvalPipelineConfig::clear_train_input_reader() {
  if (GetArenaNoVirtual() == NULL && train_input_reader_ != NULL) delete train_input_reader_;
  train_input_reader_ = NULL;
}
const ::second::protos::InputReader& TrainEvalPipelineConfig::train_input_reader() const {
  const ::second::protos::InputReader* p = train_input_reader_;
  // @@protoc_insertion_point(field_get:second.protos.TrainEvalPipelineConfig.train_input_reader)
  return p != NULL ? *p : *reinterpret_cast<const ::second::protos::InputReader*>(
      &::second::protos::_InputReader_default_instance_);
}
::second::protos::InputReader* TrainEvalPipelineConfig::mutable_train_input_reader() {
  
  if (train_input_reader_ == NULL) {
    train_input_reader_ = new ::second::protos::InputReader;
  }
  // @@protoc_insertion_point(field_mutable:second.protos.TrainEvalPipelineConfig.train_input_reader)
  return train_input_reader_;
}
::second::protos::InputReader* TrainEvalPipelineConfig::release_train_input_reader() {
  // @@protoc_insertion_point(field_release:second.protos.TrainEvalPipelineConfig.train_input_reader)
  
  ::second::protos::InputReader* temp = train_input_reader_;
  train_input_reader_ = NULL;
  return temp;
}
void TrainEvalPipelineConfig::set_allocated_train_input_reader(::second::protos::InputReader* train_input_reader) {
  delete train_input_reader_;
  train_input_reader_ = train_input_reader;
  if (train_input_reader) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:second.protos.TrainEvalPipelineConfig.train_input_reader)
}

// .second.protos.TrainConfig train_config = 3;
bool TrainEvalPipelineConfig::has_train_config() const {
  return this != internal_default_instance() && train_config_ != NULL;
}
void TrainEvalPipelineConfig::clear_train_config() {
  if (GetArenaNoVirtual() == NULL && train_config_ != NULL) delete train_config_;
  train_config_ = NULL;
}
const ::second::protos::TrainConfig& TrainEvalPipelineConfig::train_config() const {
  const ::second::protos::TrainConfig* p = train_config_;
  // @@protoc_insertion_point(field_get:second.protos.TrainEvalPipelineConfig.train_config)
  return p != NULL ? *p : *reinterpret_cast<const ::second::protos::TrainConfig*>(
      &::second::protos::_TrainConfig_default_instance_);
}
::second::protos::TrainConfig* TrainEvalPipelineConfig::mutable_train_config() {
  
  if (train_config_ == NULL) {
    train_config_ = new ::second::protos::TrainConfig;
  }
  // @@protoc_insertion_point(field_mutable:second.protos.TrainEvalPipelineConfig.train_config)
  return train_config_;
}
::second::protos::TrainConfig* TrainEvalPipelineConfig::release_train_config() {
  // @@protoc_insertion_point(field_release:second.protos.TrainEvalPipelineConfig.train_config)
  
  ::second::protos::TrainConfig* temp = train_config_;
  train_config_ = NULL;
  return temp;
}
void TrainEvalPipelineConfig::set_allocated_train_config(::second::protos::TrainConfig* train_config) {
  delete train_config_;
  train_config_ = train_config;
  if (train_config) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:second.protos.TrainEvalPipelineConfig.train_config)
}

// .second.protos.InputReader eval_input_reader = 4;
bool TrainEvalPipelineConfig::has_eval_input_reader() const {
  return this != internal_default_instance() && eval_input_reader_ != NULL;
}
void TrainEvalPipelineConfig::clear_eval_input_reader() {
  if (GetArenaNoVirtual() == NULL && eval_input_reader_ != NULL) delete eval_input_reader_;
  eval_input_reader_ = NULL;
}
const ::second::protos::InputReader& TrainEvalPipelineConfig::eval_input_reader() const {
  const ::second::protos::InputReader* p = eval_input_reader_;
  // @@protoc_insertion_point(field_get:second.protos.TrainEvalPipelineConfig.eval_input_reader)
  return p != NULL ? *p : *reinterpret_cast<const ::second::protos::InputReader*>(
      &::second::protos::_InputReader_default_instance_);
}
::second::protos::InputReader* TrainEvalPipelineConfig::mutable_eval_input_reader() {
  
  if (eval_input_reader_ == NULL) {
    eval_input_reader_ = new ::second::protos::InputReader;
  }
  // @@protoc_insertion_point(field_mutable:second.protos.TrainEvalPipelineConfig.eval_input_reader)
  return eval_input_reader_;
}
::second::protos::InputReader* TrainEvalPipelineConfig::release_eval_input_reader() {
  // @@protoc_insertion_point(field_release:second.protos.TrainEvalPipelineConfig.eval_input_reader)
  
  ::second::protos::InputReader* temp = eval_input_reader_;
  eval_input_reader_ = NULL;
  return temp;
}
void TrainEvalPipelineConfig::set_allocated_eval_input_reader(::second::protos::InputReader* eval_input_reader) {
  delete eval_input_reader_;
  eval_input_reader_ = eval_input_reader;
  if (eval_input_reader) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:second.protos.TrainEvalPipelineConfig.eval_input_reader)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace second

// @@protoc_insertion_point(global_scope)