// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from example.djinni

#include "NativeItemList.hpp"  // my header

namespace djinni_generated {

auto NativeItemList::toCpp(const JsType& j) -> CppType {
    return {::djinni::List<::djinni::String>::Boxed::toCpp(j["items"])};
}
auto NativeItemList::fromCpp(const CppType& c) -> JsType {
    em::val js = em::val::object();
    js.set("items", ::djinni::List<::djinni::String>::Boxed::fromCpp(c.items));
    return js;
}

} // namespace djinni_generated
