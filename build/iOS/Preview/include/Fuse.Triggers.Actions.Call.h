// This file was generated based on '/Users/daewonnoh/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Phone/1.2.1/phone/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Call;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Call :103
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Call_typeof();
void Call__ctor_2_fn(Call* __this);
void Call__New2_fn(Call** __retval);
void Call__get_Number_fn(Call* __this, uString** __retval);
void Call__set_Number_fn(Call* __this, uString* value);
void Call__Perform_fn(Call* __this, ::g::Fuse::Node* target);

struct Call : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uString*> _Number;

    void ctor_2();
    uString* Number();
    void Number(uString* value);
    static Call* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
