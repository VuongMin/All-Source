using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace version1
{

    public partial class Upadte : Form
    {
        public class MyClass
        {
            private string Month;

            public string month
            {
                get { return Month; }
                set { Month = value; }
            }
            private string Lai;

            public string lai
            {
                get { return Lai; }
                set { Lai = value; }
            }

        }
        public Upadte()
        {
            InitializeComponent();
            LoadCombo();
        }
        public List<MyClass> Temp;
        public void LoadCombo()
        {
             Temp = new List<MyClass>() 
            {
               new MyClass(){month="1 Tháng",lai="1.0 %"},
               new MyClass(){month="2 Tháng",lai="4.5 %"},
               new MyClass(){month="3 Tháng",lai="4.5 %"},
               new MyClass(){month="6 Tháng",lai="5.0 %"},
               new MyClass(){month="9 Tháng",lai="5.5 %"},
               new MyClass(){month="12 Tháng",lai="5.7 %"},
               new MyClass(){month="13 Tháng",lai="6.8 %"},
               new MyClass(){month="18 Tháng",lai="6.8 %"},
               new MyClass(){month="24 Tháng",lai="6.9 %"}
            };
            //Do vao combobox
            cmbkyhan.DataSource = Temp;
            cmbkyhan.DisplayMember = "month";
          
        }
        int hanky;
        private void cmbkyhan_SelectedIndexChanged(object sender, EventArgs e)
        {
            ComboBox cb = sender as ComboBox;
            if (cmbkyhan.SelectedValue != null)
            {
                MyClass clas = cb.SelectedValue as MyClass;
                txtLaisuat.Text = clas.lai;
            }
            if (cmbkyhan.SelectedIndex >= 0)
            {
             
                
                //MessageBox.Show(Temp[cmbkyhan.SelectedIndex].month);
                hanky = (int)ChangeStringToDigit(Temp[cmbkyhan.SelectedIndex].month); 
                
               // MessageBox.Show("hk" + hanky);
            }
        }

        private void Upadte_Load(object sender, EventArgs e)
        {
            txtLaisuat.Enabled = false;
            txtName.Text = Form1.NameSelecting;
            txtCMND.Text = Form1.CMNDSelecting;
            txtDepoist.Text = Form1.Depostsiting;
            if (Form1.StyleBook == "Term Book")
            {
                rdbCokyhan.Checked = true;
                cmbkyhan.SelectedIndex = Form1.indexcmbkyhan;

            }
            else
            {
                rdbKhongkyhan.Checked = true;
            }


        }

        private void rdbKhongkyhan_CheckedChanged(object sender, EventArgs e)
        {
            if (rdbCokyhan.Checked)
            {
                label7.Visible = true;
                cmbkyhan.Visible = true;
            }
            else
            {
                label7.Visible = false;
                cmbkyhan.Visible = false;

            }
        }
        public static double ChangeStringToDigit(string x)
        {
            int End = 0;
            for (int i = 0; i < x.Length; i++)
            {
                if (x[i] == ' ')
                {
                    End = i;
                    break;
                }
            }
            // MessageBox.Show(CmbIntestRate.SelectedItem.ToString().Substring(0, End));
            return double.Parse(x.Substring(0, End));
        }

        public static string NameFormupdate;
        private void btnCapnhat_Click(object sender, EventArgs e)
        {
           
            if(txtName.Text=="")
            {
                MessageBox.Show("Ban Chua Nhap Ten..");
            }
            else 
            {
                //Kiem tra ten co Khac khong da
                if(Form1.NameSelecting!=Form1.FormatName(txtName.Text))
                {
                    Bank.UpadteName(Form1.NameSelecting, Form1.FormatName(txtName.Text));
                    NameFormupdate= Form1.FormatName(txtName.Text);
                }
              // Cap nhat lai tren ngan hang
                // Tren co Ky han truoc ne
                bool check = false;
                for(int i=0;i<Bank.GetListTerm().Count;i++ )
                {
                    if(Form1.Masoselecting==Bank.GetListTerm()[i].maso)
                    {
                        Bank.GetListTerm()[i].TienGui =ChangeStringToDigit(txtDepoist.Text+"  ");
                        Bank.GetListTerm()[i].kyhan = hanky;
                        Bank.GetListTerm()[i].laisuat = ChangeStringToDigit(txtLaisuat.Text);
                        if(rdbCokyhan.Checked)
                        {
                            Form1.Buttonradio = 1;
                        }
                        else
                        {
                            Form1.Buttonradio = 0;
                        }
                        check = true;
                        break;
                    }
                }
                if(check==false)
                {
                    for(int i=0;i<Bank.GetNonTerm().Count;i++)
                    {
                        if(Form1.Masoselecting==Bank.GetNonTerm()[i].maso)
                        {
                            Bank.GetNonTerm()[i].TienGui = ChangeStringToDigit(txtDepoist.Text);
                            Bank.GetNonTerm()[i].laisuat = 1.0;
                            if (rdbCokyhan.Checked)
                            {
                                Form1.Buttonradio = 1;
                            }
                            else
                            {
                                Form1.Buttonradio = 0;
                            }
                            break;
                        }
                    }
                }
                //cap nhat qua form 1 lai cho listview ne
             //   Form1.NameSelecting = Form1.FormatName(txtName.Text);
                Form1.Depostsiting = txtDepoist.Text+" VND";
                Form1.Lai = txtLaisuat.Text;
                Form1.han = hanky.ToString();
                this.Close();

            }

        }


    }
}   

