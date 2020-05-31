// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Replacement.proto

#ifndef PROTOBUF_grSim_5fReplacement_2eproto__INCLUDED
#define PROTOBUF_grSim_5fReplacement_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_grSim_5fReplacement_2eproto();
void protobuf_AssignDesc_grSim_5fReplacement_2eproto();
void protobuf_ShutdownFile_grSim_5fReplacement_2eproto();

class grSim_BallReplacement;
class grSim_Replacement;
class grSim_RobotReplacement;

// ===================================================================

class grSim_RobotReplacement : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:grSim_RobotReplacement) */ {
 public:
  grSim_RobotReplacement();
  virtual ~grSim_RobotReplacement();

  grSim_RobotReplacement(const grSim_RobotReplacement& from);

  inline grSim_RobotReplacement& operator=(const grSim_RobotReplacement& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const grSim_RobotReplacement& default_instance();

  void Swap(grSim_RobotReplacement* other);

  // implements Message ----------------------------------------------

  inline grSim_RobotReplacement* New() const { return New(NULL); }

  grSim_RobotReplacement* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const grSim_RobotReplacement& from);
  void MergeFrom(const grSim_RobotReplacement& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(grSim_RobotReplacement* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required double x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  double x() const;
  void set_x(double value);

  // required double y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  double y() const;
  void set_y(double value);

  // required double dir = 3;
  bool has_dir() const;
  void clear_dir();
  static const int kDirFieldNumber = 3;
  double dir() const;
  void set_dir(double value);

  // required uint32 id = 4;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 4;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // required bool yellowteam = 5;
  bool has_yellowteam() const;
  void clear_yellowteam();
  static const int kYellowteamFieldNumber = 5;
  bool yellowteam() const;
  void set_yellowteam(bool value);

  // @@protoc_insertion_point(class_scope:grSim_RobotReplacement)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_dir();
  inline void clear_has_dir();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_yellowteam();
  inline void clear_has_yellowteam();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double x_;
  double y_;
  double dir_;
  ::google::protobuf::uint32 id_;
  bool yellowteam_;
  friend void  protobuf_AddDesc_grSim_5fReplacement_2eproto();
  friend void protobuf_AssignDesc_grSim_5fReplacement_2eproto();
  friend void protobuf_ShutdownFile_grSim_5fReplacement_2eproto();

  void InitAsDefaultInstance();
  static grSim_RobotReplacement* default_instance_;
};
// -------------------------------------------------------------------

class grSim_BallReplacement : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:grSim_BallReplacement) */ {
 public:
  grSim_BallReplacement();
  virtual ~grSim_BallReplacement();

  grSim_BallReplacement(const grSim_BallReplacement& from);

  inline grSim_BallReplacement& operator=(const grSim_BallReplacement& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const grSim_BallReplacement& default_instance();

  void Swap(grSim_BallReplacement* other);

  // implements Message ----------------------------------------------

  inline grSim_BallReplacement* New() const { return New(NULL); }

  grSim_BallReplacement* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const grSim_BallReplacement& from);
  void MergeFrom(const grSim_BallReplacement& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(grSim_BallReplacement* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required double x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  double x() const;
  void set_x(double value);

  // required double y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  double y() const;
  void set_y(double value);

  // required double vx = 3;
  bool has_vx() const;
  void clear_vx();
  static const int kVxFieldNumber = 3;
  double vx() const;
  void set_vx(double value);

  // required double vy = 4;
  bool has_vy() const;
  void clear_vy();
  static const int kVyFieldNumber = 4;
  double vy() const;
  void set_vy(double value);

  // @@protoc_insertion_point(class_scope:grSim_BallReplacement)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_vx();
  inline void clear_has_vx();
  inline void set_has_vy();
  inline void clear_has_vy();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double x_;
  double y_;
  double vx_;
  double vy_;
  friend void  protobuf_AddDesc_grSim_5fReplacement_2eproto();
  friend void protobuf_AssignDesc_grSim_5fReplacement_2eproto();
  friend void protobuf_ShutdownFile_grSim_5fReplacement_2eproto();

  void InitAsDefaultInstance();
  static grSim_BallReplacement* default_instance_;
};
// -------------------------------------------------------------------

class grSim_Replacement : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:grSim_Replacement) */ {
 public:
  grSim_Replacement();
  virtual ~grSim_Replacement();

  grSim_Replacement(const grSim_Replacement& from);

  inline grSim_Replacement& operator=(const grSim_Replacement& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const grSim_Replacement& default_instance();

  void Swap(grSim_Replacement* other);

  // implements Message ----------------------------------------------

  inline grSim_Replacement* New() const { return New(NULL); }

  grSim_Replacement* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const grSim_Replacement& from);
  void MergeFrom(const grSim_Replacement& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(grSim_Replacement* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .grSim_BallReplacement ball = 1;
  bool has_ball() const;
  void clear_ball();
  static const int kBallFieldNumber = 1;
  const ::grSim_BallReplacement& ball() const;
  ::grSim_BallReplacement* mutable_ball();
  ::grSim_BallReplacement* release_ball();
  void set_allocated_ball(::grSim_BallReplacement* ball);

  // repeated .grSim_RobotReplacement robots = 2;
  int robots_size() const;
  void clear_robots();
  static const int kRobotsFieldNumber = 2;
  const ::grSim_RobotReplacement& robots(int index) const;
  ::grSim_RobotReplacement* mutable_robots(int index);
  ::grSim_RobotReplacement* add_robots();
  ::google::protobuf::RepeatedPtrField< ::grSim_RobotReplacement >*
      mutable_robots();
  const ::google::protobuf::RepeatedPtrField< ::grSim_RobotReplacement >&
      robots() const;

  // @@protoc_insertion_point(class_scope:grSim_Replacement)
 private:
  inline void set_has_ball();
  inline void clear_has_ball();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::grSim_BallReplacement* ball_;
  ::google::protobuf::RepeatedPtrField< ::grSim_RobotReplacement > robots_;
  friend void  protobuf_AddDesc_grSim_5fReplacement_2eproto();
  friend void protobuf_AssignDesc_grSim_5fReplacement_2eproto();
  friend void protobuf_ShutdownFile_grSim_5fReplacement_2eproto();

  void InitAsDefaultInstance();
  static grSim_Replacement* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// grSim_RobotReplacement

// required double x = 1;
inline bool grSim_RobotReplacement::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void grSim_RobotReplacement::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void grSim_RobotReplacement::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void grSim_RobotReplacement::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline double grSim_RobotReplacement::x() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.x)
  return x_;
}
inline void grSim_RobotReplacement::set_x(double value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.x)
}

// required double y = 2;
inline bool grSim_RobotReplacement::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void grSim_RobotReplacement::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void grSim_RobotReplacement::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void grSim_RobotReplacement::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline double grSim_RobotReplacement::y() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.y)
  return y_;
}
inline void grSim_RobotReplacement::set_y(double value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.y)
}

// required double dir = 3;
inline bool grSim_RobotReplacement::has_dir() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void grSim_RobotReplacement::set_has_dir() {
  _has_bits_[0] |= 0x00000004u;
}
inline void grSim_RobotReplacement::clear_has_dir() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void grSim_RobotReplacement::clear_dir() {
  dir_ = 0;
  clear_has_dir();
}
inline double grSim_RobotReplacement::dir() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.dir)
  return dir_;
}
inline void grSim_RobotReplacement::set_dir(double value) {
  set_has_dir();
  dir_ = value;
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.dir)
}

// required uint32 id = 4;
inline bool grSim_RobotReplacement::has_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void grSim_RobotReplacement::set_has_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void grSim_RobotReplacement::clear_has_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void grSim_RobotReplacement::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 grSim_RobotReplacement::id() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.id)
  return id_;
}
inline void grSim_RobotReplacement::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.id)
}

// required bool yellowteam = 5;
inline bool grSim_RobotReplacement::has_yellowteam() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void grSim_RobotReplacement::set_has_yellowteam() {
  _has_bits_[0] |= 0x00000010u;
}
inline void grSim_RobotReplacement::clear_has_yellowteam() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void grSim_RobotReplacement::clear_yellowteam() {
  yellowteam_ = false;
  clear_has_yellowteam();
}
inline bool grSim_RobotReplacement::yellowteam() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.yellowteam)
  return yellowteam_;
}
inline void grSim_RobotReplacement::set_yellowteam(bool value) {
  set_has_yellowteam();
  yellowteam_ = value;
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.yellowteam)
}

// -------------------------------------------------------------------

// grSim_BallReplacement

// required double x = 1;
inline bool grSim_BallReplacement::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void grSim_BallReplacement::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void grSim_BallReplacement::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void grSim_BallReplacement::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline double grSim_BallReplacement::x() const {
  // @@protoc_insertion_point(field_get:grSim_BallReplacement.x)
  return x_;
}
inline void grSim_BallReplacement::set_x(double value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:grSim_BallReplacement.x)
}

// required double y = 2;
inline bool grSim_BallReplacement::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void grSim_BallReplacement::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void grSim_BallReplacement::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void grSim_BallReplacement::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline double grSim_BallReplacement::y() const {
  // @@protoc_insertion_point(field_get:grSim_BallReplacement.y)
  return y_;
}
inline void grSim_BallReplacement::set_y(double value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:grSim_BallReplacement.y)
}

// required double vx = 3;
inline bool grSim_BallReplacement::has_vx() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void grSim_BallReplacement::set_has_vx() {
  _has_bits_[0] |= 0x00000004u;
}
inline void grSim_BallReplacement::clear_has_vx() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void grSim_BallReplacement::clear_vx() {
  vx_ = 0;
  clear_has_vx();
}
inline double grSim_BallReplacement::vx() const {
  // @@protoc_insertion_point(field_get:grSim_BallReplacement.vx)
  return vx_;
}
inline void grSim_BallReplacement::set_vx(double value) {
  set_has_vx();
  vx_ = value;
  // @@protoc_insertion_point(field_set:grSim_BallReplacement.vx)
}

// required double vy = 4;
inline bool grSim_BallReplacement::has_vy() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void grSim_BallReplacement::set_has_vy() {
  _has_bits_[0] |= 0x00000008u;
}
inline void grSim_BallReplacement::clear_has_vy() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void grSim_BallReplacement::clear_vy() {
  vy_ = 0;
  clear_has_vy();
}
inline double grSim_BallReplacement::vy() const {
  // @@protoc_insertion_point(field_get:grSim_BallReplacement.vy)
  return vy_;
}
inline void grSim_BallReplacement::set_vy(double value) {
  set_has_vy();
  vy_ = value;
  // @@protoc_insertion_point(field_set:grSim_BallReplacement.vy)
}

// -------------------------------------------------------------------

// grSim_Replacement

// optional .grSim_BallReplacement ball = 1;
inline bool grSim_Replacement::has_ball() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void grSim_Replacement::set_has_ball() {
  _has_bits_[0] |= 0x00000001u;
}
inline void grSim_Replacement::clear_has_ball() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void grSim_Replacement::clear_ball() {
  if (ball_ != NULL) ball_->::grSim_BallReplacement::Clear();
  clear_has_ball();
}
inline const ::grSim_BallReplacement& grSim_Replacement::ball() const {
  // @@protoc_insertion_point(field_get:grSim_Replacement.ball)
  return ball_ != NULL ? *ball_ : *default_instance_->ball_;
}
inline ::grSim_BallReplacement* grSim_Replacement::mutable_ball() {
  set_has_ball();
  if (ball_ == NULL) {
    ball_ = new ::grSim_BallReplacement;
  }
  // @@protoc_insertion_point(field_mutable:grSim_Replacement.ball)
  return ball_;
}
inline ::grSim_BallReplacement* grSim_Replacement::release_ball() {
  // @@protoc_insertion_point(field_release:grSim_Replacement.ball)
  clear_has_ball();
  ::grSim_BallReplacement* temp = ball_;
  ball_ = NULL;
  return temp;
}
inline void grSim_Replacement::set_allocated_ball(::grSim_BallReplacement* ball) {
  delete ball_;
  ball_ = ball;
  if (ball) {
    set_has_ball();
  } else {
    clear_has_ball();
  }
  // @@protoc_insertion_point(field_set_allocated:grSim_Replacement.ball)
}

// repeated .grSim_RobotReplacement robots = 2;
inline int grSim_Replacement::robots_size() const {
  return robots_.size();
}
inline void grSim_Replacement::clear_robots() {
  robots_.Clear();
}
inline const ::grSim_RobotReplacement& grSim_Replacement::robots(int index) const {
  // @@protoc_insertion_point(field_get:grSim_Replacement.robots)
  return robots_.Get(index);
}
inline ::grSim_RobotReplacement* grSim_Replacement::mutable_robots(int index) {
  // @@protoc_insertion_point(field_mutable:grSim_Replacement.robots)
  return robots_.Mutable(index);
}
inline ::grSim_RobotReplacement* grSim_Replacement::add_robots() {
  // @@protoc_insertion_point(field_add:grSim_Replacement.robots)
  return robots_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::grSim_RobotReplacement >*
grSim_Replacement::mutable_robots() {
  // @@protoc_insertion_point(field_mutable_list:grSim_Replacement.robots)
  return &robots_;
}
inline const ::google::protobuf::RepeatedPtrField< ::grSim_RobotReplacement >&
grSim_Replacement::robots() const {
  // @@protoc_insertion_point(field_list:grSim_Replacement.robots)
  return robots_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_grSim_5fReplacement_2eproto__INCLUDED
