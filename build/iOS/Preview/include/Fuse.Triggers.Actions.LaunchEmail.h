// This file was generated based on '/Users/daewonnoh/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Email/1.2.1/email/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LaunchEmail;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class LaunchEmail :114
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchEmail_typeof();
void LaunchEmail__ctor_2_fn(LaunchEmail* __this);
void LaunchEmail__get_BlindCarbonCopy_fn(LaunchEmail* __this, uString** __retval);
void LaunchEmail__set_BlindCarbonCopy_fn(LaunchEmail* __this, uString* value);
void LaunchEmail__get_CarbonCopy_fn(LaunchEmail* __this, uString** __retval);
void LaunchEmail__set_CarbonCopy_fn(LaunchEmail* __this, uString* value);
void LaunchEmail__get_Message_fn(LaunchEmail* __this, uString** __retval);
void LaunchEmail__set_Message_fn(LaunchEmail* __this, uString* value);
void LaunchEmail__New2_fn(LaunchEmail** __retval);
void LaunchEmail__Perform_fn(LaunchEmail* __this, ::g::Fuse::Node* target);
void LaunchEmail__get_Subject_fn(LaunchEmail* __this, uString** __retval);
void LaunchEmail__set_Subject_fn(LaunchEmail* __this, uString* value);
void LaunchEmail__get_To_fn(LaunchEmail* __this, uString** __retval);
void LaunchEmail__set_To_fn(LaunchEmail* __this, uString* value);

struct LaunchEmail : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uString*> _BlindCarbonCopy;
    uStrong<uString*> _CarbonCopy;
    uStrong<uString*> _Message;
    uStrong<uString*> _Subject;
    uStrong<uString*> _To;

    void ctor_2();
    uString* BlindCarbonCopy();
    void BlindCarbonCopy(uString* value);
    uString* CarbonCopy();
    void CarbonCopy(uString* value);
    uString* Message();
    void Message(uString* value);
    uString* Subject();
    void Subject(uString* value);
    uString* To();
    void To(uString* value);
    static LaunchEmail* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
