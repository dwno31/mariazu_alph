// This file was generated based on /Users/daewonnoh/Fuse/mariazu_alpha/build/iOS/Preview/cache/ux11/mariazu_alpha.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.mariazu_alpha_FuseTriggersWhileBool_Value_Property.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class mariazu_alpha_FuseTriggersWhileBool_Value_Property :35
// {
static void mariazu_alpha_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Triggers.WhileBool*/], offsetof(::g::mariazu_alpha_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* mariazu_alpha_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(mariazu_alpha_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("mariazu_alpha_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = mariazu_alpha_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))mariazu_alpha_FuseTriggersWhileBool_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))mariazu_alpha_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))mariazu_alpha_FuseTriggersWhileBool_Value_Property__Set1_fn;
    return type;
}

// public mariazu_alpha_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :38
void mariazu_alpha_FuseTriggersWhileBool_Value_Property__ctor_3_fn(mariazu_alpha_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :40
void mariazu_alpha_FuseTriggersWhileBool_Value_Property__Get1_fn(mariazu_alpha_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("mariazu_alpha_FuseTriggersWhileBool_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[0/*Fuse.Triggers.WhileBool*/]))->Value1(), void();
}

// public mariazu_alpha_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :38
void mariazu_alpha_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, mariazu_alpha_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = mariazu_alpha_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :39
void mariazu_alpha_FuseTriggersWhileBool_Value_Property__get_Object_fn(mariazu_alpha_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :41
void mariazu_alpha_FuseTriggersWhileBool_Value_Property__Set1_fn(mariazu_alpha_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("mariazu_alpha_FuseTriggersWhileBool_Value_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[0/*Fuse.Triggers.WhileBool*/]))->Value1(v_);
}

// public mariazu_alpha_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :38
void mariazu_alpha_FuseTriggersWhileBool_Value_Property::ctor_3(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public mariazu_alpha_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :38
mariazu_alpha_FuseTriggersWhileBool_Value_Property* mariazu_alpha_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    mariazu_alpha_FuseTriggersWhileBool_Value_Property* obj1 = (mariazu_alpha_FuseTriggersWhileBool_Value_Property*)uNew(mariazu_alpha_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
