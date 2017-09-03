[Uno.Compiler.UxGenerated]
public partial class HomePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> MainWebview_Url_inst;
    internal global::Fuse.Controls.Image loading_main;
    internal global::Fuse.Controls.WebView MainWebview;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "loading_main",
        "MainWebview",
        "temp_eb0"
    };
    static HomePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public HomePage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        MainWebview = new global::Fuse.Controls.WebView();
        MainWebview_Url_inst = new mariazu_alpha_FuseControlsWebView_Url_Property(MainWebview, __selector0);
        var temp = new global::Fuse.Reactive.Data("ParentUrl");
        var temp1 = new global::Fuse.Reactive.Data("WebEvent");
        var temp2 = new global::Fuse.iOS.StatusBarConfig();
        var temp3 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        loading_main = new global::Fuse.Controls.Image();
        var temp4 = new global::Fuse.Controls.NativeViewHost();
        var temp5 = new global::Fuse.Reactive.DataBinding(MainWebview_Url_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp1, __g_nametable);
        temp2.IsVisible = true;
        temp2.Style = Fuse.Platform.StatusBarStyle.Dark;
        temp3.LineNumber = 3;
        temp3.FileName = "Pages/home.ux";
        temp3.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/home.js"));
        loading_main.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        loading_main.Alignment = Fuse.Elements.Alignment.Center;
        loading_main.Layer = Fuse.Layer.Background;
        loading_main.Name = __selector1;
        loading_main.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/loading_clock.png"));
        temp4.Children.Add(MainWebview);
        MainWebview.ZoomEnabled = false;
        MainWebview.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        MainWebview.Name = __selector2;
        MainWebview.URISchemeHandler += temp_eb0.OnEvent;
        MainWebview.Bindings.Add(temp5);
        MainWebview.Bindings.Add(temp_eb0);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(loading_main);
        __g_nametable.Objects.Add(MainWebview);
        __g_nametable.Objects.Add(temp_eb0);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
        this.Children.Add(loading_main);
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "Url";
    static global::Uno.UX.Selector __selector1 = "loading_main";
    static global::Uno.UX.Selector __selector2 = "MainWebview";
}
