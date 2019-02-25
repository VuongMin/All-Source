using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        void Process()
        {
            //Ngay NgayGui = new Ngay(dtpNgayGui.Value.Day, dtpNgayGui.Value.Month, dtpNgayGui.Value.Year);
            //Ngay NgayRut = new Ngay(dtpNgayRut.Value.Day, dtpNgayRut.Value.Month, dtpNgayRut.Value.Year);
            //double SoThangGui = NgayGui.TinhKhoangCachGiua2Moc(NgayRut);
           try
           {
               Nguoidung peo = new Nguoidung(
                   double.Parse(txtTienGui.Text),
                   cmbHinhThucGui.SelectedIndex,
                   dtpNgayGui.Value,
                   dtpNgayRut.Value);
               //Dung Het
               txtResult.Text = "Lai Xuat :" + peo.TinhTienLai().ToString();
               txtResult.Text += "\r\n Tong Tien :" + (double.Parse(txtTienGui.Text)+peo.TinhTienLai()).ToString();
           }
           catch
           {
               MessageBox.Show("Eror..!Kiem Tra Lai Tien Gui..");
           }

            
      
        }
        private void btnXuLi_Click(object sender, EventArgs e)
        {
            if(dtpNgayRut.Value<=dtpNgayGui.Value)
            {
                MessageBox.Show("Ngày Rút Phải Lớn Hơn Ngày Gửi..");
            }
                //Dieu Kien Dung..
            else
            {

                Process();
            }

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            cmbHinhThucGui.Items.Add("Không Thời Hạn");
            cmbHinhThucGui.Items.Add("1 đến 3 tháng");
            cmbHinhThucGui.Items.Add("3 đến 5 tháng");
            cmbHinhThucGui.Items.Add("5 đến 8 tháng");
            cmbHinhThucGui.Items.Add("8 đến 12 tháng");
            //chon Value hien thi dau tien.
            cmbHinhThucGui.SelectedIndex = 0;
        }
    }
}
