// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from nested_collection.djinni

#import "DBNestedCollection.h"
#include "nested_collection.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class DBNestedCollection;

namespace djinni_generated {

struct NestedCollection
{
    using CppType = ::testsuite::NestedCollection;
    using ObjcType = DBNestedCollection*;

    using Boxed = NestedCollection;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

} // namespace djinni_generated
