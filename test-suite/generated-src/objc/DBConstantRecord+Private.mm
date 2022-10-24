// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from constants.djinni

#import "DBConstantRecord+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto ConstantRecord::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::I32::toCpp(obj.someInteger),
            ::djinni::String::toCpp(obj.someString)};
}

auto ConstantRecord::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[DBConstantRecord alloc] initWithSomeInteger:(::djinni::I32::fromCpp(cpp.some_integer))
                                              someString:(::djinni::String::fromCpp(cpp.some_string))];
}

} // namespace djinni_generated
