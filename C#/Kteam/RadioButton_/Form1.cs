using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RadioButton_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        //Tao ra ham 
        void show_resutl(Panel pn,Label lb)
        {
            RadioButton ckb = null;//gan cho radio la  khong co gi ca!

            foreach (RadioButton item in pn.Controls)
            {
                if(item.Checked)
                {
                    ckb = item;
                    break;
                }
            }
            if(ckb!=null)
            {
                lb.Text = ckb.Text;
            }

        }
     

        private void btnxuli_Click_1(object sender, EventArgs e)
        {
            show_resutl(pnl1, lbl1);
            show_resutl(pnl2, lbl2);
            show_resutl(pnl3, lbl3);
        }

        //3 thang chung 1 event -- care  den ten vent
        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            RadioButton rdb = sender as RadioButton;//ep kieu cho no!
            //khi ma khong biet thang nao trong list duoc chon
            lblover1.Text = rdb.Text;

        }

        private void radioButton6_CheckedChanged(object sender, EventArgs e)
        {
            RadioButton rdb = sender as RadioButton;//ep kieu cho no!
            //khi ma khong biet thang nao trong list duoc chon
            lblover2.Text = rdb.Text;
        }

        private void radioButton7_CheckedChanged(object sender, EventArgs e)
        {
            RadioButton rdb = sender as RadioButton;//ep kieu cho no!
            //khi ma khong biet thang nao trong list duoc chon
            lblover3.Text = rdb.Text;
        }
    }
}
