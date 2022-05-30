using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Travel_Management_System.Data_Access_Layer;

namespace Travel_Management_System.Presentation_Layer
{
    public partial class login : Form
    {
        public login()
        {
            InitializeComponent();
        }

        private void login_FormClosing(object sender, FormClosingEventArgs e)
        {
            Application.Exit();
        }

        private void loginButton_Click(object sender, EventArgs e)
        {
            UserDataAccess userDataAccess = new UserDataAccess();
            if (usernameTextBox.Text == "")
            {
                MessageBox.Show("Username cannot be empty");
            }
            else if (passwordTextBox.Text == "")
            {
                MessageBox.Show("Password cannot be empty");
            }
            else
            {
                if (userDataAccess.LoginValidation(usernameTextBox.Text, passwordTextBox.Text) == true)
                {
                    ManageCategory manageCategory = new ManageCategory();
                    manageCategory.Show();
                    this.Hide();
                }
                else

                {
                    MessageBox.Show("Invalid Username or Password");
                }
            }

        }

        private void groupBox_Enter(object sender, EventArgs e)
        {

        }

       

        private void userRegistrationLinkLabel_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            UserRegistration userRegistration = new UserRegistration();
            userRegistration.Show();
            this.Hide();
        }

        private void login_Load(object sender, EventArgs e)
        {

        }

        private void back_Click(object sender, EventArgs e)
        {
            Home home = new Home();
            home.Show();
            this.Hide();
        }
    }
}
