
namespace Travel_Management_System.Presentation_Layer
{
    partial class ManageCategory
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(ManageCategory));
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.destinationButton = new System.Windows.Forms.Button();
            this.transportButton = new System.Windows.Forms.Button();
            this.bookingsButton = new System.Windows.Forms.Button();
            this.back = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // pictureBox1
            // 
            this.pictureBox1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(0, 0);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(892, 509);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // destinationButton
            // 
            this.destinationButton.Location = new System.Drawing.Point(307, 166);
            this.destinationButton.Name = "destinationButton";
            this.destinationButton.Size = new System.Drawing.Size(215, 51);
            this.destinationButton.TabIndex = 1;
            this.destinationButton.Text = "Destination";
            this.destinationButton.UseVisualStyleBackColor = true;
            this.destinationButton.Click += new System.EventHandler(this.destinationButton_Click);
            // 
            // transportButton
            // 
            this.transportButton.Location = new System.Drawing.Point(307, 247);
            this.transportButton.Name = "transportButton";
            this.transportButton.Size = new System.Drawing.Size(215, 51);
            this.transportButton.TabIndex = 2;
            this.transportButton.Text = "Transport";
            this.transportButton.UseVisualStyleBackColor = true;
            this.transportButton.Click += new System.EventHandler(this.transportButton_Click);
            // 
            // bookingsButton
            // 
            this.bookingsButton.Location = new System.Drawing.Point(307, 348);
            this.bookingsButton.Name = "bookingsButton";
            this.bookingsButton.Size = new System.Drawing.Size(215, 51);
            this.bookingsButton.TabIndex = 3;
            this.bookingsButton.Text = "Bookings";
            this.bookingsButton.UseVisualStyleBackColor = true;
            this.bookingsButton.Click += new System.EventHandler(this.bookingsButton_Click);
            // 
            // back
            // 
            this.back.Location = new System.Drawing.Point(13, 463);
            this.back.Name = "back";
            this.back.Size = new System.Drawing.Size(83, 34);
            this.back.TabIndex = 4;
            this.back.Text = "Back";
            this.back.UseVisualStyleBackColor = true;
            this.back.Click += new System.EventHandler(this.back_Click);
            // 
            // ManageCategory
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(892, 509);
            this.Controls.Add(this.back);
            this.Controls.Add(this.bookingsButton);
            this.Controls.Add(this.transportButton);
            this.Controls.Add(this.destinationButton);
            this.Controls.Add(this.pictureBox1);
            this.Name = "ManageCategory";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Category Management";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.ManageCategory_FormClosing);
            this.Load += new System.EventHandler(this.ManageCategory_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button destinationButton;
        private System.Windows.Forms.Button transportButton;
        private System.Windows.Forms.Button bookingsButton;
        private System.Windows.Forms.Button back;
    }
}