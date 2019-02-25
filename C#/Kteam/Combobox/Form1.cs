using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Combobox
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        List<Food> ListFood ;
        private void btnxuli_Click(object sender, EventArgs e)
        {
            ListFood = new List<Food>() 
            {
                new Food(){MonAn="Một Mực Hai nắng",price=25000 },
                new Food(){MonAn="Gà Xào hải sản",price=90000},
                new Food(){MonAn="Đậu Hà lan ",price=15000}
            };
            //Đổ List vào source
            cmb1.DataSource = ListFood;
            cmb1.DisplayMember = "MonAn";//chọn hiển thị
            //Tương tự làm comboxbox 2
            //cmb2.DataSource = ListFood;
            //cmb2.DisplayMember = "price";//chọn hiển thị
        }

        //Với Datasource thì event selectvaluechange hoặc selectitemchange cũng dc
        private void cmb1_SelectedValueChanged(object sender, EventArgs e)
        {
            ComboBox cm=sender as ComboBox;
            if(cm!=null)//được chọn nè
            {
                Food f = cm.SelectedValue as Food;
                txtprice.Text = f.price.ToString();


            }

        }
    }
    //Tao class Fôd
    public class Food
    {
        public string MonAn { get; set; }
        public int price { get; set; }
    }
}
