namespace Image
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
            this.btnload = new System.Windows.Forms.Button();
            this.ptb2 = new System.Windows.Forms.PictureBox();
            this.ptb1 = new System.Windows.Forms.PictureBox();
            this.cmb1 = new System.Windows.Forms.ComboBox();
            ((System.ComponentModel.ISupportInitialize)(this.ptb2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.ptb1)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(108, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(88, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "Sizemode -Image";
            // 
            // btnload
            // 
            this.btnload.Location = new System.Drawing.Point(559, 238);
            this.btnload.Name = "btnload";
            this.btnload.Size = new System.Drawing.Size(75, 23);
            this.btnload.TabIndex = 2;
            this.btnload.Text = "Load";
            this.btnload.UseVisualStyleBackColor = true;
            this.btnload.Click += new System.EventHandler(this.btnload_Click);
            // 
            // ptb2
            // 
            this.ptb2.Location = new System.Drawing.Point(332, 52);
            this.ptb2.Name = "ptb2";
            this.ptb2.Size = new System.Drawing.Size(284, 143);
            this.ptb2.TabIndex = 3;
            this.ptb2.TabStop = false;
            this.ptb2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            // 
            // ptb1
            // 
            this.ptb1.BackgroundImage = global::Image.Properties.Resources.tải_xuống;
            this.ptb1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.ptb1.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.ptb1.Image = global::Image.Properties.Resources.maxresdefault__1_;
            this.ptb1.Location = new System.Drawing.Point(34, 42);
            this.ptb1.Name = "ptb1";
            this.ptb1.Size = new System.Drawing.Size(220, 164);
            this.ptb1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.ptb1.TabIndex = 0;
            this.ptb1.TabStop = false;
            // 
            // cmb1
            // 
            this.cmb1.FormattingEnabled = true;
            this.cmb1.Location = new System.Drawing.Point(332, 12);
            this.cmb1.Name = "cmb1";
            this.cmb1.Size = new System.Drawing.Size(121, 21);
            this.cmb1.TabIndex = 4;
            this.cmb1.SelectedValueChanged += new System.EventHandler(this.cmb1_SelectedValueChanged);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(661, 273);
            this.Controls.Add(this.cmb1);
            this.Controls.Add(this.ptb2);
            this.Controls.Add(this.btnload);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.ptb1);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.ptb2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.ptb1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox ptb1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button btnload;
        private System.Windows.Forms.PictureBox ptb2;
        private System.Windows.Forms.ComboBox cmb1;


    }
}

