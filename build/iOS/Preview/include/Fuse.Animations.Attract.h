// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Animations{struct Attract;}}}
namespace g{namespace Fuse{namespace Animations{struct AttractorConfig;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Attract :191
// {
::g::Fuse::Reactive::Expression_type* Attract_typeof();
void Attract__ctor_1_fn(Attract* __this, ::g::Fuse::Reactive::Expression* value, ::g::Fuse::Animations::AttractorConfig* config);
void Attract__New1_fn(::g::Fuse::Reactive::Expression* value, ::g::Fuse::Animations::AttractorConfig* config, Attract** __retval);
void Attract__Subscribe_fn(Attract* __this, uObject* context, uObject* listener, uObject** __retval);

struct Attract : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Animations::AttractorConfig*> _config;
    uStrong< ::g::Fuse::Reactive::Expression*> _sourceValue;

    void ctor_1(::g::Fuse::Reactive::Expression* value, ::g::Fuse::Animations::AttractorConfig* config);
    static Attract* New1(::g::Fuse::Reactive::Expression* value, ::g::Fuse::Animations::AttractorConfig* config);
};
// }

}}} // ::g::Fuse::Animations
