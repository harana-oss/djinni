// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from test.djinni

#include "test_helpers.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class DBTestHelpers;

namespace djinni_generated {

class TestHelpers
{
public:
    using CppType = std::shared_ptr<::testsuite::TestHelpers>;
    using CppOptType = std::shared_ptr<::testsuite::TestHelpers>;
    using ObjcType = DBTestHelpers*;

    using Boxed = TestHelpers;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

