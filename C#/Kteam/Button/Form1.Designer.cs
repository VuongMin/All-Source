namespace Button
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
            this.bntchao = new System.Windows.Forms.Button();
            this.lblketqua = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // bntchao
            // 
            this.bntchao.Location = new System.Drawing.Point(92, 96);
            this.bntchao.Name = "bntchao";
            this.bntchao.Size = new System.Drawing.Size(75, 23);
            this.bntchao.TabIndex = 0;
            this.bntchao.Text = "Lời chào!";
            this.bntchao.UseVisualStyleBackColor = true;
            // 
            // lblketqua
            // 
            this.lblketqua.AutoSize = true;
            this.lblketqua.Location = new System.Drawing.Point(92, 192);
            this.lblketqua.Name = "lblketqua";
            this.lblketqua.Size = new System.Drawing.Size(35, 13);
            this.lblketqua.TabIndex = 1;
            this.lblketqua.Text = "label1";
            this.lblketqua.Click += new System.EventHandler(this.label1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 262);
            this.Controls.Add(this.lblketqua);
            this.Controls.Add(this.bntchao);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button bntchao;
        private System.Windows.Forms.Label lblketqua;
    }
}

