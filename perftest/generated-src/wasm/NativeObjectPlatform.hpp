// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from djinni_perf_benchmark.djinni

#pragma once

#include "ObjectPlatform.hpp"
#include "djinni_wasm.hpp"

namespace djinni_generated {

struct NativeObjectPlatform : ::djinni::JsInterface<::snapchat::djinni::benchmark::ObjectPlatform, NativeObjectPlatform> {
    using CppType = std::shared_ptr<::snapchat::djinni::benchmark::ObjectPlatform>;
    using CppOptType = std::shared_ptr<::snapchat::djinni::benchmark::ObjectPlatform>;
    using JsType = em::val;
    using Boxed = NativeObjectPlatform;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) {
        djinni::checkForNull(c.get(), "NativeObjectPlatform::fromCpp");
        return fromCppOpt(c);
    }


    struct JsProxy: ::djinni::JsProxyBase, ::snapchat::djinni::benchmark::ObjectPlatform, ::djinni::InstanceTracker<JsProxy> {
        JsProxy(const em::val& v) : JsProxyBase(v) {}
        void onDone() override;
    };
};

} // namespace djinni_generated
