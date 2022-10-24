// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from enum.djinni

#pragma once

#include "djinni_support.hpp"
#include "enum_usage_record.hpp"

namespace djinni_generated {

class NativeEnumUsageRecord final {
public:
    using CppType = ::testsuite::EnumUsageRecord;
    using JniType = jobject;

    using Boxed = NativeEnumUsageRecord;

    ~NativeEnumUsageRecord();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeEnumUsageRecord();
    friend ::djinni::JniClass<NativeEnumUsageRecord>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/EnumUsageRecord") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Lcom/dropbox/djinni/test/Color;Lcom/dropbox/djinni/test/Color;Ljava/util/ArrayList;Ljava/util/HashSet;Ljava/util/HashMap;)V") };
    const jfieldID field_mE { ::djinni::jniGetFieldID(clazz.get(), "mE", "Lcom/dropbox/djinni/test/Color;") };
    const jfieldID field_mO { ::djinni::jniGetFieldID(clazz.get(), "mO", "Lcom/dropbox/djinni/test/Color;") };
    const jfieldID field_mL { ::djinni::jniGetFieldID(clazz.get(), "mL", "Ljava/util/ArrayList;") };
    const jfieldID field_mS { ::djinni::jniGetFieldID(clazz.get(), "mS", "Ljava/util/HashSet;") };
    const jfieldID field_mM { ::djinni::jniGetFieldID(clazz.get(), "mM", "Ljava/util/HashMap;") };
};

} // namespace djinni_generated
