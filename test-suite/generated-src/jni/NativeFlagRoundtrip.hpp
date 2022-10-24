// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from enum_flags.djinni

#pragma once

#include "djinni_support.hpp"
#include "flag_roundtrip.hpp"

namespace djinni_generated {

class NativeFlagRoundtrip final : ::djinni::JniInterface<::testsuite::FlagRoundtrip, NativeFlagRoundtrip> {
public:
    using CppType = std::shared_ptr<::testsuite::FlagRoundtrip>;
    using CppOptType = std::shared_ptr<::testsuite::FlagRoundtrip>;
    using JniType = jobject;

    using Boxed = NativeFlagRoundtrip;

    ~NativeFlagRoundtrip();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeFlagRoundtrip>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeFlagRoundtrip>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeFlagRoundtrip();
    friend ::djinni::JniClass<NativeFlagRoundtrip>;
    friend ::djinni::JniInterface<::testsuite::FlagRoundtrip, NativeFlagRoundtrip>;

};

} // namespace djinni_generated
