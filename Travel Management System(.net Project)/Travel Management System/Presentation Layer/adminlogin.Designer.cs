
namespace Travel_Management_System.Presentation_Layer
{
    partial class adminlogin
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
            this.adminloginGroupBox = new System.Windows.Forms.GroupBox();
            this.loginButton = new System.Windows.Forms.Button();
            this.passwordTextBox = new System.Windows.Forms.TextBox();
            this.password = new System.Windows.Forms.Label();
            this.usernameTextBox = new System.Windows.Forms.TextBox();
            this.username = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.adminloginGroupBox.SuspendLayout();
            this.SuspendLayout();
            // 
            // adminloginGroupBox
            // 
            this.adminloginGroupBox.Controls.Add(this.loginButton);
            this.adminloginGroupBox.Controls.Add(this.passwordTextBox);
            this.adminloginGroupBox.Controls.Add(this.password);
            this.adminloginGroupBox.Controls.Add(this.usernameTextBox);
            this.adminloginGroupBox.Controls.Add(this.username);
            this.adminloginGroupBox.Font = new System.Drawing.Font("Mongolian Baiti", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.adminloginGroupBox.Location = new System.Drawing.Point(120, 42);
            this.adminloginGroupBox.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.adminloginGroupBox.Name = "adminloginGroupBox";
            this.adminloginGroupBox.Padding = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.adminloginGroupBox.Size = new System.Drawing.Size(560, 366);
            this.adminloginGroupBox.TabIndex = 2;
            this.adminloginGroupBox.TabStop = false;
            this.adminloginGroupBox.Text = "Admin Login";
            // 
            // loginButton
            // 
            this.loginButton.Location = new System.Drawing.Point(237, 189);
            this.loginButton.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.loginButton.Name = "loginButton";
            this.loginButton.Size = new System.Drawing.Size(288, 52);
            this.loginButton.TabIndex = 4;
            this.loginButton.Text = "Login";
            this.loginButton.UseVisualStyleBackColor = true;
            // 
            // passwordTextBox
            // 
            this.passwordTextBox.Location = new System.Drawing.Point(237, 131);
            this.passwordTextBox.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.passwordTextBox.Name = "passwordTextBox";
            this.passwordTextBox.PasswordChar = '*';
            this.passwordTextBox.Size = new System.Drawing.Size(286, 44);
            this.passwordTextBox.TabIndex = 3;
            // 
            // password
            // 
            this.password.AutoSize = true;
            this.password.Location = new System.Drawing.Point(56, 135);
            this.password.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.password.Name = "password";
            this.password.Size = new System.Drawing.Size(145, 34);
            this.password.TabIndex = 2;
            this.password.Text = "Password";
            // 
            // usernameTextBox
            // 
            this.usernameTextBox.Location = new System.Drawing.Point(237, 72);
            this.usernameTextBox.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.usernameTextBox.Name = "usernameTextBox";
            this.usernameTextBox.Size = new System.Drawing.Size(286, 44);
            this.usernameTextBox.TabIndex = 1;
            // 
            // username
            // 
            this.username.AutoSize = true;
            this.username.Location = new System.Drawing.Point(56, 77);
            this.username.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.username.Name = "username";
            this.username.Size = new System.Drawing.Size(152, 34);
            this.username.TabIndex = 0;
            this.username.Text = "Username";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(2, 415);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(85, 35);
            this.button1.TabIndex = 3;
            this.button1.Text = "Back";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // adminlogin
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.adminloginGroupBox);
            this.Name = "adminlogin";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Adminlogin";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.adminlogin_FormClosing);
            this.Load += new System.EventHandler(this.adminlogin_Load);
            this.adminloginGroupBox.ResumeLayout(false);
            this.adminloginGroupBox.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox adminloginGroupBox;
        private System.Windows.Forms.Button loginButton;
        private System.Windows.Forms.TextBox passwordTextBox;
        private System.Windows.Forms.Label password;
        private System.Windows.Forms.TextBox usernameTextBox;
        private System.Windows.Forms.Label username;
        private System.Windows.Forms.Button button1;
    }
}