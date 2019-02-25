namespace WindowsFormsApplication1
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
            this.label1 = new System.Windows.Forms.Label();
            this.txtTienGui = new System.Windows.Forms.TextBox();
            this.dtpNgayGui = new System.Windows.Forms.DateTimePicker();
            this.cmbHinhThucGui = new System.Windows.Forms.ComboBox();
            this.dtpNgayRut = new System.Windows.Forms.DateTimePicker();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.txtResult = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.btnXuLi = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 20);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(87, 17);
            this.label1.TabIndex = 0;
            this.label1.Text = "Số Tiền Gửi:";
            // 
            // txtTienGui
            // 
            this.txtTienGui.Location = new System.Drawing.Point(120, 15);
            this.txtTienGui.Name = "txtTienGui";
            this.txtTienGui.Size = new System.Drawing.Size(242, 22);
            this.txtTienGui.TabIndex = 1;
            // 
            // dtpNgayGui
            // 
            this.dtpNgayGui.Location = new System.Drawing.Point(120, 115);
            this.dtpNgayGui.Name = "dtpNgayGui";
            this.dtpNgayGui.Size = new System.Drawing.Size(242, 22);
            this.dtpNgayGui.TabIndex = 2;
            // 
            // cmbHinhThucGui
            // 
            this.cmbHinhThucGui.FormattingEnabled = true;
            this.cmbHinhThucGui.Location = new System.Drawing.Point(120, 69);
            this.cmbHinhThucGui.Name = "cmbHinhThucGui";
            this.cmbHinhThucGui.Size = new System.Drawing.Size(242, 24);
            this.cmbHinhThucGui.TabIndex = 3;
            // 
            // dtpNgayRut
            // 
            this.dtpNgayRut.Location = new System.Drawing.Point(120, 164);
            this.dtpNgayRut.Name = "dtpNgayRut";
            this.dtpNgayRut.Size = new System.Drawing.Size(242, 22);
            this.dtpNgayRut.TabIndex = 4;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(12, 76);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(103, 17);
            this.label2.TabIndex = 5;
            this.label2.Text = "Hình Thức Gửi:";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(12, 162);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(71, 17);
            this.label3.TabIndex = 6;
            this.label3.Text = "Ngày Rút:";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(12, 120);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(71, 17);
            this.label4.TabIndex = 7;
            this.label4.Text = "Ngày Gửi:";
            // 
            // txtResult
            // 
            this.txtResult.Location = new System.Drawing.Point(58, 257);
            this.txtResult.Multiline = true;
            this.txtResult.Name = "txtResult";
            this.txtResult.Size = new System.Drawing.Size(355, 116);
            this.txtResult.TabIndex = 8;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(185, 220);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(62, 17);
            this.label5.TabIndex = 9;
            this.label5.Text = "Money...";
            // 
            // btnXuLi
            // 
            this.btnXuLi.Location = new System.Drawing.Point(188, 220);
            this.btnXuLi.Name = "btnXuLi";
            this.btnXuLi.Size = new System.Drawing.Size(75, 23);
            this.btnXuLi.TabIndex = 10;
            this.btnXuLi.Text = "Money...";
            this.btnXuLi.UseVisualStyleBackColor = true;
            this.btnXuLi.Click += new System.EventHandler(this.btnXuLi_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(463, 385);
            this.Controls.Add(this.btnXuLi);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.txtResult);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.dtpNgayRut);
            this.Controls.Add(this.cmbHinhThucGui);
            this.Controls.Add(this.dtpNgayGui);
            this.Controls.Add(this.txtTienGui);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Quản Lí Ngân Hàng-Min";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtTienGui;
        private System.Windows.Forms.DateTimePicker dtpNgayGui;
        private System.Windows.Forms.ComboBox cmbHinhThucGui;
        private System.Windows.Forms.DateTimePicker dtpNgayRut;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox txtResult;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Button btnXuLi;
    }
}

