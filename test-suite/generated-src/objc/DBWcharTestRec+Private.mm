// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from wchar_test.djinni

#import "DBWcharTestRec+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto WcharTestRec::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::WString::toCpp(obj.s)};
}

auto WcharTestRec::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[DBWcharTestRec alloc] initWithS:(::djinni::WString::fromCpp(cpp.s))];
}

} // namespace djinni_generated
