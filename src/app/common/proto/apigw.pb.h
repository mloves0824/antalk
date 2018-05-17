// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: apigw.proto

#ifndef PROTOBUF_apigw_2eproto__INCLUDED
#define PROTOBUF_apigw_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
#include "common.pb.h"
// @@protoc_insertion_point(includes)

namespace antalk {
namespace apigw {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_apigw_2eproto();
void protobuf_AssignDesc_apigw_2eproto();
void protobuf_ShutdownFile_apigw_2eproto();

class LoginReq;
class LoginRes;

// ===================================================================

class LoginReq : public ::google::protobuf::Message {
 public:
  LoginReq();
  virtual ~LoginReq();

  LoginReq(const LoginReq& from);

  inline LoginReq& operator=(const LoginReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginReq& default_instance();

  void Swap(LoginReq* other);

  // implements Message ----------------------------------------------

  LoginReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginReq& from);
  void MergeFrom(const LoginReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string username = 1;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUsernameFieldNumber = 1;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const char* value, size_t size);
  inline ::std::string* mutable_username();
  inline ::std::string* release_username();
  inline void set_allocated_username(::std::string* username);

  // required string password = 2;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 2;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  inline void set_allocated_password(::std::string* password);

  // required .antalk.common.UserStatType online_status = 3;
  inline bool has_online_status() const;
  inline void clear_online_status();
  static const int kOnlineStatusFieldNumber = 3;
  inline ::antalk::common::UserStatType online_status() const;
  inline void set_online_status(::antalk::common::UserStatType value);

  // required .antalk.common.ClientType client_type = 4;
  inline bool has_client_type() const;
  inline void clear_client_type();
  static const int kClientTypeFieldNumber = 4;
  inline ::antalk::common::ClientType client_type() const;
  inline void set_client_type(::antalk::common::ClientType value);

  // optional string client_version = 5;
  inline bool has_client_version() const;
  inline void clear_client_version();
  static const int kClientVersionFieldNumber = 5;
  inline const ::std::string& client_version() const;
  inline void set_client_version(const ::std::string& value);
  inline void set_client_version(const char* value);
  inline void set_client_version(const char* value, size_t size);
  inline ::std::string* mutable_client_version();
  inline ::std::string* release_client_version();
  inline void set_allocated_client_version(::std::string* client_version);

  // @@protoc_insertion_point(class_scope:antalk.apigw.LoginReq)
 private:
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_password();
  inline void clear_has_password();
  inline void set_has_online_status();
  inline void clear_has_online_status();
  inline void set_has_client_type();
  inline void clear_has_client_type();
  inline void set_has_client_version();
  inline void clear_has_client_version();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* username_;
  ::std::string* password_;
  int online_status_;
  int client_type_;
  ::std::string* client_version_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_apigw_2eproto();
  friend void protobuf_AssignDesc_apigw_2eproto();
  friend void protobuf_ShutdownFile_apigw_2eproto();

  void InitAsDefaultInstance();
  static LoginReq* default_instance_;
};
// -------------------------------------------------------------------

class LoginRes : public ::google::protobuf::Message {
 public:
  LoginRes();
  virtual ~LoginRes();

  LoginRes(const LoginRes& from);

  inline LoginRes& operator=(const LoginRes& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginRes& default_instance();

  void Swap(LoginRes* other);

  // implements Message ----------------------------------------------

  LoginRes* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginRes& from);
  void MergeFrom(const LoginRes& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 server_time = 1;
  inline bool has_server_time() const;
  inline void clear_server_time();
  static const int kServerTimeFieldNumber = 1;
  inline ::google::protobuf::uint32 server_time() const;
  inline void set_server_time(::google::protobuf::uint32 value);

  // required .antalk.common.ResultType result_code = 2;
  inline bool has_result_code() const;
  inline void clear_result_code();
  static const int kResultCodeFieldNumber = 2;
  inline ::antalk::common::ResultType result_code() const;
  inline void set_result_code(::antalk::common::ResultType value);

  // optional string result_string = 3;
  inline bool has_result_string() const;
  inline void clear_result_string();
  static const int kResultStringFieldNumber = 3;
  inline const ::std::string& result_string() const;
  inline void set_result_string(const ::std::string& value);
  inline void set_result_string(const char* value);
  inline void set_result_string(const char* value, size_t size);
  inline ::std::string* mutable_result_string();
  inline ::std::string* release_result_string();
  inline void set_allocated_result_string(::std::string* result_string);

  // optional .antalk.common.UserStatType online_status = 4;
  inline bool has_online_status() const;
  inline void clear_online_status();
  static const int kOnlineStatusFieldNumber = 4;
  inline ::antalk::common::UserStatType online_status() const;
  inline void set_online_status(::antalk::common::UserStatType value);

  // optional .antalk.common.UserInfo user_info = 5;
  inline bool has_user_info() const;
  inline void clear_user_info();
  static const int kUserInfoFieldNumber = 5;
  inline const ::antalk::common::UserInfo& user_info() const;
  inline ::antalk::common::UserInfo* mutable_user_info();
  inline ::antalk::common::UserInfo* release_user_info();
  inline void set_allocated_user_info(::antalk::common::UserInfo* user_info);

  // @@protoc_insertion_point(class_scope:antalk.apigw.LoginRes)
 private:
  inline void set_has_server_time();
  inline void clear_has_server_time();
  inline void set_has_result_code();
  inline void clear_has_result_code();
  inline void set_has_result_string();
  inline void clear_has_result_string();
  inline void set_has_online_status();
  inline void clear_has_online_status();
  inline void set_has_user_info();
  inline void clear_has_user_info();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 server_time_;
  int result_code_;
  ::std::string* result_string_;
  ::antalk::common::UserInfo* user_info_;
  int online_status_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_apigw_2eproto();
  friend void protobuf_AssignDesc_apigw_2eproto();
  friend void protobuf_ShutdownFile_apigw_2eproto();

  void InitAsDefaultInstance();
  static LoginRes* default_instance_;
};
// ===================================================================

class LoginService_Stub;

class LoginService : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline LoginService() {};
 public:
  virtual ~LoginService();

  typedef LoginService_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void Login(::google::protobuf::RpcController* controller,
                       const ::antalk::apigw::LoginReq* request,
                       ::antalk::apigw::LoginRes* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(LoginService);
};

class LoginService_Stub : public LoginService {
 public:
  LoginService_Stub(::google::protobuf::RpcChannel* channel);
  LoginService_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~LoginService_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements LoginService ------------------------------------------

  void Login(::google::protobuf::RpcController* controller,
                       const ::antalk::apigw::LoginReq* request,
                       ::antalk::apigw::LoginRes* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(LoginService_Stub);
};


// ===================================================================


// ===================================================================

// LoginReq

// required string username = 1;
inline bool LoginReq::has_username() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoginReq::set_has_username() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoginReq::clear_has_username() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoginReq::clear_username() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    username_->clear();
  }
  clear_has_username();
}
inline const ::std::string& LoginReq::username() const {
  return *username_;
}
inline void LoginReq::set_username(const ::std::string& value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void LoginReq::set_username(const char* value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void LoginReq::set_username(const char* value, size_t size) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginReq::mutable_username() {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  return username_;
}
inline ::std::string* LoginReq::release_username() {
  clear_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = username_;
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginReq::set_allocated_username(::std::string* username) {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (username) {
    set_has_username();
    username_ = username;
  } else {
    clear_has_username();
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string password = 2;
inline bool LoginReq::has_password() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LoginReq::set_has_password() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LoginReq::clear_has_password() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LoginReq::clear_password() {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& LoginReq::password() const {
  return *password_;
}
inline void LoginReq::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void LoginReq::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void LoginReq::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginReq::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  return password_;
}
inline ::std::string* LoginReq::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginReq::set_allocated_password(::std::string* password) {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (password) {
    set_has_password();
    password_ = password;
  } else {
    clear_has_password();
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required .antalk.common.UserStatType online_status = 3;
inline bool LoginReq::has_online_status() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LoginReq::set_has_online_status() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LoginReq::clear_has_online_status() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LoginReq::clear_online_status() {
  online_status_ = 1;
  clear_has_online_status();
}
inline ::antalk::common::UserStatType LoginReq::online_status() const {
  return static_cast< ::antalk::common::UserStatType >(online_status_);
}
inline void LoginReq::set_online_status(::antalk::common::UserStatType value) {
  assert(::antalk::common::UserStatType_IsValid(value));
  set_has_online_status();
  online_status_ = value;
}

// required .antalk.common.ClientType client_type = 4;
inline bool LoginReq::has_client_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LoginReq::set_has_client_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LoginReq::clear_has_client_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LoginReq::clear_client_type() {
  client_type_ = 1;
  clear_has_client_type();
}
inline ::antalk::common::ClientType LoginReq::client_type() const {
  return static_cast< ::antalk::common::ClientType >(client_type_);
}
inline void LoginReq::set_client_type(::antalk::common::ClientType value) {
  assert(::antalk::common::ClientType_IsValid(value));
  set_has_client_type();
  client_type_ = value;
}

// optional string client_version = 5;
inline bool LoginReq::has_client_version() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LoginReq::set_has_client_version() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LoginReq::clear_has_client_version() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LoginReq::clear_client_version() {
  if (client_version_ != &::google::protobuf::internal::kEmptyString) {
    client_version_->clear();
  }
  clear_has_client_version();
}
inline const ::std::string& LoginReq::client_version() const {
  return *client_version_;
}
inline void LoginReq::set_client_version(const ::std::string& value) {
  set_has_client_version();
  if (client_version_ == &::google::protobuf::internal::kEmptyString) {
    client_version_ = new ::std::string;
  }
  client_version_->assign(value);
}
inline void LoginReq::set_client_version(const char* value) {
  set_has_client_version();
  if (client_version_ == &::google::protobuf::internal::kEmptyString) {
    client_version_ = new ::std::string;
  }
  client_version_->assign(value);
}
inline void LoginReq::set_client_version(const char* value, size_t size) {
  set_has_client_version();
  if (client_version_ == &::google::protobuf::internal::kEmptyString) {
    client_version_ = new ::std::string;
  }
  client_version_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginReq::mutable_client_version() {
  set_has_client_version();
  if (client_version_ == &::google::protobuf::internal::kEmptyString) {
    client_version_ = new ::std::string;
  }
  return client_version_;
}
inline ::std::string* LoginReq::release_client_version() {
  clear_has_client_version();
  if (client_version_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = client_version_;
    client_version_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginReq::set_allocated_client_version(::std::string* client_version) {
  if (client_version_ != &::google::protobuf::internal::kEmptyString) {
    delete client_version_;
  }
  if (client_version) {
    set_has_client_version();
    client_version_ = client_version;
  } else {
    clear_has_client_version();
    client_version_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// LoginRes

// required uint32 server_time = 1;
inline bool LoginRes::has_server_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoginRes::set_has_server_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoginRes::clear_has_server_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoginRes::clear_server_time() {
  server_time_ = 0u;
  clear_has_server_time();
}
inline ::google::protobuf::uint32 LoginRes::server_time() const {
  return server_time_;
}
inline void LoginRes::set_server_time(::google::protobuf::uint32 value) {
  set_has_server_time();
  server_time_ = value;
}

// required .antalk.common.ResultType result_code = 2;
inline bool LoginRes::has_result_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LoginRes::set_has_result_code() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LoginRes::clear_has_result_code() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LoginRes::clear_result_code() {
  result_code_ = 0;
  clear_has_result_code();
}
inline ::antalk::common::ResultType LoginRes::result_code() const {
  return static_cast< ::antalk::common::ResultType >(result_code_);
}
inline void LoginRes::set_result_code(::antalk::common::ResultType value) {
  assert(::antalk::common::ResultType_IsValid(value));
  set_has_result_code();
  result_code_ = value;
}

// optional string result_string = 3;
inline bool LoginRes::has_result_string() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LoginRes::set_has_result_string() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LoginRes::clear_has_result_string() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LoginRes::clear_result_string() {
  if (result_string_ != &::google::protobuf::internal::kEmptyString) {
    result_string_->clear();
  }
  clear_has_result_string();
}
inline const ::std::string& LoginRes::result_string() const {
  return *result_string_;
}
inline void LoginRes::set_result_string(const ::std::string& value) {
  set_has_result_string();
  if (result_string_ == &::google::protobuf::internal::kEmptyString) {
    result_string_ = new ::std::string;
  }
  result_string_->assign(value);
}
inline void LoginRes::set_result_string(const char* value) {
  set_has_result_string();
  if (result_string_ == &::google::protobuf::internal::kEmptyString) {
    result_string_ = new ::std::string;
  }
  result_string_->assign(value);
}
inline void LoginRes::set_result_string(const char* value, size_t size) {
  set_has_result_string();
  if (result_string_ == &::google::protobuf::internal::kEmptyString) {
    result_string_ = new ::std::string;
  }
  result_string_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LoginRes::mutable_result_string() {
  set_has_result_string();
  if (result_string_ == &::google::protobuf::internal::kEmptyString) {
    result_string_ = new ::std::string;
  }
  return result_string_;
}
inline ::std::string* LoginRes::release_result_string() {
  clear_has_result_string();
  if (result_string_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = result_string_;
    result_string_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LoginRes::set_allocated_result_string(::std::string* result_string) {
  if (result_string_ != &::google::protobuf::internal::kEmptyString) {
    delete result_string_;
  }
  if (result_string) {
    set_has_result_string();
    result_string_ = result_string;
  } else {
    clear_has_result_string();
    result_string_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional .antalk.common.UserStatType online_status = 4;
inline bool LoginRes::has_online_status() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LoginRes::set_has_online_status() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LoginRes::clear_has_online_status() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LoginRes::clear_online_status() {
  online_status_ = 1;
  clear_has_online_status();
}
inline ::antalk::common::UserStatType LoginRes::online_status() const {
  return static_cast< ::antalk::common::UserStatType >(online_status_);
}
inline void LoginRes::set_online_status(::antalk::common::UserStatType value) {
  assert(::antalk::common::UserStatType_IsValid(value));
  set_has_online_status();
  online_status_ = value;
}

// optional .antalk.common.UserInfo user_info = 5;
inline bool LoginRes::has_user_info() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LoginRes::set_has_user_info() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LoginRes::clear_has_user_info() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LoginRes::clear_user_info() {
  if (user_info_ != NULL) user_info_->::antalk::common::UserInfo::Clear();
  clear_has_user_info();
}
inline const ::antalk::common::UserInfo& LoginRes::user_info() const {
  return user_info_ != NULL ? *user_info_ : *default_instance_->user_info_;
}
inline ::antalk::common::UserInfo* LoginRes::mutable_user_info() {
  set_has_user_info();
  if (user_info_ == NULL) user_info_ = new ::antalk::common::UserInfo;
  return user_info_;
}
inline ::antalk::common::UserInfo* LoginRes::release_user_info() {
  clear_has_user_info();
  ::antalk::common::UserInfo* temp = user_info_;
  user_info_ = NULL;
  return temp;
}
inline void LoginRes::set_allocated_user_info(::antalk::common::UserInfo* user_info) {
  delete user_info_;
  user_info_ = user_info;
  if (user_info) {
    set_has_user_info();
  } else {
    clear_has_user_info();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace apigw
}  // namespace antalk

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_apigw_2eproto__INCLUDED
