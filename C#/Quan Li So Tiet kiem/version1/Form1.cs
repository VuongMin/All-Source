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
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            LoadCombobox();
            LoadColum();
        }
        public void LoadCombobox()
        {
            
            //Load Intestest Rate
            CmbIntestRate.Enabled = false;
            CmbIntestRate.Items.Add("1.0 %");
            CmbIntestRate.Items.Add("4.5 %");
            CmbIntestRate.Items.Add("4.5 %");
            CmbIntestRate.Items.Add("5.0 %");
            CmbIntestRate.Items.Add("5.5 %");
            CmbIntestRate.Items.Add("5.7 %");
            CmbIntestRate.Items.Add("6.8 %");
            CmbIntestRate.Items.Add("6.8 %");
            CmbIntestRate.Items.Add("6.9 %");
            //Load combobox Month
            cmbkyhan.Items.Add("1 month");
            cmbkyhan.Items.Add("2 month");
            cmbkyhan.Items.Add("3 month");
            cmbkyhan.Items.Add("6 month");
            cmbkyhan.Items.Add("9 month");
            cmbkyhan.Items.Add("12 month");
            cmbkyhan.Items.Add("13 month");
            cmbkyhan.Items.Add("18 month");
            cmbkyhan.Items.Add("24 month");
            //select index
            cmbkyhan.SelectedIndex = 0;


        }
        double Laisuat = 0;
        private void CmbIntestRate_SelectedIndexChanged(object sender, EventArgs e)
        {
            int End=0;
            for(int i=0;i<CmbIntestRate.SelectedItem.ToString().Length;i++)
            {
                if(CmbIntestRate.SelectedItem.ToString()[i]==' ')
                {
                    End = i ;
                    break;
                }
            }
           // MessageBox.Show(CmbIntestRate.SelectedItem.ToString().Substring(0, End));
            Laisuat = double.Parse(CmbIntestRate.SelectedItem.ToString().Substring(0, End));
        }
        public void LoadColum()
        {
            lsvShow.Columns.Add("Mã Sổ",80);
            lsvShow.Columns.Add("Họ Tên",120);
            lsvShow.Columns.Add("CMND",120);
            lsvShow.Columns.Add("Tiền Gửi",100);
            lsvShow.Columns.Add("Tên Sổ",120);
            lsvShow.Columns.Add("Tháng Gửi",110);
         
            lsvShow.Columns.Add("Kỳ Hạn",80);
            lsvShow.Columns.Add("Lãi suất",80);
            lsvShow.Columns.Add("Tiền Hiện Tại", 120);
        }
        private void rdbCokyhan_CheckedChanged(object sender, EventArgs e)
        {
            if(rdbCokyhan.Checked)
            {
                label7.Visible = true;
                cmbkyhan.Visible = true;
            }
            else
            {
                label7.Visible = false;
                cmbkyhan.Visible = false;
                CmbIntestRate.SelectedIndex = 0;
            }
        }
        //Khi thay doi thi kia cung thay doi
        int kyhan = 0;
        int indexListview;
        public static int  indexcmbkyhan;
        private void cmbkyhan_SelectedIndexChanged(object sender, EventArgs e)
        {
            indexcmbkyhan = cmbkyhan.SelectedIndex;
            if(cmbkyhan.SelectedIndex>=0)
            {
                CmbIntestRate.SelectedIndex = cmbkyhan.SelectedIndex;
                //ky han doi 
                int End = 0;
                for (int i = 0; i <cmbkyhan.SelectedItem.ToString().Length; i++)
                {
                    if (cmbkyhan.SelectedItem.ToString()[i] == ' ')
                    {
                        End = i;
                        break;
                    }
                }
                //MessageBox.Show(cmbkyhan.SelectedItem.ToString().Substring(0, End));
                kyhan = int.Parse(cmbkyhan.SelectedItem.ToString().Substring(0, End));
            }
        }
        //Kiem Tra Form Hop le
        int day = 0;//Ngay da duoc tru
         public bool FormInvalid()
        {
             //Tru 2 datepicker
             TimeSpan Time=new TimeSpan();
             Time=dtpEnd.Value-dtpfounded.Value;
             day=Time.Days+1;//So ngay Da substract - cong them 1 vi co the no tinh theo ca gio

            
            if(txtCMND.Text==""||txtDepoist.Text==""||txtName.Text=="")
            {
                MessageBox.Show("Khong duoc bo trong O...");
                return false;
            }
            else if(!rdbCokyhan.Checked&&!rdbKhongkyhan.Checked)
            {
                MessageBox.Show("Button Chua duoc Chon...");
                return false;
            }
             else if(day<=0)
            {
                MessageBox.Show("Ngay Sau Phai Lon hon Ngay Truoc!");
                 return false;
            }
           
            return true;
        }
        //Dinh dang Betifull
        public static string FormatCMND(string cmnd)
         {
            return cmnd.ToUpper();
           
         }
        public static string FormatName(string name)
        {
            name= name.Trim();
            name = name.ToLower();
            char[] charater = name.ToCharArray();
             charater[0]=  char.ToUpper(charater[0]);
            for (int i = 1; i < charater.Length; i++)
            {
                if (charater[i] == ' ' && charater[i + 1] != ' ')
                {
                   charater[i+1]= char.ToUpper(charater[i + 1]);
                }
            }
            name = new string(charater);
            return name;
        }
         
        // Xu li Them vao
       
        string HoTen;
        string CMND;
        int STT = 0;
        int IndexTerm = 0;
        int IndexNonTerm = 0;
        private void btnAdd_Click(object sender, EventArgs e)
        {
            if(FormInvalid()==true)
            {
                bool check = true;
                HoTen = FormatName(txtName.Text);
                CMND = FormatCMND(txtCMND.Text);
                //Kiem Tra du lieu Input Sai Name va cmnd
                if(Bank.InvalidFailsData(HoTen,CMND)==true)
                {
               
                   if(rdbCokyhan.Checked)
                   {
                       try
                       {
                           Termbook Cokyhan=new Termbook("",CMND,HoTen,
                               double.Parse(txtDepoist.Text),
                               day/30,Laisuat,kyhan
                               );
                           Bank.SetListTerm(Cokyhan);
                           STT += 1;
                           //set lai Maso
                           Cokyhan.maso = "MS" + STT;
                       }catch
                       {
                           check = false;
                           MessageBox.Show("Kieu Du lieu Khong Hop Le!");
                       }

                   }
                    else
                   {
                       try
                       {
                           NonTerm Khongkyhan=new NonTerm("",CMND,HoTen,
                               double.Parse(txtDepoist.Text),day/30,
                                Laisuat);
                            
                           Bank.SetNonTerm(Khongkyhan);
                           STT += 1;
                           //set lai Maso
                           Khongkyhan.maso = "MS" + STT;
                           
                       }
                       catch
                       {
                           check = false;
                           MessageBox.Show("Kieu Du lieu Khong Hop Le!");

                       }

                   }
                    if(check==true)
                    {
                       
                        //Them vao list view
                        string[] arr = new string[9];
                        arr[0] = "MS"+STT.ToString();
                        arr[1] = HoTen;
                        arr[2] = CMND;
                        arr[3] = txtDepoist.Text+ " VND" ;
                        if (rdbCokyhan.Checked)
                        {
                            arr[4] = "Term Book";
                            arr[6] = kyhan.ToString()+" Thang";
                            arr[8] = Bank.GetListTerm()[IndexTerm++].TinhTien().ToString()+" VND";
                        }
                        else
                        {
                            arr[4] = "Non-Term Book";
                            arr[6] = "không xác định";
                            arr[8] = Bank.GetNonTerm()[IndexNonTerm++].TinhTien().ToString() + " VND";
                        }
                        arr[5] = (day / 30).ToString() + " Thang ";
                        arr[7] = Laisuat.ToString()+" % ";
                        //Item
                        ListViewItem Item = new ListViewItem(arr);
                        lsvShow.Items.Add(Item);
                    }
                   
                   

                  
                }
                else
                {
                    MessageBox.Show("Xin Kiem Tra Lai Name Hoac CMND cua Ban...");
                }
                //Procsecc

            }
        }

       public static  string  NameSelecting;
       public static string CMNDSelecting;
       public static  string StyleBook;
       public static string Depostsiting;
       public static string Masoselecting;
       public static int Buttonradio;//0 : khong ky han 1 : co ky han
       public static string Lai;
       public static string han;
        private void btnDelete_Click(object sender, EventArgs e)
        {
            if(lsvShow.Items.Count!=0)
            {
                //MessageBox.Show("Name " + NameSelecting + " - " + CMNDSelecting);
                //xoa Trong Bank
                Bank.DeleItem(Masoselecting, StyleBook);
                //xoa Trong Listview
                lsvShow.Items.RemoveAt(lsvShow.Items.IndexOf(lsvShow.SelectedItems[0]));
            }
          
        }

        private void lsvShow_SelectedIndexChanged(object sender, EventArgs e)
        {
            if(lsvShow.SelectedItems.Count>0)
            {
                Masoselecting = lsvShow.SelectedItems[0].SubItems[0].Text;
                NameSelecting = lsvShow.SelectedItems[0].SubItems[1].Text;
                CMNDSelecting = lsvShow.SelectedItems[0].SubItems[2].Text;
                StyleBook = lsvShow.SelectedItems[0].SubItems[4].Text;
                Depostsiting = lsvShow.SelectedItems[0].SubItems[3].Text;
                 indexListview=  lsvShow.Items.IndexOf(lsvShow.SelectedItems[0]); 
            }
        }
       
        private void btnRepair_Click(object sender, EventArgs e)
        {
            if(lsvShow.Items.Count!=0&&NameSelecting!=null)
            {
                Upadte FrmCapnhat = new Upadte();
                FrmCapnhat.ShowDialog();
                //duyet Listview 
                if(NameSelecting!=Upadte.NameFormupdate)
                {
                    for(int i=0;i<lsvShow.Items.Count;i++)
                    {
                        if(lsvShow.Items[i].SubItems[1].Text==NameSelecting&&CMNDSelecting==lsvShow.Items[i].SubItems[2].Text)
                        {
                            lsvShow.Items[i].SubItems[1].Text = Upadte.NameFormupdate;
                        }
                    }
                }
                else
                {
                    lsvShow.Items[indexListview].SubItems[1].Text = NameSelecting;
                }
               
                lsvShow.Items[indexListview].SubItems[3].Text = Depostsiting;
                if(Buttonradio==1)
                {
                    lsvShow.Items[indexListview].SubItems[4].Text = "Term Book";
                    lsvShow.Items[indexListview].SubItems[6].Text = han;
                    lsvShow.Items[indexListview].SubItems[7].Text = Lai;
                    
                }
                else
                {
                    lsvShow.Items[indexListview].SubItems[4].Text = "Non-Term Book";
                    lsvShow.Items[indexListview].SubItems[6].Text = "không xác định";
                    lsvShow.Items[indexListview].SubItems[7].Text = "1 %";
                   
                }
           
              

            }
            
        }

        private void button1_Click(object sender, EventArgs e)
        {

            for (int i = 0; i < lsvShow.Items.Count; i++)
            {
                
                    lsvShow.Items[i].BackColor = Color.White;
                
            }
            
            FrmSearch seach = new FrmSearch();
            seach.ShowDialog();
            if(lsvShow.Items.Count>0)
            {
                for(int i=0;i<lsvShow.Items.Count;i++)
                {
                    if(lsvShow.Items[i].SubItems[2].Text==seach.cmndSeachh)
                    {
                        lsvShow.Items[i].BackColor = Color.Red;
                    }
                }
            }
            else
            {
                MessageBox.Show("Chưa có Dữ Liệu...");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if(lsvShow.Items.Count>0)
            {
                double TongMoney = 0;
                for (int i = 0; i < lsvShow.Items.Count; i++)
                {

                    TongMoney +=Upadte.ChangeStringToDigit(lsvShow.Items[i].SubItems[8].Text);

                }
                MessageBox.Show("Tổng Tiền Ngân Hàng Phải Trả : " + TongMoney);
            }
        }

     

     

       
    }
}
