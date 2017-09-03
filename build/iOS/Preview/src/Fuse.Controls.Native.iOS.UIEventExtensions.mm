// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.UIEventExtensions.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <uObjC.Foreign.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class UIEventExtensions :1464
// {
static void UIEventExtensions_build(uType* type)
{
    ::TYPES[0] = ::g::ObjC::Object_typeof()->Array();
}

uClassType* UIEventExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.UIEventExtensions", options);
    type->fp_build_ = UIEventExtensions_build;
    return type;
}

// public static ObjC.Object[] GetTouchesForView(ObjC.Object handle, ObjC.Object viewHandle) :1466
void UIEventExtensions__GetTouchesForView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, uArray** __retval)
{
    *__retval = UIEventExtensions::GetTouchesForView(handle, viewHandle);
}

// private static long GetTouchesForViewCount(ObjC.Object handle, ObjC.Object viewHandle) :1477
void UIEventExtensions__GetTouchesForViewCount_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int64_t* __retval)
{
    *__retval = UIEventExtensions::GetTouchesForViewCount(handle, viewHandle);
}

// private static ObjC.Object GetTouchForView(ObjC.Object handle, ObjC.Object viewHandle, int index) :1486
void UIEventExtensions__GetTouchForView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int* index, ::g::ObjC::Object** __retval)
{
    *__retval = UIEventExtensions::GetTouchForView(handle, viewHandle, *index);
}

// public static ObjC.Object[] GetTouchesForView(ObjC.Object handle, ObjC.Object viewHandle) [static] :1466
uArray* UIEventExtensions::GetTouchesForView(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIEventExtensions", "GetTouchesForView(ObjC.Object,ObjC.Object)");
    int touchCount = (int)UIEventExtensions::GetTouchesForViewCount(handle, viewHandle);
    uArray* touches = uArray::New(::TYPES[0/*ObjC.Object[]*/], touchCount);

    for (int i = 0; i < touchCount; i++)
        uPtr(touches)->Strong< ::g::ObjC::Object*>(i) = UIEventExtensions::GetTouchForView(handle, viewHandle, i);

    return touches;
}

// private static long GetTouchesForViewCount(ObjC.Object handle, ObjC.Object viewHandle) [static] :1477
int64_t UIEventExtensions::GetTouchesForViewCount(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle)
{
    @autoreleasepool
    {
        return [] (::id handle, ::id viewHandle) -> int64_t
        {
            ::UIEvent* ev = (::UIEvent*)handle;
            ::UIView* view = (::UIView*)viewHandle;
            return [[[ev touchesForView:view] allObjects] count];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(viewHandle));
        
    }
    
}

// private static ObjC.Object GetTouchForView(ObjC.Object handle, ObjC.Object viewHandle, int index) [static] :1486
::g::ObjC::Object* UIEventExtensions::GetTouchForView(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int index)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, ::id viewHandle, int index) -> ::id
        {
            ::UIEvent* ev = (::UIEvent*)handle;
            ::UIView* view = (::UIView*)viewHandle;
            return [[[ev touchesForView:view] allObjects] objectAtIndex:index];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(viewHandle), index));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
