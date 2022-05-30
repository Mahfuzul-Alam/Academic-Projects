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
    public partial class adminlogin : Form
    {
        public adminlogin()
        {
            InitializeComponent();
        }

        private void adminlogin_FormClosing(object sender, FormClosingEventArgs e)
        {
            Application.Exit();
        }

        private void adminlogin_Load(object sender, EventArgs e)
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

        private void button1_Click(object sender, EventArgs e)
        {
            Home home= new Home();
            home.Show();
            this.Hide();
        }
    }
    }

