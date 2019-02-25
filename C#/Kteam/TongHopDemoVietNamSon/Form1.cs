using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TongHopDemoVietNamSon
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            LoadComboBox();
            LoadListBox();
            LoadAddColumListView();
          
        }
        //Load Comboxbox

        void LoadComboBox()
        {
            for(int i=1994;i<2050;i++)
            {
                cmbNamsinh.Items.Add(i);
            }
            cmbNamsinh.SelectedIndex = 0;
        }
        //Load ListBox
        void LoadListBox()
        {
            lsbDanhsachSelect.Items.Add("Lập Trình C");
            lsbDanhsachSelect.Items.Add("Lập Trình C++");
            lsbDanhsachSelect.Items.Add("Lập Trình C#.net");
            lsbDanhsachSelect.Items.Add("Lập Trình Java");
            lsbDanhsachSelect.Items.Add("Lập Trình ios");
            //Thuoc TInh chon one ,Multi...
            lsbDanhsachSelect.SelectionMode = SelectionMode.MultiExtended;
        }
        //Void Load Add Comlum ListView
        void LoadAddColumListView()
        {
            lsvKetQua.Columns.Add("Danh Sách Hướng Lập Trình", 300);
            lsvKetQua.View = View.Details;//Hien thi dang chi tiet
            lsvKetQua.GridLines = true;//Tao Duong Ke
            lsvKetQua.FullRowSelect = true;//Auto chon 1 dong
           
         
           
            
        }
        private void cmbNamsinh_SelectedIndexChanged(object sender, EventArgs e)
        {
            lblShowYear.Text = "Ban sinh nam :"+cmbNamsinh.SelectedItem.ToString();
        }

        private void lsbDanhsachSelect_SelectedIndexChanged(object sender, EventArgs e)
        {
            lblListSelect.Text = lsbDanhsachSelect.SelectedItem.ToString();
        }
        //Checkbox
        void Showcheckbox()
        {
            foreach (Control item in pnlCheckbox.Controls)
            {
               if((item.GetType()==typeof(CheckBox))&&((CheckBox)item).Checked)
               {
                   lblPrintCheck.Text += item.Text;
               }
            }
        }
        
        //Timer
        private void btnPlay_Click(object sender, EventArgs e)
        {
            tmThoigian.Start();
        }

        private void btnStop_Click(object sender, EventArgs e)
        {
            //Tam ngung..
            tmThoigian.Stop();
        }
        int second = 0;
        private void tmThoigian_Tick(object sender, EventArgs e)
        {
            tmThoigian.Interval = 100;
            second += 1;
            lblShowHour.Text = second.ToString();
        }
        int CountLanThem = 0;
        private void btnListView_Click(object sender, EventArgs e)
        {
            CountLanThem += 1;
            if(CountLanThem>=2)
            {
                MessageBox.Show("Ban da them roi.");
            }
            else
            {
                //Tao ra 1 item
                for (int i = 0; i < lsbDanhsachSelect.Items.Count; i++)
                {
                    ListViewItem item = new ListViewItem(lsbDanhsachSelect.Items[i].ToString());
                    //Add vao ListView
                    lsvKetQua.Items.Add(item);
                }
            }
           
        }

        private void btnkiemtra_Click(object sender, EventArgs e)
        {
            Showcheckbox();
          
        }

     


            
        }


    }

