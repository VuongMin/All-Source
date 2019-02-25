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
    public partial class FrmSearch : Form
    {
        public FrmSearch()
        {
            InitializeComponent();
        }
        public string cmndSeachh;
        private void txtxacnhan_Click(object sender, EventArgs e)
        {
            cmndSeachh = Form1.FormatCMND(txtcmnd.Text);
            this.Close();
        }
    }
}
