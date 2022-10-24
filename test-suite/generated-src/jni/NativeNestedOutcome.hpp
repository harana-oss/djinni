// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from outcome.djinni

#pragma once

#include "djinni_support.hpp"
#include "nested_outcome.hpp"

namespace djinni_generated {

class NativeNestedOutcome final {
public:
    using CppType = ::testsuite::NestedOutcome;
    using JniType = jobject;

    using Boxed = NativeNestedOutcome;

    ~NativeNestedOutcome();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeNestedOutcome();
    friend ::djinni::JniClass<NativeNestedOutcome>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/NestedOutcome") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Lcom/snapchat/djinni/Outcome;)V") };
    const jfieldID field_mO { ::djinni::jniGetFieldID(clazz.get(), "mO", "Lcom/snapchat/djinni/Outcome;") };
};

} // namespace djinni_generated
