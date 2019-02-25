namespace TongHopDemoVietNamSon
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.pnlCheckbox = new System.Windows.Forms.Panel();
            this.lblPrintCheck = new System.Windows.Forms.Label();
            this.checkBox4 = new System.Windows.Forms.CheckBox();
            this.checkBox3 = new System.Windows.Forms.CheckBox();
            this.checkBox2 = new System.Windows.Forms.CheckBox();
            this.checkBox1 = new System.Windows.Forms.CheckBox();
            this.panel2 = new System.Windows.Forms.Panel();
            this.lblShowYear = new System.Windows.Forms.Label();
            this.cmbNamsinh = new System.Windows.Forms.ComboBox();
            this.panel3 = new System.Windows.Forms.Panel();
            this.lblListSelect = new System.Windows.Forms.Label();
            this.lsbDanhsachSelect = new System.Windows.Forms.ListBox();
            this.lsvKetQua = new System.Windows.Forms.ListView();
            this.panel4 = new System.Windows.Forms.Panel();
            this.btnStop = new System.Windows.Forms.Button();
            this.btnPlay = new System.Windows.Forms.Button();
            this.lblShowHour = new System.Windows.Forms.Label();
            this.btnListView = new System.Windows.Forms.Button();
            this.tmThoigian = new System.Windows.Forms.Timer(this.components);
            this.btnkiemtra = new System.Windows.Forms.Button();
            this.pnlCheckbox.SuspendLayout();
            this.panel2.SuspendLayout();
            this.panel3.SuspendLayout();
            this.panel4.SuspendLayout();
            this.SuspendLayout();
            // 
            // pnlCheckbox
            // 
            this.pnlCheckbox.Controls.Add(this.btnkiemtra);
            this.pnlCheckbox.Controls.Add(this.lblPrintCheck);
            this.pnlCheckbox.Controls.Add(this.checkBox4);
            this.pnlCheckbox.Controls.Add(this.checkBox3);
            this.pnlCheckbox.Controls.Add(this.checkBox2);
            this.pnlCheckbox.Controls.Add(this.checkBox1);
            this.pnlCheckbox.Location = new System.Drawing.Point(12, 0);
            this.pnlCheckbox.Name = "pnlCheckbox";
            this.pnlCheckbox.Size = new System.Drawing.Size(251, 170);
            this.pnlCheckbox.TabIndex = 0;
            // 
            // lblPrintCheck
            // 
            this.lblPrintCheck.AutoSize = true;
            this.lblPrintCheck.Location = new System.Drawing.Point(12, 104);
            this.lblPrintCheck.Name = "lblPrintCheck";
            this.lblPrintCheck.Size = new System.Drawing.Size(0, 17);
            this.lblPrintCheck.TabIndex = 2;
            // 
            // checkBox4
            // 
            this.checkBox4.AutoSize = true;
            this.checkBox4.Location = new System.Drawing.Point(131, 66);
            this.checkBox4.Name = "checkBox4";
            this.checkBox4.Size = new System.Drawing.Size(98, 21);
            this.checkBox4.TabIndex = 3;
            this.checkBox4.Text = "checkBox4";
            this.checkBox4.UseVisualStyleBackColor = true;
            // 
            // checkBox3
            // 
            this.checkBox3.AutoSize = true;
            this.checkBox3.Checked = true;
            this.checkBox3.CheckState = System.Windows.Forms.CheckState.Checked;
            this.checkBox3.Location = new System.Drawing.Point(131, 13);
            this.checkBox3.Name = "checkBox3";
            this.checkBox3.Size = new System.Drawing.Size(98, 21);
            this.checkBox3.TabIndex = 2;
            this.checkBox3.Text = "checkBox3";
            this.checkBox3.UseVisualStyleBackColor = true;
            // 
            // checkBox2
            // 
            this.checkBox2.AutoSize = true;
            this.checkBox2.Location = new System.Drawing.Point(15, 66);
            this.checkBox2.Name = "checkBox2";
            this.checkBox2.Size = new System.Drawing.Size(98, 21);
            this.checkBox2.TabIndex = 1;
            this.checkBox2.Text = "checkBox2";
            this.checkBox2.UseVisualStyleBackColor = true;
            // 
            // checkBox1
            // 
            this.checkBox1.AutoSize = true;
            this.checkBox1.Location = new System.Drawing.Point(15, 13);
            this.checkBox1.Name = "checkBox1";
            this.checkBox1.Size = new System.Drawing.Size(98, 21);
            this.checkBox1.TabIndex = 0;
            this.checkBox1.Text = "checkBox1";
            this.checkBox1.UseVisualStyleBackColor = true;
            // 
            // panel2
            // 
            this.panel2.Controls.Add(this.lblShowYear);
            this.panel2.Controls.Add(this.cmbNamsinh);
            this.panel2.Location = new System.Drawing.Point(306, 21);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(200, 100);
            this.panel2.TabIndex = 1;
            // 
            // lblShowYear
            // 
            this.lblShowYear.AutoSize = true;
            this.lblShowYear.Location = new System.Drawing.Point(14, 66);
            this.lblShowYear.Name = "lblShowYear";
            this.lblShowYear.Size = new System.Drawing.Size(46, 17);
            this.lblShowYear.TabIndex = 1;
            this.lblShowYear.Text = "label1";
            // 
            // cmbNamsinh
            // 
            this.cmbNamsinh.FormattingEnabled = true;
            this.cmbNamsinh.Location = new System.Drawing.Point(17, 13);
            this.cmbNamsinh.Name = "cmbNamsinh";
            this.cmbNamsinh.Size = new System.Drawing.Size(166, 24);
            this.cmbNamsinh.TabIndex = 0;
            this.cmbNamsinh.SelectedIndexChanged += new System.EventHandler(this.cmbNamsinh_SelectedIndexChanged);
            // 
            // panel3
            // 
            this.panel3.Controls.Add(this.lblListSelect);
            this.panel3.Controls.Add(this.lsbDanhsachSelect);
            this.panel3.Location = new System.Drawing.Point(12, 176);
            this.panel3.Name = "panel3";
            this.panel3.Size = new System.Drawing.Size(216, 144);
            this.panel3.TabIndex = 2;
            // 
            // lblListSelect
            // 
            this.lblListSelect.AutoSize = true;
            this.lblListSelect.Location = new System.Drawing.Point(27, 104);
            this.lblListSelect.Name = "lblListSelect";
            this.lblListSelect.Size = new System.Drawing.Size(46, 17);
            this.lblListSelect.TabIndex = 2;
            this.lblListSelect.Text = "label1";
            // 
            // lsbDanhsachSelect
            // 
            this.lsbDanhsachSelect.FormattingEnabled = true;
            this.lsbDanhsachSelect.ItemHeight = 16;
            this.lsbDanhsachSelect.Location = new System.Drawing.Point(30, 17);
            this.lsbDanhsachSelect.Name = "lsbDanhsachSelect";
            this.lsbDanhsachSelect.SelectionMode = System.Windows.Forms.SelectionMode.MultiSimple;
            this.lsbDanhsachSelect.Size = new System.Drawing.Size(146, 84);
            this.lsbDanhsachSelect.TabIndex = 0;
            this.lsbDanhsachSelect.SelectedIndexChanged += new System.EventHandler(this.lsbDanhsachSelect_SelectedIndexChanged);
            // 
            // lsvKetQua
            // 
            this.lsvKetQua.GridLines = true;
            this.lsvKetQua.Location = new System.Drawing.Point(27, 367);
            this.lsvKetQua.Name = "lsvKetQua";
            this.lsvKetQua.Size = new System.Drawing.Size(511, 96);
            this.lsvKetQua.TabIndex = 3;
            this.lsvKetQua.UseCompatibleStateImageBehavior = false;
            // 
            // panel4
            // 
            this.panel4.Controls.Add(this.btnStop);
            this.panel4.Controls.Add(this.btnPlay);
            this.panel4.Controls.Add(this.lblShowHour);
            this.panel4.Location = new System.Drawing.Point(306, 163);
            this.panel4.Name = "panel4";
            this.panel4.Size = new System.Drawing.Size(200, 145);
            this.panel4.TabIndex = 4;
            // 
            // btnStop
            // 
            this.btnStop.Location = new System.Drawing.Point(113, 91);
            this.btnStop.Name = "btnStop";
            this.btnStop.Size = new System.Drawing.Size(75, 23);
            this.btnStop.TabIndex = 3;
            this.btnStop.Text = "stop";
            this.btnStop.UseVisualStyleBackColor = true;
            this.btnStop.Click += new System.EventHandler(this.btnStop_Click);
            // 
            // btnPlay
            // 
            this.btnPlay.Location = new System.Drawing.Point(17, 91);
            this.btnPlay.Name = "btnPlay";
            this.btnPlay.Size = new System.Drawing.Size(75, 23);
            this.btnPlay.TabIndex = 0;
            this.btnPlay.Text = "play";
            this.btnPlay.UseVisualStyleBackColor = true;
            this.btnPlay.Click += new System.EventHandler(this.btnPlay_Click);
            // 
            // lblShowHour
            // 
            this.lblShowHour.AutoSize = true;
            this.lblShowHour.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblShowHour.Location = new System.Drawing.Point(69, 30);
            this.lblShowHour.Name = "lblShowHour";
            this.lblShowHour.Size = new System.Drawing.Size(58, 32);
            this.lblShowHour.TabIndex = 2;
            this.lblShowHour.Text = "0:0";
            // 
            // btnListView
            // 
            this.btnListView.Location = new System.Drawing.Point(156, 326);
            this.btnListView.Name = "btnListView";
            this.btnListView.Size = new System.Drawing.Size(242, 23);
            this.btnListView.TabIndex = 5;
            this.btnListView.Text = "Thêm Danh Sách";
            this.btnListView.UseVisualStyleBackColor = true;
            this.btnListView.Click += new System.EventHandler(this.btnListView_Click);
            // 
            // tmThoigian
            // 
            this.tmThoigian.Interval = 1000;
            this.tmThoigian.Tick += new System.EventHandler(this.tmThoigian_Tick);
            // 
            // btnkiemtra
            // 
            this.btnkiemtra.Location = new System.Drawing.Point(3, 144);
            this.btnkiemtra.Name = "btnkiemtra";
            this.btnkiemtra.Size = new System.Drawing.Size(75, 23);
            this.btnkiemtra.TabIndex = 4;
            this.btnkiemtra.Text = "kiem tra";
            this.btnkiemtra.UseVisualStyleBackColor = true;
            this.btnkiemtra.Click += new System.EventHandler(this.btnkiemtra_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(550, 475);
            this.Controls.Add(this.btnListView);
            this.Controls.Add(this.panel4);
            this.Controls.Add(this.lsvKetQua);
            this.Controls.Add(this.panel3);
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.pnlCheckbox);
            this.Name = "Form1";
            this.Text = "Form1";
            this.pnlCheckbox.ResumeLayout(false);
            this.pnlCheckbox.PerformLayout();
            this.panel2.ResumeLayout(false);
            this.panel2.PerformLayout();
            this.panel3.ResumeLayout(false);
            this.panel3.PerformLayout();
            this.panel4.ResumeLayout(false);
            this.panel4.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel pnlCheckbox;
        private System.Windows.Forms.CheckBox checkBox4;
        private System.Windows.Forms.CheckBox checkBox3;
        private System.Windows.Forms.CheckBox checkBox2;
        private System.Windows.Forms.CheckBox checkBox1;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Label lblShowYear;
        private System.Windows.Forms.ComboBox cmbNamsinh;
        private System.Windows.Forms.Panel panel3;
        private System.Windows.Forms.ListBox lsbDanhsachSelect;
        private System.Windows.Forms.Label lblPrintCheck;
        private System.Windows.Forms.ListView lsvKetQua;
        private System.Windows.Forms.Panel panel4;
        private System.Windows.Forms.Button btnStop;
        private System.Windows.Forms.Button btnPlay;
        private System.Windows.Forms.Label lblShowHour;
        private System.Windows.Forms.Button btnListView;
        private System.Windows.Forms.Label lblListSelect;
        private System.Windows.Forms.Timer tmThoigian;
        private System.Windows.Forms.Button btnkiemtra;
    }
}

