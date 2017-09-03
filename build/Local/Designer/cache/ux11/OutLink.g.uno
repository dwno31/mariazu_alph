[Uno.Compiler.UxGenerated]
public partial class OutLink: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<Uno.UX.Size> _loadingBar_Width_inst;
    global::Uno.UX.Property<bool> OnLoadingText_Value_inst;
    global::Uno.UX.Property<string> myWebView_Url_inst;
    global::Uno.UX.Property<Uno.UX.FileSource> temp1_File_inst;
    global::Uno.UX.Property<Uno.UX.FileSource> likeitem_File_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb1;
    internal global::Fuse.Reactive.EventBinding temp_eb2;
    internal global::Fuse.Controls.Image img;
    internal global::LoadingBar _loadingBar;
    internal global::Fuse.Controls.WebView myWebView;
    internal global::Fuse.Triggers.WhileTrue OnLoadingText;
    internal global::Fuse.Controls.Panel GoWeb;
    internal global::Fuse.Controls.Image GoWebImg;
    internal global::Fuse.Reactive.EventBinding temp_eb3;
    internal global::Fuse.Controls.Image likeitem;
    internal global::Fuse.Reactive.EventBinding temp_eb4;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb1",
        "temp_eb2",
        "img",
        "_loadingBar",
        "myWebView",
        "OnLoadingText",
        "GoWeb",
        "GoWebImg",
        "temp_eb3",
        "likeitem",
        "temp_eb4"
    };
    static OutLink()
    {
    }
    [global::Uno.UX.UXConstructor]
    public OutLink(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp2 = new global::Fuse.Reactive.Data("goBack");
        var temp3 = new global::Fuse.Reactive.Data("goBack");
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new mariazu_alpha_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp4 = new global::Fuse.Reactive.Data("ShopName");
        _loadingBar = new global::LoadingBar();
        _loadingBar_Width_inst = new mariazu_alpha_FuseElementsElement_Width_Property(_loadingBar, __selector1);
        OnLoadingText = new global::Fuse.Triggers.WhileTrue();
        OnLoadingText_Value_inst = new mariazu_alpha_FuseTriggersWhileBool_Value_Property(OnLoadingText, __selector0);
        myWebView = new global::Fuse.Controls.WebView();
        myWebView_Url_inst = new mariazu_alpha_FuseControlsWebView_Url_Property(myWebView, __selector2);
        var temp5 = new global::Fuse.Reactive.Data("OutlinkUrl");
        var temp1 = new global::Fuse.Resources.FileImageSource();
        temp1_File_inst = new mariazu_alpha_FuseResourcesFileImageSource_File_Property(temp1, __selector3);
        var temp6 = new global::Fuse.Reactive.Data("LikeImage");
        var temp7 = new global::Fuse.Reactive.Data("BrowserGo");
        likeitem = new global::Fuse.Controls.Image();
        likeitem_File_inst = new mariazu_alpha_FuseControlsImage_File_Property(likeitem, __selector3);
        var temp8 = new global::Fuse.Reactive.Data("LikeImage");
        var temp9 = new global::Fuse.Reactive.Data("LikeitemToggle");
        var temp10 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp11 = new global::Fuse.Controls.DockPanel();
        var temp12 = new global::Fuse.Controls.Grid();
        var temp13 = new global::Fuse.Controls.DockPanel();
        var temp14 = new global::Fuse.Controls.Button();
        var temp15 = new global::Fuse.Controls.Image();
        temp_eb1 = new global::Fuse.Reactive.EventBinding(temp2, __g_nametable);
        temp_eb2 = new global::Fuse.Reactive.EventBinding(temp3, __g_nametable);
        var temp16 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp17 = new global::Fuse.Controls.DockPanel();
        img = new global::Fuse.Controls.Image();
        var temp18 = new global::Fuse.Controls.NativeViewHost();
        var temp19 = new global::Fuse.Triggers.ProgressAnimation();
        var temp20 = new global::Fuse.Animations.Change<Uno.UX.Size>(_loadingBar_Width_inst);
        var temp21 = new global::Fuse.Triggers.WhilePageLoading();
        var temp22 = new global::Fuse.Animations.Change<bool>(OnLoadingText_Value_inst);
        var temp23 = new global::Fuse.Reactive.DataBinding(myWebView_Url_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Fuse.Animations.Spin();
        var temp25 = new global::Fuse.Controls.DockPanel();
        var temp26 = new global::Fuse.Controls.StackPanel();
        var temp27 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7882353f, 0.7882353f, 0.7882353f, 1f));
        var temp28 = new global::Fuse.Controls.Grid();
        var temp29 = new global::Fuse.Controls.Button();
        var temp30 = new global::Fuse.Controls.Image();
        var temp31 = new global::Fuse.Reactive.DataBinding(temp1_File_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp32 = new global::Fuse.Gestures.Clicked();
        var temp33 = new global::Fuse.Navigation.GoBack();
        var temp34 = new global::Fuse.Controls.Button();
        var temp35 = new global::Fuse.Controls.Image();
        var temp36 = new global::Fuse.Gestures.Clicked();
        var temp37 = new global::Fuse.Navigation.GoForward();
        GoWeb = new global::Fuse.Controls.Panel();
        GoWebImg = new global::Fuse.Controls.Image();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp7, __g_nametable);
        var temp38 = new global::Fuse.Controls.Panel();
        var temp39 = new global::Fuse.Reactive.DataBinding(likeitem_File_inst, temp8, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp40 = new global::Fuse.Gestures.Clicked();
        var temp41 = new global::Fuse.Triggers.Actions.RaiseUserEvent();
        temp_eb4 = new global::Fuse.Reactive.EventBinding(temp9, __g_nametable);
        var temp42 = new global::Fuse.Drawing.StaticSolidColor(float4(0f, 0f, 0f, 0.05f));
        temp10.LineNumber = 3;
        temp10.FileName = "Pages/outlink.ux";
        temp10.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/outlink.js"));
        temp11.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        temp11.Height = new Uno.UX.Size(7f, Uno.UX.Unit.Percent);
        temp11.Alignment = Fuse.Elements.Alignment.Top;
        temp11.Children.Add(temp12);
        temp12.ColumnCount = 24;
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp);
        global::Fuse.Controls.Grid.SetColumn(temp13, 0);
        global::Fuse.Controls.Grid.SetColumnSpan(temp13, 4);
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb1.OnEvent);
        temp13.Children.Add(temp14);
        temp13.Bindings.Add(temp_eb1);
        temp14.Alignment = Fuse.Elements.Alignment.Center;
        temp14.Children.Add(temp15);
        temp15.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp15.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/back_arrow.png"));
        temp.FontSize = 18f;
        temp.Alignment = Fuse.Elements.Alignment.CenterLeft;
        temp.Margin = float4(0f, 3f, 0f, 0f);
        global::Fuse.Controls.Grid.SetColumn(temp, 4);
        global::Fuse.Controls.Grid.SetColumnSpan(temp, 16);
        global::Fuse.Gestures.Clicked.AddHandler(temp, temp_eb2.OnEvent);
        temp.Bindings.Add(temp_eb2);
        temp.Bindings.Add(temp16);
        temp17.Height = new Uno.UX.Size(86f, Uno.UX.Unit.Percent);
        temp17.Children.Add(img);
        temp17.Children.Add(temp18);
        temp17.Children.Add(OnLoadingText);
        img.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        img.Layer = Fuse.Layer.Background;
        img.Name = __selector4;
        img.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/loading_clock.png"));
        temp18.Children.Add(_loadingBar);
        temp18.Children.Add(myWebView);
        _loadingBar.Name = __selector5;
        global::Fuse.Controls.DockPanel.SetDock(_loadingBar, Fuse.Layouts.Dock.Top);
        myWebView.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        myWebView.Name = __selector6;
        myWebView.Children.Add(temp19);
        myWebView.Children.Add(temp21);
        myWebView.Bindings.Add(temp23);
        temp19.Animators.Add(temp20);
        temp20.Value = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp21.Animators.Add(temp22);
        temp22.Value = true;
        OnLoadingText.Name = __selector7;
        OnLoadingText.Animators.Add(temp24);
        temp24.Frequency = 1;
        temp24.Target = img;
        temp25.Height = new Uno.UX.Size(7f, Uno.UX.Unit.Percent);
        temp25.Alignment = Fuse.Elements.Alignment.Bottom;
        temp25.Background = temp42;
        temp25.Children.Add(temp26);
        temp25.Children.Add(temp28);
        temp26.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp26, Fuse.Layouts.Dock.Top);
        temp26.Background = temp27;
        temp28.ColumnCount = 4;
        temp28.Children.Add(temp29);
        temp28.Children.Add(temp34);
        temp28.Children.Add(GoWeb);
        temp28.Children.Add(temp38);
        global::Fuse.Controls.Grid.SetColumn(temp29, 0);
        temp29.Children.Add(temp30);
        temp29.Children.Add(temp32);
        temp30.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp30.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/webview_backward.png"));
        temp30.Source = temp1;
        temp30.Bindings.Add(temp31);
        temp32.Actions.Add(temp33);
        temp33.TargetNode = myWebView;
        global::Fuse.Controls.Grid.SetColumn(temp34, 1);
        temp34.Children.Add(temp35);
        temp34.Children.Add(temp36);
        temp35.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp35.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/webview_forward.png"));
        temp36.Actions.Add(temp37);
        temp37.TargetNode = myWebView;
        GoWeb.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        GoWeb.Name = __selector8;
        global::Fuse.Controls.Grid.SetColumn(GoWeb, 2);
        global::Fuse.Gestures.Clicked.AddHandler(GoWeb, temp_eb3.OnEvent);
        GoWeb.Children.Add(GoWebImg);
        GoWeb.Bindings.Add(temp_eb3);
        GoWebImg.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        GoWebImg.Name = __selector9;
        GoWebImg.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/web-go.png"));
        temp38.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        global::Fuse.Controls.Grid.SetColumn(temp38, 3);
        global::Fuse.Gestures.Clicked.AddHandler(temp38, temp_eb4.OnEvent);
        temp38.Children.Add(likeitem);
        temp38.Children.Add(temp40);
        temp38.Bindings.Add(temp_eb4);
        likeitem.Height = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        likeitem.Name = __selector10;
        likeitem.Bindings.Add(temp39);
        temp40.Actions.Add(temp41);
        temp41.EventName = __selector11;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb1);
        __g_nametable.Objects.Add(temp_eb2);
        __g_nametable.Objects.Add(img);
        __g_nametable.Objects.Add(_loadingBar);
        __g_nametable.Objects.Add(myWebView);
        __g_nametable.Objects.Add(OnLoadingText);
        __g_nametable.Objects.Add(GoWeb);
        __g_nametable.Objects.Add(GoWebImg);
        __g_nametable.Objects.Add(temp_eb3);
        __g_nametable.Objects.Add(likeitem);
        __g_nametable.Objects.Add(temp_eb4);
        this.Children.Add(temp10);
        this.Children.Add(temp11);
        this.Children.Add(temp17);
        this.Children.Add(temp25);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Width";
    static global::Uno.UX.Selector __selector2 = "Url";
    static global::Uno.UX.Selector __selector3 = "File";
    static global::Uno.UX.Selector __selector4 = "img";
    static global::Uno.UX.Selector __selector5 = "_loadingBar";
    static global::Uno.UX.Selector __selector6 = "myWebView";
    static global::Uno.UX.Selector __selector7 = "OnLoadingText";
    static global::Uno.UX.Selector __selector8 = "GoWeb";
    static global::Uno.UX.Selector __selector9 = "GoWebImg";
    static global::Uno.UX.Selector __selector10 = "likeitem";
    static global::Uno.UX.Selector __selector11 = "myGlobalEvent";
}
