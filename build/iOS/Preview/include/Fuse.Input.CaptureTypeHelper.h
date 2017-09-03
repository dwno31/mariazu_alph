// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.2.1/input/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct CaptureTypeHelper;}}}

namespace g{
namespace Fuse{
namespace Input{

// public static class CaptureTypeHelper :1250
// {
uClassType* CaptureTypeHelper_typeof();
void CaptureTypeHelper__BecameHard_fn(int* prev, int* next, bool* __retval);
void CaptureTypeHelper__GainedCapture_fn(int* prev, int* next, bool* __retval);

struct CaptureTypeHelper : uObject
{
    static bool BecameHard(int prev, int next);
    static bool GainedCapture(int prev, int next);
};
// }

}}} // ::g::Fuse::Input
