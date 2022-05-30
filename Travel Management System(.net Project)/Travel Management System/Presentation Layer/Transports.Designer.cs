
namespace Travel_Management_System.Presentation_Layer
{
    partial class transports
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(transports));
            this.busRadioButton = new System.Windows.Forms.RadioButton();
            this.acbusRadioButton = new System.Windows.Forms.RadioButton();
            this.busPictureBox = new System.Windows.Forms.PictureBox();
            this.acbusPictureBox = new System.Windows.Forms.PictureBox();
            this.backButton = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.busPictureBox)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.acbusPictureBox)).BeginInit();
            this.SuspendLayout();
            // 
            // busRadioButton
            // 
            this.busRadioButton.AutoSize = true;
            this.busRadioButton.Location = new System.Drawing.Point(56, 95);
            this.busRadioButton.Name = "busRadioButton";
            this.busRadioButton.Size = new System.Drawing.Size(62, 24);
            this.busRadioButton.TabIndex = 0;
            this.busRadioButton.TabStop = true;
            this.busRadioButton.Text = "Bus";
            this.busRadioButton.UseVisualStyleBackColor = true;
            this.busRadioButton.CheckedChanged += new System.EventHandler(this.busRadioButton_CheckedChanged);
            // 
            // acbusRadioButton
            // 
            this.acbusRadioButton.AutoSize = true;
            this.acbusRadioButton.Location = new System.Drawing.Point(56, 313);
            this.acbusRadioButton.Name = "acbusRadioButton";
            this.acbusRadioButton.Size = new System.Drawing.Size(88, 24);
            this.acbusRadioButton.TabIndex = 1;
            this.acbusRadioButton.TabStop = true;
            this.acbusRadioButton.Text = "AC Bus";
            this.acbusRadioButton.UseVisualStyleBackColor = true;
            // 
            // busPictureBox
            // 
            this.busPictureBox.Image = ((System.Drawing.Image)(resources.GetObject("busPictureBox.Image")));
            this.busPictureBox.Location = new System.Drawing.Point(317, 69);
            this.busPictureBox.Name = "busPictureBox";
            this.busPictureBox.Size = new System.Drawing.Size(404, 117);
            this.busPictureBox.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.busPictureBox.TabIndex = 2;
            this.busPictureBox.TabStop = false;
            this.busPictureBox.Click += new System.EventHandler(this.busPictureBox_Click);
            // 
            // acbusPictureBox
            // 
            this.acbusPictureBox.Image = ((System.Drawing.Image)(resources.GetObject("acbusPictureBox.Image")));
            this.acbusPictureBox.Location = new System.Drawing.Point(317, 249);
            this.acbusPictureBox.Name = "acbusPictureBox";
            this.acbusPictureBox.Size = new System.Drawing.Size(404, 136);
            this.acbusPictureBox.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.acbusPictureBox.TabIndex = 3;
            this.acbusPictureBox.TabStop = false;
            // 
            // backButton
            // 
            this.backButton.Location = new System.Drawing.Point(13, 405);
            this.backButton.Name = "backButton";
            this.backButton.Size = new System.Drawing.Size(78, 33);
            this.backButton.TabIndex = 4;
            this.backButton.Text = "Back";
            this.backButton.UseVisualStyleBackColor = true;
            this.backButton.Click += new System.EventHandler(this.backButton_Click);
            // 
            // transports
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.backButton);
            this.Controls.Add(this.acbusPictureBox);
            this.Controls.Add(this.busPictureBox);
            this.Controls.Add(this.acbusRadioButton);
            this.Controls.Add(this.busRadioButton);
            this.Name = "transports";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Transports";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Transports_FormClosing);
            ((System.ComponentModel.ISupportInitialize)(this.busPictureBox)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.acbusPictureBox)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.RadioButton busRadioButton;
        private System.Windows.Forms.RadioButton acbusRadioButton;
        private System.Windows.Forms.PictureBox busPictureBox;
        private System.Windows.Forms.PictureBox acbusPictureBox;
        private System.Windows.Forms.Button backButton;
    }
}