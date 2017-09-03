// This file was generated based on '/Users/daewonnoh/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Maps/1.2.1/maps/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LaunchMaps;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class LaunchMaps :114
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchMaps_typeof();
void LaunchMaps__ctor_2_fn(LaunchMaps* __this);
void LaunchMaps__get_Latitude_fn(LaunchMaps* __this, uString** __retval);
void LaunchMaps__set_Latitude_fn(LaunchMaps* __this, uString* value);
void LaunchMaps__get_Longitude_fn(LaunchMaps* __this, uString** __retval);
void LaunchMaps__set_Longitude_fn(LaunchMaps* __this, uString* value);
void LaunchMaps__New2_fn(LaunchMaps** __retval);
void LaunchMaps__Perform_fn(LaunchMaps* __this, ::g::Fuse::Node* target);

struct LaunchMaps : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uString*> _Latitude;
    uStrong<uString*> _Longitude;

    void ctor_2();
    uString* Latitude();
    void Latitude(uString* value);
    uString* Longitude();
    void Longitude(uString* value);
    static LaunchMaps* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
