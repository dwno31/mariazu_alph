// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppBase.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.h>
#include <Fuse.Controls.Native.NativeRootViewport.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Node.h>
#include <Fuse.Time.h>
#include <Fuse.Visual.h>
#include <iOS/UIViewInputDispatch.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Platform.PointerType.h>
#include <uObjC.Foreign.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.RootInfo.h>
#include <Uno.Float2.h>
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class InputDispatch :776
// {
// static InputDispatch() :776
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_activePointers_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<ObjC.Object>*/]));
}

static void InputDispatch_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Controls::Native::NativeRootViewport_typeof();
    ::TYPES[2] = ::g::Fuse::Input::PointerEventData_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<ObjC.Object>*/], (uintptr_t)&::g::Fuse::Controls::Native::iOS::InputDispatch::_activePointers_, uFieldFlagsStatic);
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.InputDispatch", options);
    type->fp_build_ = InputDispatch_build;
    type->fp_cctor_ = InputDispatch__cctor__fn;
    return type;
}

// public static void AddInputHandler(Fuse.Visual owner, Fuse.Controls.Native.ViewHandle viewHandle) :817
void InputDispatch__AddInputHandler_fn(::g::Fuse::Visual* owner, ::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch::AddInputHandler(owner, viewHandle);
}

// private static bool CompareUITouch(ObjC.Object a, ObjC.Object b) :932
void InputDispatch__CompareUITouch_fn(::g::ObjC::Object* a, ::g::ObjC::Object* b, bool* __retval)
{
    *__retval = InputDispatch::CompareUITouch(a, b);
}

// private static void DeactivateTouch(ObjC.Object uiTouch) :892
void InputDispatch__DeactivateTouch_fn(::g::ObjC::Object* uiTouch)
{
    InputDispatch::DeactivateTouch(uiTouch);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) :971
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = InputDispatch::FindRoot(visual);
}

// private static int GetPointIndex(ObjC.Object uiTouch) :872
void InputDispatch__GetPointIndex_fn(::g::ObjC::Object* uiTouch, int* __retval)
{
    *__retval = InputDispatch::GetPointIndex(uiTouch);
}

// private static Fuse.Controls.Native.iOS.InputDispatch.RootInfo GetRootInfo(Fuse.Visual origin) :860
void InputDispatch__GetRootInfo_fn(::g::Fuse::Visual* origin, InputDispatch__RootInfo* __retval)
{
    *__retval = InputDispatch::GetRootInfo(origin);
}

// private static double GetTimestamp(ObjC.Object uiTouch) :925
void InputDispatch__GetTimestamp_fn(::g::ObjC::Object* uiTouch, double* __retval)
{
    *__retval = InputDispatch::GetTimestamp(uiTouch);
}

// private static float2 GetWindowPoint(ObjC.Object uiTouch, ObjC.Object rootView) :904
void InputDispatch__GetWindowPoint_fn(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, ::g::Uno::Float2* __retval)
{
    *__retval = InputDispatch::GetWindowPoint(uiTouch, rootView);
}

// private static void GetWindowPoint(ObjC.Object uiTouch, ObjC.Object rootView, float& x, float& y) :913
void InputDispatch__GetWindowPoint1_fn(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, float* x, float* y)
{
    InputDispatch::GetWindowPoint1(uiTouch, rootView, x, y);
}

// private static Fuse.Input.PointerEventData[] MakePointerEventData(ObjC.Object touches, ObjC.Object rootView) :937
void InputDispatch__MakePointerEventData_fn(::g::ObjC::Object* touches, ::g::ObjC::Object* rootView, uArray** __retval)
{
    *__retval = InputDispatch::MakePointerEventData(touches, rootView);
}

// private static Fuse.Input.PointerEventData NewPointerEventData(ObjC.Object uiTouch, ObjC.Object rootView) :946
void InputDispatch__NewPointerEventData_fn(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, ::g::Fuse::Input::PointerEventData** __retval)
{
    *__retval = InputDispatch::NewPointerEventData(uiTouch, rootView);
}

// private static int NSArrayCount(ObjC.Object nsArray) :960
void InputDispatch__NSArrayCount_fn(::g::ObjC::Object* nsArray, int* __retval)
{
    *__retval = InputDispatch::NSArrayCount(nsArray);
}

// private static ObjC.Object NSArrayObjectAtIndex(ObjC.Object nsArray, int index) :966
void InputDispatch__NSArrayObjectAtIndex_fn(::g::ObjC::Object* nsArray, int* index, ::g::ObjC::Object** __retval)
{
    *__retval = InputDispatch::NSArrayObjectAtIndex(nsArray, *index);
}

// public static void OnTouchesBegan(Fuse.Visual origin, ObjC.Object touches) :778
void InputDispatch__OnTouchesBegan_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch::OnTouchesBegan(origin, touches);
}

// public static void OnTouchesCancelled(Fuse.Visual origin, ObjC.Object touches) :804
void InputDispatch__OnTouchesCancelled_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch::OnTouchesCancelled(origin, touches);
}

// public static void OnTouchesEnded(Fuse.Visual origin, ObjC.Object touches) :792
void InputDispatch__OnTouchesEnded_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch::OnTouchesEnded(origin, touches);
}

// public static void OnTouchesMoved(Fuse.Visual origin, ObjC.Object touches) :785
void InputDispatch__OnTouchesMoved_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch::OnTouchesMoved(origin, touches);
}

// private static void RaiseCancelled(Fuse.Visual visual, Fuse.Input.PointerEventData data) :1012
void InputDispatch__RaiseCancelled_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseCancelled(visual, data);
}

// private static void RaiseMoved(Fuse.Visual root, Fuse.Input.PointerEventData data) :988
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(root, data);
}

// private static void RaisePressed(Fuse.Visual root, Fuse.Input.PointerEventData data) :976
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(root, data);
}

// private static void RaiseReleased(Fuse.Visual root, Fuse.Input.PointerEventData data) :1000
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(root, data);
}

// public static void RemoveInputHandler(Fuse.Controls.Native.ViewHandle viewHandle) :842
void InputDispatch__RemoveInputHandler_fn(::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch::RemoveInputHandler(viewHandle);
}

uSStrong< ::g::Uno::Collections::List*> InputDispatch::_activePointers_;

// public static void AddInputHandler(Fuse.Visual owner, Fuse.Controls.Native.ViewHandle viewHandle) [static] :817
void InputDispatch::AddInputHandler(::g::Fuse::Visual* owner, ::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        [] (id<UnoObject> owner, id<UnoObject> viewHandle) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<::g::Fuse::Controls::Native::ViewHandle*>((viewHandle).unoObject, ::g::Fuse::Controls::Native::ViewHandle_typeof())->HitTestHandle()); }();
            addInputHandler(view, ^void(int type, id<UnoObject> visual, id touches) {
            	switch(type)
            	{
            		case EVENTTYPE_PRESSED:
            			[&]() -> void { ::uForeignPool __foreignPool; InputDispatch::OnTouchesBegan(uCast<::g::Fuse::Visual*>((visual).unoObject, ::g::Fuse::Visual_typeof()), ::g::ObjC::Object::Create(touches)); }();
            			break;
            		case EVENTTYPE_MOVED:
            			[&]() -> void { ::uForeignPool __foreignPool; InputDispatch::OnTouchesMoved(uCast<::g::Fuse::Visual*>((visual).unoObject, ::g::Fuse::Visual_typeof()), ::g::ObjC::Object::Create(touches)); }();
            			break;
            		case EVENTTYPE_RELEASED:
            			[&]() -> void { ::uForeignPool __foreignPool; InputDispatch::OnTouchesEnded(uCast<::g::Fuse::Visual*>((visual).unoObject, ::g::Fuse::Visual_typeof()), ::g::ObjC::Object::Create(touches)); }();
            			break;
            		case EVENTTYPE_CANCELLED:
            			[&]() -> void { ::uForeignPool __foreignPool; InputDispatch::OnTouchesCancelled(uCast<::g::Fuse::Visual*>((visual).unoObject, ::g::Fuse::Visual_typeof()), ::g::ObjC::Object::Create(touches)); }();
            			break;
            		default:
            			break;
            	}
            }, owner);
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: owner], [::StrongUnoObject strongUnoObjectWithUnoObject: viewHandle]);
        
    }
    
}

// private static bool CompareUITouch(ObjC.Object a, ObjC.Object b) [static] :932
bool InputDispatch::CompareUITouch(::g::ObjC::Object* a, ::g::ObjC::Object* b)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id a, ::id b) -> bool
        {
            return (UITouch*)a == (UITouch*)b;
        } (::g::ObjC::Object::GetHandle(a), ::g::ObjC::Object::GetHandle(b));
        
    }
    
}

// private static void DeactivateTouch(ObjC.Object uiTouch) [static] :892
void InputDispatch::DeactivateTouch(::g::ObjC::Object* uiTouch)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "DeactivateTouch(ObjC.Object)");
    InputDispatch_typeof()->Init();
    ::g::ObjC::Object* ret8;

    for (int i = 0; i < uPtr(InputDispatch::_activePointers())->Count(); i++)
        if (InputDispatch::CompareUITouch((::g::Uno::Collections::List__get_Item_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(i), &ret8), ret8), uiTouch))
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(i), NULL);
            return;
        }
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) [static] :971
::g::Fuse::Visual* InputDispatch::FindRoot(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "FindRoot(Fuse.Visual)");
    InputDispatch_typeof()->Init();
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)InputDispatch::FindRoot(uPtr(visual)->Parent()) : visual;
}

// private static int GetPointIndex(ObjC.Object uiTouch) [static] :872
int InputDispatch::GetPointIndex(::g::ObjC::Object* uiTouch)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "GetPointIndex(ObjC.Object)");
    InputDispatch_typeof()->Init();
    ::g::ObjC::Object* ret9;
    int firstUnused = -1;

    for (int i = 0; i < uPtr(InputDispatch::_activePointers())->Count(); ++i)
    {
        ::g::ObjC::Object* pointer = (::g::Uno::Collections::List__get_Item_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(i), &ret9), ret9);

        if (InputDispatch::CompareUITouch(pointer, NULL) && (firstUnused < 0))
            firstUnused = i;
        else if (InputDispatch::CompareUITouch(pointer, uiTouch))
            return i;
    }

    if (firstUnused < 0)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(InputDispatch::_activePointers()), uiTouch);
        firstUnused = uPtr(InputDispatch::_activePointers())->Count() - 1;
    }

    ::g::Uno::Collections::List__set_Item_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(firstUnused), uiTouch);
    return firstUnused;
}

// private static Fuse.Controls.Native.iOS.InputDispatch.RootInfo GetRootInfo(Fuse.Visual origin) [static] :860
InputDispatch__RootInfo InputDispatch::GetRootInfo(::g::Fuse::Visual* origin)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "GetRootInfo(Fuse.Visual)");
    InputDispatch_typeof()->Init();
    ::g::Fuse::Visual* rootVisual = InputDispatch::FindRoot(origin);
    ::g::ObjC::Object* rootView = NULL;
    ::g::Fuse::Controls::Native::NativeRootViewport* rootViewport = uAs< ::g::Fuse::Controls::Native::NativeRootViewport*>(rootVisual, ::TYPES[1/*Fuse.Controls.Native.NativeRootViewport*/]);

    if (rootViewport != NULL)
        rootView = uPtr(uPtr(rootViewport)->RootView())->NativeHandle;

    return InputDispatch__RootInfo__New1(rootVisual, rootView);
}

// private static double GetTimestamp(ObjC.Object uiTouch) [static] :925
double InputDispatch::GetTimestamp(::g::ObjC::Object* uiTouch)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id uiTouch) -> double
        {
            ::UITouch* touch = (::UITouch*)uiTouch;
            return [touch timestamp];
        } (::g::ObjC::Object::GetHandle(uiTouch));
        
    }
    
}

// private static float2 GetWindowPoint(ObjC.Object uiTouch, ObjC.Object rootView) [static] :904
::g::Uno::Float2 InputDispatch::GetWindowPoint(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView)
{
    InputDispatch_typeof()->Init();
    float x;
    float y;
    InputDispatch::GetWindowPoint1(uiTouch, rootView, &x, &y);
    return ::g::Uno::Float2__New2(x, y);
}

// private static void GetWindowPoint(ObjC.Object uiTouch, ObjC.Object rootView, float& x, float& y) [static] :913
void InputDispatch::GetWindowPoint1(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, float* x, float* y)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        [] (::id uiTouch, ::id rootView, float* x, float* y) -> void
        {
            ::UITouch* touch = (::UITouch*)uiTouch;
            UIView* relativeView = (UIView*)rootView;
            UIWindow* window = [touch window];
            CGPoint location = [touch locationInView:window];
            CGPoint localLocation = [window convertPoint:location toView:relativeView];
            *x = (float)localLocation.x;
            *y = (float)localLocation.y;
        } (::g::ObjC::Object::GetHandle(uiTouch), ::g::ObjC::Object::GetHandle(rootView), x, y);
        
    }
    
}

// private static Fuse.Input.PointerEventData[] MakePointerEventData(ObjC.Object touches, ObjC.Object rootView) [static] :937
uArray* InputDispatch::MakePointerEventData(::g::ObjC::Object* touches, ::g::ObjC::Object* rootView)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "MakePointerEventData(ObjC.Object,ObjC.Object)");
    InputDispatch_typeof()->Init();
    int count = InputDispatch::NSArrayCount(touches);
    uArray* data = uArray::New(::TYPES[2/*Fuse.Input.PointerEventData[]*/], count);

    for (int i = 0; i < count; i++)
        uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i) = InputDispatch::NewPointerEventData(InputDispatch::NSArrayObjectAtIndex(touches, i), rootView);

    return data;
}

// private static Fuse.Input.PointerEventData NewPointerEventData(ObjC.Object uiTouch, ObjC.Object rootView) [static] :946
::g::Fuse::Input::PointerEventData* InputDispatch::NewPointerEventData(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "NewPointerEventData(ObjC.Object,ObjC.Object)");
    InputDispatch_typeof()->Init();
    ::g::Fuse::Input::PointerEventData* collection7;
    int pointIndex = InputDispatch::GetPointIndex(uiTouch);
    collection7 = ::g::Fuse::Input::PointerEventData::New1();
    uPtr(collection7)->PointIndex = pointIndex;
    uPtr(collection7)->WindowPoint = InputDispatch::GetWindowPoint(uiTouch, rootView);
    uPtr(collection7)->Timestamp = (InputDispatch::GetTimestamp(uiTouch) - ::g::Fuse::Time::FrameTimeBase());
    uPtr(collection7)->PointerType = 2;
    uPtr(collection7)->IsPrimary = (pointIndex == 0);
    return collection7;
}

// private static int NSArrayCount(ObjC.Object nsArray) [static] :960
int InputDispatch::NSArrayCount(::g::ObjC::Object* nsArray)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id nsArray) -> int
        {
            return (int)((NSArray*)nsArray).count;
        } (::g::ObjC::Object::GetHandle(nsArray));
        
    }
    
}

// private static ObjC.Object NSArrayObjectAtIndex(ObjC.Object nsArray, int index) [static] :966
::g::ObjC::Object* InputDispatch::NSArrayObjectAtIndex(::g::ObjC::Object* nsArray, int index)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id nsArray, int index) -> ::id
        {
            return [((NSArray*)nsArray) objectAtIndex:index];
        } (::g::ObjC::Object::GetHandle(nsArray), index));
        
    }
    
}

// public static void OnTouchesBegan(Fuse.Visual origin, ObjC.Object touches) [static] :778
void InputDispatch::OnTouchesBegan(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "OnTouchesBegan(Fuse.Visual,ObjC.Object)");
    InputDispatch_typeof()->Init();
    uArray* array1;
    int index2;
    int length3;
    InputDispatch__RootInfo rootInfo = InputDispatch::GetRootInfo(origin);

    for (array1 = InputDispatch::MakePointerEventData(touches, rootInfo.RootView), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Input::PointerEventData* data = uPtr(array1)->Strong< ::g::Fuse::Input::PointerEventData*>(index2);
        InputDispatch::RaisePressed(rootInfo.RootVisual, data);
    }
}

// public static void OnTouchesCancelled(Fuse.Visual origin, ObjC.Object touches) [static] :804
void InputDispatch::OnTouchesCancelled(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "OnTouchesCancelled(Fuse.Visual,ObjC.Object)");
    InputDispatch_typeof()->Init();
    InputDispatch__RootInfo rootInfo = InputDispatch::GetRootInfo(origin);
    int count = InputDispatch::NSArrayCount(touches);

    for (int i = 0; i < count; i++)
    {
        ::g::ObjC::Object* uiTouch = InputDispatch::NSArrayObjectAtIndex(touches, i);
        InputDispatch::RaiseCancelled(rootInfo.RootVisual, InputDispatch::NewPointerEventData(uiTouch, rootInfo.RootView));
        InputDispatch::DeactivateTouch(uiTouch);
    }
}

// public static void OnTouchesEnded(Fuse.Visual origin, ObjC.Object touches) [static] :792
void InputDispatch::OnTouchesEnded(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "OnTouchesEnded(Fuse.Visual,ObjC.Object)");
    InputDispatch_typeof()->Init();
    InputDispatch__RootInfo rootInfo = InputDispatch::GetRootInfo(origin);
    int count = InputDispatch::NSArrayCount(touches);

    for (int i = 0; i < count; i++)
    {
        ::g::ObjC::Object* uiTouch = InputDispatch::NSArrayObjectAtIndex(touches, i);
        InputDispatch::RaiseReleased(rootInfo.RootVisual, InputDispatch::NewPointerEventData(uiTouch, rootInfo.RootView));
        InputDispatch::DeactivateTouch(uiTouch);
    }
}

// public static void OnTouchesMoved(Fuse.Visual origin, ObjC.Object touches) [static] :785
void InputDispatch::OnTouchesMoved(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "OnTouchesMoved(Fuse.Visual,ObjC.Object)");
    InputDispatch_typeof()->Init();
    uArray* array4;
    int index5;
    int length6;
    InputDispatch__RootInfo rootInfo = InputDispatch::GetRootInfo(origin);

    for (array4 = InputDispatch::MakePointerEventData(touches, rootInfo.RootView), index5 = 0, length6 = uPtr(array4)->Length(); index5 < length6; ++index5)
    {
        ::g::Fuse::Input::PointerEventData* data = uPtr(array4)->Strong< ::g::Fuse::Input::PointerEventData*>(index5);
        InputDispatch::RaiseMoved(rootInfo.RootVisual, data);
    }
}

// private static void RaiseCancelled(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :1012
void InputDispatch::RaiseCancelled(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "RaiseCancelled(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        ::g::Fuse::Input::Pointer::LoseCapture(uPtr(data)->PointIndex);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseMoved(Fuse.Visual root, Fuse.Input.PointerEventData data) [static] :988
void InputDispatch::RaiseMoved(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "RaiseMoved(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        bool args = ::g::Fuse::Input::Pointer::RaiseMoved(root, data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Visual root, Fuse.Input.PointerEventData data) [static] :976
void InputDispatch::RaisePressed(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "RaisePressed(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        bool args = ::g::Fuse::Input::Pointer::RaisePressed(root, data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Visual root, Fuse.Input.PointerEventData data) [static] :1000
void InputDispatch::RaiseReleased(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "RaiseReleased(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        bool args = ::g::Fuse::Input::Pointer::RaiseReleased(root, data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void RemoveInputHandler(Fuse.Controls.Native.ViewHandle viewHandle) [static] :842
void InputDispatch::RemoveInputHandler(::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        [] (id<UnoObject> viewHandle) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<::g::Fuse::Controls::Native::ViewHandle*>((viewHandle).unoObject, ::g::Fuse::Controls::Native::ViewHandle_typeof())->HitTestHandle()); }();
            removeInputHandler(view);
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: viewHandle]);
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
