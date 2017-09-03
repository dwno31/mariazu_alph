// This file was generated based on /Users/daewonnoh/Fuse/mariazu_alpha/Device.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Device.h>
#include <Fuse.AppBase.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <sys/sysctl.h>
#include <sys/types.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[12];
static uType* TYPES[9];

namespace g{

// public sealed class Device :28
// {
// static Device() :28
static void Device__cctor__fn(uType* __type)
{
    Device::cachedNumProcessorCores_ = 0.0;
}

static void Device_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Device");
    ::STRINGS[1] = uString::Const("vendor");
    ::STRINGS[2] = uString::Const("model");
    ::STRINGS[3] = uString::Const("system");
    ::STRINGS[4] = uString::Const("systemVersion");
    ::STRINGS[5] = uString::Const("SDKVersion");
    ::STRINGS[6] = uString::Const("cores");
    ::STRINGS[7] = uString::Const("displayScale");
    ::STRINGS[8] = uString::Const("isRetina");
    ::STRINGS[9] = uString::Const("UUID");
    ::STRINGS[10] = uString::Const("locale");
    ::STRINGS[11] = uString::Const("getUUID");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Double_typeof(), uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Bool_typeof(), uObject_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::Device::_instance_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Device::cachedModelName_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Device::cachedNumProcessorCores_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Device::cachedSDKVersion_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Device::cachedSystemName_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Device::cachedSystemVersion_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Device::cachedUUID_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Device::cachedVendorName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(11,
        new uFunction("AsyncUUIDImpl", NULL, (void*)Device__AsyncUUIDImpl_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), 0),
        new uFunction("IsRetina", NULL, (void*)Device__IsRetina_fn, 0, true, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Model", NULL, (void*)Device__Model_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Device__New2_fn, 0, true, type, 0),
        new uFunction("NumProcessorCores", NULL, (void*)Device__NumProcessorCores_fn, 0, true, ::g::Uno::Double_typeof(), 0),
        new uFunction("PixelsPerPoint", NULL, (void*)Device__PixelsPerPoint_fn, 0, true, ::g::Uno::Double_typeof(), 0),
        new uFunction("SDKVersion", NULL, (void*)Device__SDKVersion_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("System", NULL, (void*)Device__System_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("SystemVersion", NULL, (void*)Device__SystemVersion_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("UUID", NULL, (void*)Device__UUID_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("Vendor", NULL, (void*)Device__Vendor_fn, 0, true, ::g::Uno::String_typeof(), 0));
}

::g::Fuse::Scripting::NativeModule_type* Device_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Device);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Device", options);
    type->fp_build_ = Device_build;
    type->fp_ctor_ = (void*)Device__New2_fn;
    type->fp_cctor_ = Device__cctor__fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Device() :39
void Device__ctor_2_fn(Device* __this)
{
    __this->ctor_2();
}

// private Uno.Threading.Future<string> AsyncUUID(object[] args) :63
void Device__AsyncUUID_fn(Device* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->AsyncUUID(args);
}

// public static extern Uno.Threading.Future<string> AsyncUUIDImpl() :68
void Device__AsyncUUIDImpl_fn(::g::Uno::Threading::Future1** __retval)
{
    *__retval = Device::AsyncUUIDImpl();
}

// private static extern string GetCurrentLocale() :277
void Device__GetCurrentLocale_fn(uString** __retval)
{
    *__retval = Device::GetCurrentLocale();
}

// private static extern string GetModel() :309
void Device__GetModel_fn(uString** __retval)
{
    *__retval = Device::GetModel();
}

// private static extern int GetNumProcessorCores() :341
void Device__GetNumProcessorCores_fn(int* __retval)
{
    *__retval = Device::GetNumProcessorCores();
}

// private static extern string GetSDKVersion() :335
void Device__GetSDKVersion_fn(uString** __retval)
{
    *__retval = Device::GetSDKVersion();
}

// private static extern string GetSystem() :323
void Device__GetSystem_fn(uString** __retval)
{
    *__retval = Device::GetSystem();
}

// private static extern string GetSystemVersion() :329
void Device__GetSystemVersion_fn(uString** __retval)
{
    *__retval = Device::GetSystemVersion();
}

// private static extern string GetUUID() :220
void Device__GetUUID_fn(uString** __retval)
{
    *__retval = Device::GetUUID();
}

// private static extern string GetVendor() :303
void Device__GetVendor_fn(uString** __retval)
{
    *__retval = Device::GetVendor();
}

// public static bool IsRetina() :163
void Device__IsRetina_fn(bool* __retval)
{
    *__retval = Device::IsRetina();
}

// public static string Model() :128
void Device__Model_fn(uString** __retval)
{
    *__retval = Device::Model();
}

// public Device New() :39
void Device__New2_fn(Device** __retval)
{
    *__retval = Device::New2();
}

// public static double NumProcessorCores() :156
void Device__NumProcessorCores_fn(double* __retval)
{
    *__retval = Device::NumProcessorCores();
}

// public static double PixelsPerPoint() :167
void Device__PixelsPerPoint_fn(double* __retval)
{
    *__retval = Device::PixelsPerPoint();
}

// public static string SDKVersion() :149
void Device__SDKVersion_fn(uString** __retval)
{
    *__retval = Device::SDKVersion();
}

// public static string System() :135
void Device__System_fn(uString** __retval)
{
    *__retval = Device::System();
}

// public static string SystemVersion() :142
void Device__SystemVersion_fn(uString** __retval)
{
    *__retval = Device::SystemVersion();
}

// public static extern string UUID() :103
void Device__UUID_fn(uString** __retval)
{
    *__retval = Device::UUID();
}

// public static string Vendor() :121
void Device__Vendor_fn(uString** __retval)
{
    *__retval = Device::Vendor();
}

uSStrong<Device*> Device::_instance_;
uSStrong<uString*> Device::cachedModelName_;
double Device::cachedNumProcessorCores_;
uSStrong<uString*> Device::cachedSDKVersion_;
uSStrong<uString*> Device::cachedSystemName_;
uSStrong<uString*> Device::cachedSystemVersion_;
uSStrong<uString*> Device::cachedUUID_;
uSStrong<uString*> Device::cachedVendorName_;

// public Device() [instance] :39
void Device::ctor_2()
{
    uStackFrame __("Device", ".ctor()");
    ctor_1();

    if (Device::_instance() != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Device::_instance() = this, ::STRINGS[0/*"Device"*/]);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[1/*"vendor"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__Vendor_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[2/*"model"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__Model_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[3/*"system"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__System_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[4/*"systemVersion"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__SystemVersion_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[5/*"SDKVersion"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__SDKVersion_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[2/*Fuse.Scripting.NativeProperty<double, object>*/], ::STRINGS[6/*"cores"*/], uDelegate::New(::TYPES[3/*Uno.Func<double>*/], (void*)Device__NumProcessorCores_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[2/*Fuse.Scripting.NativeProperty<double, object>*/], ::STRINGS[7/*"displayScale"*/], uDelegate::New(::TYPES[3/*Uno.Func<double>*/], (void*)Device__PixelsPerPoint_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[4/*Fuse.Scripting.NativeProperty<bool, object>*/], ::STRINGS[8/*"isRetina"*/], uDelegate::New(::TYPES[5/*Uno.Func<bool>*/], (void*)Device__IsRetina_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[9/*"UUID"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__UUID_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[10/*"locale"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__GetCurrentLocale_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[6/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[11/*"getUUID"*/], uDelegate::New(::TYPES[7/*Fuse.Scripting.FutureFactory<string>*/], (void*)Device__AsyncUUID_fn, this), NULL));
}

// private Uno.Threading.Future<string> AsyncUUID(object[] args) [instance] :63
::g::Uno::Threading::Future1* Device::AsyncUUID(uArray* args)
{
    return Device::AsyncUUIDImpl();
}

// public static extern Uno.Threading.Future<string> AsyncUUIDImpl() [static] :68
::g::Uno::Threading::Future1* Device::AsyncUUIDImpl()
{
    uStackFrame __("Device", "AsyncUUIDImpl()");
    Device_typeof()->Init();
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[8/*Uno.Threading.Promise<string>*/]);
    ::g::Uno::Threading::Promise__Resolve_fn(p, Device::GetUUID());
    return p;
}

// private static extern string GetCurrentLocale() [static] :277
uString* Device::GetCurrentLocale()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            NSString* language = NSLocale.preferredLanguages[0];
            
            if (language.length <= 2) {
                NSLocale* locale        = NSLocale.currentLocale;
                NSString* localeId      = locale.localeIdentifier;
                NSRange underscoreIndex = [localeId rangeOfString: @"_" options: NSBackwardsSearch];
                NSRange atSignIndex     = [localeId rangeOfString: @"@"];
            
                if (underscoreIndex.location != NSNotFound) {
                    if (atSignIndex.length == 0)
                        language = [NSString stringWithFormat: @"%@%@", language, [localeId substringFromIndex: underscoreIndex.location]];
                    else {
                        NSRange localeRange = NSMakeRange(underscoreIndex.location, atSignIndex.location - underscoreIndex.location);
                        language = [NSString stringWithFormat: @"%@%@", language, [localeId substringWithRange: localeRange]];
                    }
                }
            }
            
            return [language stringByReplacingOccurrencesOfString: @"_" withString: @"-"];
        } ());
        
    }
    
}

// private static extern string GetModel() [static] :309
uString* Device::GetModel()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            size_t hardwareModelSize;
            sysctlbyname("hw.machine", NULL, &hardwareModelSize, NULL, 0);
            char* hardwareModel = (char*)malloc(hardwareModelSize);
            
            sysctlbyname("hw.machine", hardwareModel, &hardwareModelSize, NULL, 0);
            NSString* model = [NSString stringWithUTF8String: hardwareModel];
            free(hardwareModel);
            
            return model;
        } ());
        
    }
    
}

// private static extern int GetNumProcessorCores() [static] :341
int Device::GetNumProcessorCores()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        uint32_t ncpu = 0;
        size_t size = sizeof(uint32_t);
        if (sysctlbyname("hw.logicalcpu", &ncpu, &size, NULL, 0) != 0) {
            if (sysctlbyname("hw.ncpu", &ncpu, &size, NULL, 0) != 0) {
                ncpu = 1;
            }
        }
        
        return (int32_t)ncpu;
    }
    
}

// private static extern string GetSDKVersion() [static] :335
uString* Device::GetSDKVersion()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return UIDevice.currentDevice.systemVersion;
        } ());
        
    }
    
}

// private static extern string GetSystem() [static] :323
uString* Device::GetSystem()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return @"iOS";
        } ());
        
    }
    
}

// private static extern string GetSystemVersion() [static] :329
uString* Device::GetSystemVersion()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return UIDevice.currentDevice.systemVersion;
        } ());
        
    }
    
}

// private static extern string GetUUID() [static] :220
uString* Device::GetUUID()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return [[[UIDevice currentDevice] identifierForVendor] UUIDString];
        } ());
        
    }
    
}

// private static extern string GetVendor() [static] :303
uString* Device::GetVendor()
{
    Device_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return @"Apple";
        } ());
        
    }
    
}

// public static bool IsRetina() [static] :163
bool Device::IsRetina()
{
    uStackFrame __("Device", "IsRetina()");
    Device_typeof()->Init();
    return Device::PixelsPerPoint() > 1.0;
}

// public static string Model() [static] :128
uString* Device::Model()
{
    uStackFrame __("Device", "Model()");
    Device_typeof()->Init();

    if (::g::Uno::String::op_Equality(Device::cachedModelName(), NULL))
        Device::cachedModelName() = Device::GetModel();

    return Device::cachedModelName();
}

// public Device New() [static] :39
Device* Device::New2()
{
    Device* obj1 = (Device*)uNew(Device_typeof());
    obj1->ctor_2();
    return obj1;
}

// public static double NumProcessorCores() [static] :156
double Device::NumProcessorCores()
{
    Device_typeof()->Init();

    if (Device::cachedNumProcessorCores() == 0.0)
        Device::cachedNumProcessorCores() = (double)Device::GetNumProcessorCores();

    return Device::cachedNumProcessorCores();
}

// public static double PixelsPerPoint() [static] :167
double Device::PixelsPerPoint()
{
    uStackFrame __("Device", "PixelsPerPoint()");
    Device_typeof()->Init();
    return (double)uPtr(uPtr(::g::Fuse::AppBase::Current2())->RootViewport())->PixelsPerPoint();
}

// public static string SDKVersion() [static] :149
uString* Device::SDKVersion()
{
    uStackFrame __("Device", "SDKVersion()");
    Device_typeof()->Init();

    if (::g::Uno::String::op_Equality(Device::cachedSDKVersion(), NULL))
        Device::cachedSDKVersion() = Device::GetSDKVersion();

    return Device::cachedSDKVersion();
}

// public static string System() [static] :135
uString* Device::System()
{
    uStackFrame __("Device", "System()");
    Device_typeof()->Init();

    if (::g::Uno::String::op_Equality(Device::cachedSystemName(), NULL))
        Device::cachedSystemName() = Device::GetSystem();

    return Device::cachedSystemName();
}

// public static string SystemVersion() [static] :142
uString* Device::SystemVersion()
{
    uStackFrame __("Device", "SystemVersion()");
    Device_typeof()->Init();

    if (::g::Uno::String::op_Equality(Device::cachedSystemVersion(), NULL))
        Device::cachedSystemVersion() = Device::GetSystemVersion();

    return Device::cachedSystemVersion();
}

// public static extern string UUID() [static] :103
uString* Device::UUID()
{
    uStackFrame __("Device", "UUID()");
    Device_typeof()->Init();

    if (::g::Uno::String::op_Equality(Device::cachedUUID(), NULL))
        Device::cachedUUID() = Device::GetUUID();

    return Device::cachedUUID();
}

// public static string Vendor() [static] :121
uString* Device::Vendor()
{
    uStackFrame __("Device", "Vendor()");
    Device_typeof()->Init();

    if (::g::Uno::String::op_Equality(Device::cachedVendorName(), NULL))
        Device::cachedVendorName() = Device::GetVendor();

    return Device::cachedVendorName();
}
// }

} // ::g
