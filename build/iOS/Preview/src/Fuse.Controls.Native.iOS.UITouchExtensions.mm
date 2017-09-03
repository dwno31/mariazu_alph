// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.2.1/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.TouchPhase.h>
#include <Fuse.Controls.Native.iOS.UITouchExtensions.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class UITouchExtensions :1436
// {
static void UITouchExtensions_build(uType* type)
{
}

uClassType* UITouchExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.UITouchExtensions", options);
    type->fp_build_ = UITouchExtensions_build;
    return type;
}

// public static Fuse.Controls.Native.iOS.TouchPhase GetTouchPhase(ObjC.Object handle) :1440
void UITouchExtensions__GetTouchPhase_fn(::g::ObjC::Object* handle, int* __retval)
{
    *__retval = UITouchExtensions::GetTouchPhase(handle);
}

// public static Fuse.Controls.Native.iOS.TouchPhase GetTouchPhase(ObjC.Object handle) [static] :1440
int UITouchExtensions::GetTouchPhase(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> int
        {
            ::UITouch* touch = (::UITouch*)handle;
            UITouchPhase phase = [touch phase];
            
            switch (phase)
            {
            	case UITouchPhaseBegan:
            		return 0;
            	case UITouchPhaseMoved:
            		return 1;
            	case UITouchPhaseStationary:
            		return 2;
            	case UITouchPhaseEnded:
            		return 3;
            	case UITouchPhaseCancelled:
            		return 4;
            	default:
            		[NSException raise:@"Unknown touchphase" format:@"Touch phase of %ld is invalid", (long)phase];
            		break;
            }
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
