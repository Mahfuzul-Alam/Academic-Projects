
namespace Travel_Management_System.Presentation_Layer
{
    partial class Home
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Home));
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.manager = new System.Windows.Forms.Button();
            this.admin = new System.Windows.Forms.Button();
            this.tms = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(-5, 1);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(804, 453);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            // 
            // manager
            // 
            this.manager.Location = new System.Drawing.Point(188, 266);
            this.manager.Name = "manager";
            this.manager.Size = new System.Drawing.Size(161, 69);
            this.manager.TabIndex = 1;
            this.manager.Text = "Login As Manager";
            this.manager.UseVisualStyleBackColor = true;
            this.manager.Click += new System.EventHandler(this.manager_Click);
            // 
            // admin
            // 
            this.admin.Location = new System.Drawing.Point(458, 266);
            this.admin.Name = "admin";
            this.admin.Size = new System.Drawing.Size(161, 69);
            this.admin.TabIndex = 2;
            this.admin.Text = "Login As Admin";
            this.admin.UseVisualStyleBackColor = true;
            this.admin.Click += new System.EventHandler(this.admin_Click);
            // 
            // tms
            // 
            this.tms.AutoSize = true;
            this.tms.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.tms.Location = new System.Drawing.Point(181, 70);
            this.tms.Name = "tms";
            this.tms.Size = new System.Drawing.Size(438, 37);
            this.tms.TabIndex = 3;
            this.tms.Text = "Travel Management System";
            // 
            // Home
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.tms);
            this.Controls.Add(this.admin);
            this.Controls.Add(this.manager);
            this.Controls.Add(this.pictureBox1);
            this.Name = "Home";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Home";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Home_FormClosing);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button manager;
        private System.Windows.Forms.Button admin;
        private System.Windows.Forms.Label tms;
    }
}