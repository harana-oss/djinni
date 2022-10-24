// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from array.djinni

#pragma once

#include "djinni_support.hpp"
#include "vec2.hpp"

namespace djinni_generated {

class NativeVec2 final {
public:
    using CppType = ::testsuite::Vec2;
    using JniType = jobject;

    using Boxed = NativeVec2;

    ~NativeVec2();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeVec2();
    friend ::djinni::JniClass<NativeVec2>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/Vec2") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(II)V") };
    const jfieldID field_mX { ::djinni::jniGetFieldID(clazz.get(), "mX", "I") };
    const jfieldID field_mY { ::djinni::jniGetFieldID(clazz.get(), "mY", "I") };
};

} // namespace djinni_generated
