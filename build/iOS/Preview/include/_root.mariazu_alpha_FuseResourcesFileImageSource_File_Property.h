// This file was generated based on /Users/daewonnoh/Fuse/mariazu_alpha/build/iOS/Preview/cache/ux11/mariazu_alpha.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Resources{struct FileImageSource;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct mariazu_alpha_FuseResourcesFileImageSource_File_Property;}

namespace g{

// internal sealed class mariazu_alpha_FuseResourcesFileImageSource_File_Property :43
// {
::g::Uno::UX::Property1_type* mariazu_alpha_FuseResourcesFileImageSource_File_Property_typeof();
void mariazu_alpha_FuseResourcesFileImageSource_File_Property__ctor_3_fn(mariazu_alpha_FuseResourcesFileImageSource_File_Property* __this, ::g::Fuse::Resources::FileImageSource* obj, ::g::Uno::UX::Selector* name);
void mariazu_alpha_FuseResourcesFileImageSource_File_Property__Get1_fn(mariazu_alpha_FuseResourcesFileImageSource_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval);
void mariazu_alpha_FuseResourcesFileImageSource_File_Property__New1_fn(::g::Fuse::Resources::FileImageSource* obj, ::g::Uno::UX::Selector* name, mariazu_alpha_FuseResourcesFileImageSource_File_Property** __retval);
void mariazu_alpha_FuseResourcesFileImageSource_File_Property__get_Object_fn(mariazu_alpha_FuseResourcesFileImageSource_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void mariazu_alpha_FuseResourcesFileImageSource_File_Property__Set1_fn(mariazu_alpha_FuseResourcesFileImageSource_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin);

struct mariazu_alpha_FuseResourcesFileImageSource_File_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Resources::FileImageSource*> _obj;

    void ctor_3(::g::Fuse::Resources::FileImageSource* obj, ::g::Uno::UX::Selector name);
    static mariazu_alpha_FuseResourcesFileImageSource_File_Property* New1(::g::Fuse::Resources::FileImageSource* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
