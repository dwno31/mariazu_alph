// This file was generated based on /Users/daewonnoh/Fuse/mariazu_alpha/mariazu_alpha.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.mariazu_alpha_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[10];

namespace g{

// public static generated class mariazu_alpha_bundle :0
// {
// static mariazu_alpha_bundle() :0
static void mariazu_alpha_bundle__cctor__fn(uType* __type)
{
    mariazu_alpha_bundle::back_arrowadb0f097_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mariazu_alpha"*/]))->GetFile(::STRINGS[1/*"back_arrow-...*/]);
    mariazu_alpha_bundle::home0290a034_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mariazu_alpha"*/]))->GetFile(::STRINGS[2/*"home-4a6742...*/]);
    mariazu_alpha_bundle::loading_clock6c13ddeb_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mariazu_alpha"*/]))->GetFile(::STRINGS[3/*"loading_clo...*/]);
    mariazu_alpha_bundle::mariazuheart76f4e2f0_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mariazu_alpha"*/]))->GetFile(::STRINGS[4/*"mariazu-hea...*/]);
    mariazu_alpha_bundle::outlinkb45bbe8b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mariazu_alpha"*/]))->GetFile(::STRINGS[5/*"outlink-042...*/]);
    mariazu_alpha_bundle::Splash7074fc00_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mariazu_alpha"*/]))->GetFile(::STRINGS[6/*"splash-0ae1...*/]);
    mariazu_alpha_bundle::webgob88baa73_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mariazu_alpha"*/]))->GetFile(::STRINGS[7/*"web-go-3ccb...*/]);
    mariazu_alpha_bundle::webview_backward35236ab3_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mariazu_alpha"*/]))->GetFile(::STRINGS[8/*"webview_bac...*/]);
    mariazu_alpha_bundle::webview_forward0df2d5eb_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"mariazu_alpha"*/]))->GetFile(::STRINGS[9/*"webview_for...*/]);
}

static void mariazu_alpha_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("mariazu_alpha");
    ::STRINGS[1] = uString::Const("back_arrow-21dc9b84.png");
    ::STRINGS[2] = uString::Const("home-4a67423f.js");
    ::STRINGS[3] = uString::Const("loading_clock-a43a9df8.png");
    ::STRINGS[4] = uString::Const("mariazu-heart-fec64da9.png");
    ::STRINGS[5] = uString::Const("outlink-04265e46.js");
    ::STRINGS[6] = uString::Const("splash-0ae14601.js");
    ::STRINGS[7] = uString::Const("web-go-3ccb22b6.png");
    ::STRINGS[8] = uString::Const("webview_backward-0a90e868.png");
    ::STRINGS[9] = uString::Const("webview_forward-eaede770.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::mariazu_alpha_bundle::back_arrowadb0f097_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::mariazu_alpha_bundle::home0290a034_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::mariazu_alpha_bundle::loading_clock6c13ddeb_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::mariazu_alpha_bundle::mariazuheart76f4e2f0_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::mariazu_alpha_bundle::outlinkb45bbe8b_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::mariazu_alpha_bundle::Splash7074fc00_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::mariazu_alpha_bundle::webgob88baa73_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::mariazu_alpha_bundle::webview_backward35236ab3_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::mariazu_alpha_bundle::webview_forward0df2d5eb_, uFieldFlagsStatic);
    type->Reflection.SetFields(9,
        new uField("back_arrowadb0f097", 0),
        new uField("home0290a034", 1),
        new uField("loading_clock6c13ddeb", 2),
        new uField("mariazuheart76f4e2f0", 3),
        new uField("outlinkb45bbe8b", 4),
        new uField("Splash7074fc00", 5),
        new uField("webgob88baa73", 6),
        new uField("webview_backward35236ab3", 7),
        new uField("webview_forward0df2d5eb", 8));
}

uClassType* mariazu_alpha_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("mariazu_alpha_bundle", options);
    type->fp_build_ = mariazu_alpha_bundle_build;
    type->fp_cctor_ = mariazu_alpha_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> mariazu_alpha_bundle::back_arrowadb0f097_;
uSStrong< ::g::Uno::IO::BundleFile*> mariazu_alpha_bundle::home0290a034_;
uSStrong< ::g::Uno::IO::BundleFile*> mariazu_alpha_bundle::loading_clock6c13ddeb_;
uSStrong< ::g::Uno::IO::BundleFile*> mariazu_alpha_bundle::mariazuheart76f4e2f0_;
uSStrong< ::g::Uno::IO::BundleFile*> mariazu_alpha_bundle::outlinkb45bbe8b_;
uSStrong< ::g::Uno::IO::BundleFile*> mariazu_alpha_bundle::Splash7074fc00_;
uSStrong< ::g::Uno::IO::BundleFile*> mariazu_alpha_bundle::webgob88baa73_;
uSStrong< ::g::Uno::IO::BundleFile*> mariazu_alpha_bundle::webview_backward35236ab3_;
uSStrong< ::g::Uno::IO::BundleFile*> mariazu_alpha_bundle::webview_forward0df2d5eb_;
// }

} // ::g
