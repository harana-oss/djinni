// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from exception.djinni

#import "DBThrowingInterface+Private.h"
#import "DBThrowingInterface.h"
#import "DJIError.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

auto ThrowingInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    DJINNI_UNIMPLEMENTED(@"Interface not implementable in any language.");
}

auto ThrowingInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    DJINNI_UNIMPLEMENTED(@"Interface not implementable in any language.");
}

} // namespace djinni_generated
