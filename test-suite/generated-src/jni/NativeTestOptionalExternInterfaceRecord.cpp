// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from yaml-test.djinni

#include "NativeTestOptionalExternInterfaceRecord.hpp"  // my header
#include "Marshal.hpp"
#include "NativeSampleInterface.hpp"

namespace djinni_generated {

NativeTestOptionalExternInterfaceRecord::NativeTestOptionalExternInterfaceRecord() = default;

NativeTestOptionalExternInterfaceRecord::~NativeTestOptionalExternInterfaceRecord() = default;

auto NativeTestOptionalExternInterfaceRecord::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeTestOptionalExternInterfaceRecord>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::NativeSampleInterface>::fromCpp(jniEnv, c.sample_interface)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeTestOptionalExternInterfaceRecord::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 2);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeTestOptionalExternInterfaceRecord>::get();
    return {::djinni::Optional<std::experimental::optional, ::djinni_generated::NativeSampleInterface>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mSampleInterface))};
}

} // namespace djinni_generated
