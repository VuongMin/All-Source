using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Image
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            cmb1.DataSource = Image;
        }
        string[] Image={"1","2","3"};
        string Duoi = ".jpg";


        private void btnload_Click(object sender, EventArgs e)
        {
            
            //BitMap voi duong dan truc tiep
            //ptb2.Image = new Bitmap(@"D:\laptrinh\C#\Kteam\Image\Resources\1.jpg");
            //BitMap voi duong Dan Tam Thoi
            //ptb2.Image =new Bitmap(Application.StartupPath+"//Resources//2.jpg");

            
        }
        //Khi Load Thi Hinh se Hien
        private void cmb1_SelectedValueChanged(object sender, EventArgs e)
        {
            ptb2.Image = new Bitmap(Application.StartupPath + "/Resources//"+cmb1.SelectedValue.ToString()+Duoi);
        }

     

      
    }
}
