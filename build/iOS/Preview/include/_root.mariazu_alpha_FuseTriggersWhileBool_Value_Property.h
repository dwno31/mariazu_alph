// This file was generated based on /Users/daewonnoh/Fuse/mariazu_alpha/build/iOS/Preview/cache/ux11/mariazu_alpha.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileBool;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct mariazu_alpha_FuseTriggersWhileBool_Value_Property;}

namespace g{

// internal sealed class mariazu_alpha_FuseTriggersWhileBool_Value_Property :35
// {
::g::Uno::UX::Property1_type* mariazu_alpha_FuseTriggersWhileBool_Value_Property_typeof();
void mariazu_alpha_FuseTriggersWhileBool_Value_Property__ctor_3_fn(mariazu_alpha_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name);
void mariazu_alpha_FuseTriggersWhileBool_Value_Property__Get1_fn(mariazu_alpha_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void mariazu_alpha_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, mariazu_alpha_FuseTriggersWhileBool_Value_Property** __retval);
void mariazu_alpha_FuseTriggersWhileBool_Value_Property__get_Object_fn(mariazu_alpha_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void mariazu_alpha_FuseTriggersWhileBool_Value_Property__Set1_fn(mariazu_alpha_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct mariazu_alpha_FuseTriggersWhileBool_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::WhileBool*> _obj;

    void ctor_3(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name);
    static mariazu_alpha_FuseTriggersWhileBool_Value_Property* New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
