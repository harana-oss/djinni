// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from array.djinni

#include "NativeVec2.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeVec2::NativeVec2() = default;

NativeVec2::~NativeVec2() = default;

auto NativeVec2::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeVec2>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.x)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.y)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeVec2::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeVec2>::get();
    return {::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_mX)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_mY))};
}

} // namespace djinni_generated
