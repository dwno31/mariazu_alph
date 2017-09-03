[Uno.Compiler.UxGenerated]
public partial class Splash: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static Splash()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Splash(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.iOS.StatusBarConfig();
        var temp1 = new global::Fuse.Controls.DockPanel();
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.Grid();
        var temp4 = new global::Fuse.Controls.StackPanel();
        var temp5 = new global::Fuse.Controls.Image();
        var temp6 = new global::Fuse.Controls.Text();
        var temp7 = new global::Fuse.Controls.Text();
        temp.IsVisible = false;
        temp.Style = Fuse.Platform.StatusBarStyle.Light;
        temp1.ClipToBounds = true;
        temp1.Children.Add(temp2);
        temp1.Children.Add(temp3);
        temp2.LineNumber = 5;
        temp2.FileName = "Pages/Splash.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/Splash.js"));
        temp3.RowCount = 1;
        temp3.Children.Add(temp4);
        temp4.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp6);
        temp4.Children.Add(temp7);
        temp5.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp5.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/mariazu-heart.png"));
        temp6.Value = "MARIAZU";
        temp6.FontSize = 12f;
        temp6.Color = float4(0.654902f, 0.7882353f, 0.6627451f, 1f);
        temp6.Alignment = Fuse.Elements.Alignment.Center;
        temp6.Padding = float4(0f, 4f, 0f, 4f);
        temp7.Value = "더 아름다운 다이닝을 검색하다";
        temp7.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp7.Opacity = 0.6f;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}
