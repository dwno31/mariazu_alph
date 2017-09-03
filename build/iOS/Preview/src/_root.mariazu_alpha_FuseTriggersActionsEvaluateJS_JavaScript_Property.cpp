// This file was generated based on /Users/daewonnoh/Fuse/mariazu_alpha/build/iOS/Preview/cache/ux11/mariazu_alpha.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property.h>
#include <Fuse.Triggers.Actions.EvaluateJS.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property :10
// {
static void mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::EvaluateJS_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Triggers.Actions.EvaluateJS*/], offsetof(::g::mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property", options);
    type->fp_build_ = mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property__Set1_fn;
    return type;
}

// public mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property(Fuse.Triggers.Actions.EvaluateJS obj, Uno.UX.Selector name) :13
void mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property__ctor_3_fn(mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property* __this, ::g::Fuse::Triggers::Actions::EvaluateJS* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :15
void mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property__Get1_fn(mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::Actions::EvaluateJS*>(obj, ::TYPES[0/*Fuse.Triggers.Actions.EvaluateJS*/]))->JavaScript(), void();
}

// public mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property New(Fuse.Triggers.Actions.EvaluateJS obj, Uno.UX.Selector name) :13
void mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property__New1_fn(::g::Fuse::Triggers::Actions::EvaluateJS* obj, ::g::Uno::UX::Selector* name, mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property** __retval)
{
    *__retval = mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :14
void mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property__get_Object_fn(mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :16
void mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property__Set1_fn(mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Triggers::Actions::EvaluateJS*>(obj, ::TYPES[0/*Fuse.Triggers.Actions.EvaluateJS*/]))->JavaScript(v);
}

// public mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property(Fuse.Triggers.Actions.EvaluateJS obj, Uno.UX.Selector name) [instance] :13
void mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property::ctor_3(::g::Fuse::Triggers::Actions::EvaluateJS* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property New(Fuse.Triggers.Actions.EvaluateJS obj, Uno.UX.Selector name) [static] :13
mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property* mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property::New1(::g::Fuse::Triggers::Actions::EvaluateJS* obj, ::g::Uno::UX::Selector name)
{
    mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property* obj1 = (mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property*)uNew(mariazu_alpha_FuseTriggersActionsEvaluateJS_JavaScript_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
