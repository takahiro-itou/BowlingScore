
namespace ViewCs
{

public partial class Form1 : Form
{
    public Form1()
    {
        InitializeComponent();
    }

    private void runCount(System.String message)
    {
    }

    private void SampleControl1_RunButtonClick(object sender, EventArgs e)
    {
        runCount(SampleControl1.InputText);
    }
}

}