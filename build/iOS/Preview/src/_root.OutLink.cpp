// This file was generated based on /Users/daewonnoh/Fuse/mariazu_alpha/build/iOS/Preview/cache/ux11/OutLink.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LoadingBar.h>
#include <_root.mariazu_alpha_bundle.h>
#include <_root.mariazu_alpha_FuseControlsImage_File_Property.h>
#include <_root.mariazu_alpha_FuseControlsTextControl_Value_Property.h>
#include <_root.mariazu_alpha_FuseControlsWebView_Url_Property.h>
#include <_root.mariazu_alpha_FuseElementsElement_Width_Property.h>
#include <_root.mariazu_alpha_FuseResourcesFileImageSource_File_Property.h>
#include <_root.mariazu_alpha_FuseTriggersWhileBool_Value_Property.h>
#include <_root.OutLink.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Spin.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.GoBack.h>
#include <Fuse.Navigation.GoForward.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Triggers.Actions.RaiseUserEvent.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.ProgressAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhilePageLoading.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[24];
static uType* TYPES[9];

namespace g{

// public partial sealed class OutLink :2
// {
// static OutLink() :37
static void OutLink__cctor_4_fn(uType* __type)
{
    OutLink::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb1"*/], ::STRINGS[2/*"temp_eb2"*/], ::STRINGS[3/*"img"*/], ::STRINGS[4/*"_loadingBar"*/], ::STRINGS[5/*"myWebView"*/], ::STRINGS[6/*"OnLoadingText"*/], ::STRINGS[7/*"GoWeb"*/], ::STRINGS[8/*"GoWebImg"*/], ::STRINGS[9/*"temp_eb3"*/], ::STRINGS[10/*"likeitem"*/], ::STRINGS[11/*"temp_eb4"*/]);
    OutLink::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"Value"*/]);
    OutLink::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"Width"*/]);
    OutLink::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"Url"*/]);
    OutLink::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"File"*/]);
    OutLink::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"img"*/]);
    OutLink::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"_loadingBar"*/]);
    OutLink::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"myWebView"*/]);
    OutLink::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"OnLoadingText"*/]);
    OutLink::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"GoWeb"*/]);
    OutLink::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"GoWebImg"*/]);
    OutLink::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"likeitem"*/]);
    OutLink::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"myGlobalEvent"*/]);
}

static void OutLink_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb1");
    ::STRINGS[2] = uString::Const("temp_eb2");
    ::STRINGS[3] = uString::Const("img");
    ::STRINGS[4] = uString::Const("_loadingBar");
    ::STRINGS[5] = uString::Const("myWebView");
    ::STRINGS[6] = uString::Const("OnLoadingText");
    ::STRINGS[7] = uString::Const("GoWeb");
    ::STRINGS[8] = uString::Const("GoWebImg");
    ::STRINGS[9] = uString::Const("temp_eb3");
    ::STRINGS[10] = uString::Const("likeitem");
    ::STRINGS[11] = uString::Const("temp_eb4");
    ::STRINGS[12] = uString::Const("Value");
    ::STRINGS[13] = uString::Const("Width");
    ::STRINGS[14] = uString::Const("Url");
    ::STRINGS[15] = uString::Const("File");
    ::STRINGS[16] = uString::Const("myGlobalEvent");
    ::STRINGS[17] = uString::Const("goBack");
    ::STRINGS[18] = uString::Const("ShopName");
    ::STRINGS[19] = uString::Const("OutlinkUrl");
    ::STRINGS[20] = uString::Const("LikeImage");
    ::STRINGS[21] = uString::Const("BrowserGo");
    ::STRINGS[22] = uString::Const("LikeitemToggle");
    ::STRINGS[23] = uString::Const("Pages/outlink.ux");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(116,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::OutLink, __g_nametable1), 0,
        ::g::LoadingBar_typeof(), offsetof(::g::OutLink, _loadingBar), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(::g::OutLink, _loadingBar_Width_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::OutLink, GoWeb), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::OutLink, GoWebImg), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::OutLink, img), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::OutLink, likeitem), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::OutLink, likeitem_File_inst), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(::g::OutLink, myWebView), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::OutLink, myWebView_Url_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::OutLink, OnLoadingText), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::OutLink, OnLoadingText_Value_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::OutLink, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::OutLink, temp_eb1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::OutLink, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::OutLink, temp_eb3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::OutLink, temp_eb4), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::OutLink, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::OutLink, temp1_File_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::OutLink::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutLink::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutLink::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutLink::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutLink::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutLink::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutLink::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutLink::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutLink::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutLink::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutLink::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutLink::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutLink::__selector9_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OutLink__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* OutLink_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 148;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(OutLink);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("OutLink", options);
    type->fp_build_ = OutLink_build;
    type->fp_cctor_ = OutLink__cctor_4_fn;
    type->interface16.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface16.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface16.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface11.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface13.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface12.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface15.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface14.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface14.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface14.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface14.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface9.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface9.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface9.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface9.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public OutLink(Fuse.Navigation.Router router) :41
void OutLink__ctor_8_fn(OutLink* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :47
void OutLink__InitializeUX_fn(OutLink* __this)
{
    __this->InitializeUX();
}

// public OutLink New(Fuse.Navigation.Router router) :41
void OutLink__New5_fn(::g::Fuse::Navigation::Router* router1, OutLink** __retval)
{
    *__retval = OutLink::New5(router1);
}

uSStrong<uArray*> OutLink::__g_static_nametable1_;
::g::Uno::UX::Selector OutLink::__selector0_;
::g::Uno::UX::Selector OutLink::__selector1_;
::g::Uno::UX::Selector OutLink::__selector10_;
::g::Uno::UX::Selector OutLink::__selector11_;
::g::Uno::UX::Selector OutLink::__selector2_;
::g::Uno::UX::Selector OutLink::__selector3_;
::g::Uno::UX::Selector OutLink::__selector4_;
::g::Uno::UX::Selector OutLink::__selector5_;
::g::Uno::UX::Selector OutLink::__selector6_;
::g::Uno::UX::Selector OutLink::__selector7_;
::g::Uno::UX::Selector OutLink::__selector8_;
::g::Uno::UX::Selector OutLink::__selector9_;

// public OutLink(Fuse.Navigation.Router router) [instance] :41
void OutLink::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("OutLink", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :47
void OutLink::InitializeUX()
{
    uStackFrame __("OutLink", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, OutLink::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"goBack"*/]);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"goBack"*/]);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::mariazu_alpha_FuseControlsTextControl_Value_Property::New1(temp, OutLink::__selector0());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"ShopName"*/]);
    _loadingBar = ::g::LoadingBar::New4();
    _loadingBar_Width_inst = ::g::mariazu_alpha_FuseElementsElement_Width_Property::New1(_loadingBar, OutLink::__selector1());
    OnLoadingText = ::g::Fuse::Triggers::WhileTrue::New2();
    OnLoadingText_Value_inst = ::g::mariazu_alpha_FuseTriggersWhileBool_Value_Property::New1(OnLoadingText, OutLink::__selector0());
    myWebView = ::g::Fuse::Controls::WebView::New4();
    myWebView_Url_inst = ::g::mariazu_alpha_FuseControlsWebView_Url_Property::New1(myWebView, OutLink::__selector2());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"OutlinkUrl"*/]);
    ::g::Fuse::Resources::FileImageSource* temp1 = ::g::Fuse::Resources::FileImageSource::New2();
    temp1_File_inst = ::g::mariazu_alpha_FuseResourcesFileImageSource_File_Property::New1(temp1, OutLink::__selector3());
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"LikeImage"*/]);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"BrowserGo"*/]);
    likeitem = ::g::Fuse::Controls::Image::New3();
    likeitem_File_inst = ::g::mariazu_alpha_FuseControlsImage_File_Property::New1(likeitem, OutLink::__selector3());
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"LikeImage"*/]);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"LikeitemTog...*/]);
    ::g::Fuse::Reactive::JavaScript* temp10 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp11 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp12 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::DockPanel* temp13 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Button* temp14 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Image* temp15 = ::g::Fuse::Controls::Image::New3();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2, __g_nametable1);
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3, __g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp4, __g_nametable1, 3);
    ::g::Fuse::Controls::DockPanel* temp17 = ::g::Fuse::Controls::DockPanel::New4();
    img = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::NativeViewHost* temp18 = ::g::Fuse::Controls::NativeViewHost::New3();
    ::g::Fuse::Triggers::ProgressAnimation* temp19 = ::g::Fuse::Triggers::ProgressAnimation::New2();
    ::g::Fuse::Animations::Change* temp20 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<Uno.UX.Size>*/], _loadingBar_Width_inst);
    ::g::Fuse::Triggers::WhilePageLoading* temp21 = ::g::Fuse::Triggers::WhilePageLoading::New2();
    ::g::Fuse::Animations::Change* temp22 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<bool>*/], OnLoadingText_Value_inst);
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(myWebView_Url_inst, (uObject*)temp5, __g_nametable1, 3);
    ::g::Fuse::Animations::Spin* temp24 = ::g::Fuse::Animations::Spin::New2();
    ::g::Fuse::Controls::DockPanel* temp25 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp26 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp27 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    ::g::Fuse::Controls::Grid* temp28 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Button* temp29 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Image* temp30 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp31 = ::g::Fuse::Reactive::DataBinding::New1(temp1_File_inst, (uObject*)temp6, __g_nametable1, 3);
    ::g::Fuse::Gestures::Clicked* temp32 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::GoBack* temp33 = ::g::Fuse::Navigation::GoBack::New2();
    ::g::Fuse::Controls::Button* temp34 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Image* temp35 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp36 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::GoForward* temp37 = ::g::Fuse::Navigation::GoForward::New2();
    GoWeb = ::g::Fuse::Controls::Panel::New3();
    GoWebImg = ::g::Fuse::Controls::Image::New3();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp38 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp39 = ::g::Fuse::Reactive::DataBinding::New1(likeitem_File_inst, (uObject*)temp8, __g_nametable1, 3);
    ::g::Fuse::Gestures::Clicked* temp40 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp41 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp9, __g_nametable1);
    ::g::Fuse::Drawing::StaticSolidColor* temp42 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.05f));
    temp10->LineNumber(3);
    temp10->FileName(::STRINGS[23/*"Pages/outli...*/]);
    temp10->File(::g::Uno::UX::BundleFileSource::New1(::g::mariazu_alpha_bundle::outlinkb45bbe8b()));
    temp11->HitTestMode(6);
    temp11->Height(::g::Uno::UX::Size__New1(7.0f, 4));
    temp11->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp12->ColumnCount(24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Fuse::Controls::Grid::SetColumn(temp13, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp13, 4);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp13, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp14->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    temp15->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp15->File(::g::Uno::UX::BundleFileSource::New1(::g::mariazu_alpha_bundle::back_arrowadb0f097()));
    temp->FontSize(18.0f);
    temp->Alignment(9);
    temp->Margin(::g::Uno::Float4__New2(0.0f, 3.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp, 4);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp, 16);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    temp17->Height(::g::Uno::UX::Size__New1(86.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), img);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), OnLoadingText);
    uPtr(img)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(img)->Layer(1);
    uPtr(img)->Name(OutLink::__selector4());
    uPtr(img)->File(::g::Uno::UX::BundleFileSource::New1(::g::mariazu_alpha_bundle::loading_clock6c13ddeb()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), _loadingBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), myWebView);
    uPtr(_loadingBar)->Name(OutLink::__selector5());
    ::g::Fuse::Controls::DockPanel::SetDock(_loadingBar, 2);
    uPtr(myWebView)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(myWebView)->Name(OutLink::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(myWebView)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(myWebView)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(myWebView)->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp20);
    ::g::Fuse::Animations::Change__set_Value_fn(temp20, uCRef(::g::Uno::UX::Size__New1(100.0f, 4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp22);
    ::g::Fuse::Animations::Change__set_Value_fn(temp22, uCRef(true));
    uPtr(OnLoadingText)->Name(OutLink::__selector7());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(OnLoadingText)->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp24);
    temp24->Frequency(1.0);
    temp24->Target(img);
    temp25->Height(::g::Uno::UX::Size__New1(7.0f, 4));
    temp25->Alignment(12);
    temp25->Background(temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    temp26->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp26, 2);
    temp26->Background(temp27);
    temp28->ColumnCount(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), GoWeb);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Fuse::Controls::Grid::SetColumn(temp29, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    temp30->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp30->File(::g::Uno::UX::BundleFileSource::New1(::g::mariazu_alpha_bundle::webview_backward35236ab3()));
    temp30->Source(temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp33);
    temp33->TargetNode(myWebView);
    ::g::Fuse::Controls::Grid::SetColumn(temp34, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    temp35->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp35->File(::g::Uno::UX::BundleFileSource::New1(::g::mariazu_alpha_bundle::webview_forward0df2d5eb()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp37);
    temp37->TargetNode(myWebView);
    uPtr(GoWeb)->HitTestMode(6);
    uPtr(GoWeb)->Name(OutLink::__selector8());
    ::g::Fuse::Controls::Grid::SetColumn(GoWeb, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(GoWeb, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(GoWeb)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), GoWebImg);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(GoWeb)->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    uPtr(GoWebImg)->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(GoWebImg)->Name(OutLink::__selector9());
    uPtr(GoWebImg)->File(::g::Uno::UX::BundleFileSource::New1(::g::mariazu_alpha_bundle::webgob88baa73()));
    temp38->HitTestMode(6);
    ::g::Fuse::Controls::Grid::SetColumn(temp38, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp38, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), likeitem);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    uPtr(likeitem)->Height(::g::Uno::UX::Size__New1(35.0f, 1));
    uPtr(likeitem)->Name(OutLink::__selector10());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(likeitem)->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp41);
    temp41->EventName(OutLink::__selector11());
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), img);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), _loadingBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), myWebView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), OnLoadingText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), GoWeb);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), GoWebImg);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), likeitem);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
}

// public OutLink New(Fuse.Navigation.Router router) [static] :41
OutLink* OutLink::New5(::g::Fuse::Navigation::Router* router1)
{
    OutLink* obj1 = (OutLink*)uNew(OutLink_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
