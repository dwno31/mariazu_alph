// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.WhileHistoryTrigger.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct WhileCanGoForward;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileCanGoForward :5343
// {
::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoForward_typeof();
void WhileCanGoForward__ctor_7_fn(WhileCanGoForward* __this);
void WhileCanGoForward__get_IsOn_fn(WhileCanGoForward* __this, bool* __retval);
void WhileCanGoForward__New2_fn(WhileCanGoForward** __retval);

struct WhileCanGoForward : ::g::Fuse::Navigation::WhileHistoryTrigger
{
    void ctor_7();
    static WhileCanGoForward* New2();
};
// }

}}} // ::g::Fuse::Navigation
