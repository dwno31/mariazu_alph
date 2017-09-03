[Uno.Compiler.UxGenerated]
public partial class LoadingBar: Fuse.Controls.Panel
{
    static LoadingBar()
    {
    }
    [global::Uno.UX.UXConstructor]
    public LoadingBar()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.Color = float4(0.7333333f, 0.8784314f, 0.7411765f, 1f);
        this.Width = new Uno.UX.Size(0f, Uno.UX.Unit.Percent);
        this.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        this.Alignment = Fuse.Elements.Alignment.TopLeft;
    }
}
