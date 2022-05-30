
namespace Travel_Management_System.Presentation_Layer
{
    partial class login
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
            this.userloginGroupBox = new System.Windows.Forms.GroupBox();
            this.userRegistrationLinkLabel = new System.Windows.Forms.LinkLabel();
            this.loginButton = new System.Windows.Forms.Button();
            this.passwordTextBox = new System.Windows.Forms.TextBox();
            this.password = new System.Windows.Forms.Label();
            this.usernameTextBox = new System.Windows.Forms.TextBox();
            this.username = new System.Windows.Forms.Label();
            this.back = new System.Windows.Forms.Button();
            this.userloginGroupBox.SuspendLayout();
            this.SuspendLayout();
            // 
            // userloginGroupBox
            // 
            this.userloginGroupBox.Controls.Add(this.userRegistrationLinkLabel);
            this.userloginGroupBox.Controls.Add(this.loginButton);
            this.userloginGroupBox.Controls.Add(this.passwordTextBox);
            this.userloginGroupBox.Controls.Add(this.password);
            this.userloginGroupBox.Controls.Add(this.usernameTextBox);
            this.userloginGroupBox.Controls.Add(this.username);
            this.userloginGroupBox.Font = new System.Drawing.Font("Mongolian Baiti", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.userloginGroupBox.Location = new System.Drawing.Point(120, 42);
            this.userloginGroupBox.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.userloginGroupBox.Name = "userloginGroupBox";
            this.userloginGroupBox.Padding = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.userloginGroupBox.Size = new System.Drawing.Size(560, 366);
            this.userloginGroupBox.TabIndex = 1;
            this.userloginGroupBox.TabStop = false;
            this.userloginGroupBox.Text = "Manager Login";
            this.userloginGroupBox.Enter += new System.EventHandler(this.groupBox_Enter);
            // 
            // userRegistrationLinkLabel
            // 
            this.userRegistrationLinkLabel.AutoSize = true;
            this.userRegistrationLinkLabel.Location = new System.Drawing.Point(217, 308);
            this.userRegistrationLinkLabel.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.userRegistrationLinkLabel.Name = "userRegistrationLinkLabel";
            this.userRegistrationLinkLabel.Size = new System.Drawing.Size(306, 34);
            this.userRegistrationLinkLabel.TabIndex = 5;
            this.userRegistrationLinkLabel.TabStop = true;
            this.userRegistrationLinkLabel.Text = "Click here to register";
            this.userRegistrationLinkLabel.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.userRegistrationLinkLabel_LinkClicked);
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
            this.loginButton.Click += new System.EventHandler(this.loginButton_Click);
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
            // back
            // 
            this.back.Location = new System.Drawing.Point(13, 405);
            this.back.Name = "back";
            this.back.Size = new System.Drawing.Size(100, 43);
            this.back.TabIndex = 2;
            this.back.Text = "Back";
            this.back.UseVisualStyleBackColor = true;
            this.back.Click += new System.EventHandler(this.back_Click);
            // 
            // login
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 475);
            this.Controls.Add(this.back);
            this.Controls.Add(this.userloginGroupBox);
            this.Name = "login";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Login";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.login_FormClosing);
            this.Load += new System.EventHandler(this.login_Load);
            this.userloginGroupBox.ResumeLayout(false);
            this.userloginGroupBox.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox userloginGroupBox;
        private System.Windows.Forms.LinkLabel userRegistrationLinkLabel;
        private System.Windows.Forms.Button loginButton;
        private System.Windows.Forms.TextBox passwordTextBox;
        private System.Windows.Forms.Label password;
        private System.Windows.Forms.TextBox usernameTextBox;
        private System.Windows.Forms.Label username;
        private System.Windows.Forms.Button back;
    }
}