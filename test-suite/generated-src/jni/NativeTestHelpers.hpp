// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from test.djinni

#pragma once

#include "djinni_support.hpp"
#include "test_helpers.hpp"

namespace djinni_generated {

class NativeTestHelpers final : ::djinni::JniInterface<::testsuite::TestHelpers, NativeTestHelpers> {
public:
    using CppType = std::shared_ptr<::testsuite::TestHelpers>;
    using CppOptType = std::shared_ptr<::testsuite::TestHelpers>;
    using JniType = jobject;

    using Boxed = NativeTestHelpers;

    ~NativeTestHelpers();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeTestHelpers>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeTestHelpers>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeTestHelpers();
    friend ::djinni::JniClass<NativeTestHelpers>;
    friend ::djinni::JniInterface<::testsuite::TestHelpers, NativeTestHelpers>;

};

} // namespace djinni_generated
