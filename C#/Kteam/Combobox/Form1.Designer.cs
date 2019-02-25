namespace Combobox
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
            this.cmb1 = new System.Windows.Forms.ComboBox();
            this.btnxuli = new System.Windows.Forms.Button();
            this.txtprice = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // cmb1
            // 
            this.cmb1.AutoCompleteMode = System.Windows.Forms.AutoCompleteMode.SuggestAppend;
            this.cmb1.AutoCompleteSource = System.Windows.Forms.AutoCompleteSource.ListItems;
            this.cmb1.CausesValidation = false;
            this.cmb1.FormattingEnabled = true;
            this.cmb1.Location = new System.Drawing.Point(36, 106);
            this.cmb1.Name = "cmb1";
            this.cmb1.Size = new System.Drawing.Size(121, 21);
            this.cmb1.TabIndex = 0;
            this.cmb1.SelectedValueChanged += new System.EventHandler(this.cmb1_SelectedValueChanged);
            // 
            // btnxuli
            // 
            this.btnxuli.Location = new System.Drawing.Point(169, 12);
            this.btnxuli.Name = "btnxuli";
            this.btnxuli.Size = new System.Drawing.Size(75, 23);
            this.btnxuli.TabIndex = 1;
            this.btnxuli.Text = "Xác nhận";
            this.btnxuli.UseVisualStyleBackColor = true;
            this.btnxuli.Click += new System.EventHandler(this.btnxuli_Click);
            // 
            // txtprice
            // 
            this.txtprice.Location = new System.Drawing.Point(248, 106);
            this.txtprice.Name = "txtprice";
            this.txtprice.Size = new System.Drawing.Size(100, 20);
            this.txtprice.TabIndex = 2;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(504, 318);
            this.Controls.Add(this.txtprice);
            this.Controls.Add(this.btnxuli);
            this.Controls.Add(this.cmb1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ComboBox cmb1;
        private System.Windows.Forms.Button btnxuli;
        private System.Windows.Forms.TextBox txtprice;
    }
}

