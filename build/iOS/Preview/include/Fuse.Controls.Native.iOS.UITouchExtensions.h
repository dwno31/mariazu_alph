// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UITouchExtensions;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class UITouchExtensions :1436
// {
uClassType* UITouchExtensions_typeof();
void UITouchExtensions__GetTouchPhase_fn(::g::ObjC::Object* handle, int* __retval);

struct UITouchExtensions : uObject
{
    static int GetTouchPhase(::g::ObjC::Object* handle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
