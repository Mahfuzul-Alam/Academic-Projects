using System;
using System.Windows.Forms;
using Travel_Management_System.Data_Access_Layer;

namespace Travel_Management_System.Presentation_Layer
{
    public partial class UserRegistration : Form
    {
        public UserRegistration()
        {
            InitializeComponent();
        }

        private void UserRegistration_FormClosing(object sender, FormClosingEventArgs e)
        {
            Application.Exit();
        }
        private void termsCheckBox_CheckedChanged(object sender, EventArgs e)
        {
            if (termsCheckBox.Checked)
            {
                submitButton.Enabled = true;
            }
            else
            {
                submitButton.Enabled = false;

            }
        }

       
        

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void submitButton_Click_1(object sender, EventArgs e)
        {
            {
                if (nameTextBox.Text == "")
                {
                    MessageBox.Show("Name cannot be empty");
                }
                else if (usernameTextBox.Text == "")
                {
                    MessageBox.Show("Username cannot be empty");
                }
                else if (emailTextBox.Text == "")
                {
                    MessageBox.Show("Email cannot be empty");
                }
                else if (passwordTextBox.Text == "")
                {
                    MessageBox.Show("Password cannot be empty");
                }
                else if (confirmpasswordTextBox.Text == "")
                {
                    MessageBox.Show("Confirm Password cannot be empty");
                }
                else if (dobDatePicker.Value.Date.ToString() == DateTime.Now.Date.ToString())
                {
                    MessageBox.Show("Select proper date of birth");
                }
                else if ((maleRadioButton.Checked == false) && (femaleRadioButton.Checked == false))
                {
                    MessageBox.Show("Select a gender");
                }
                // else if (bloodGroupComboBox.Text == "")
                // {
                // MessageBox.Show("Select a blood group");
                // }
                else
                {
                    if (passwordTextBox.Text != confirmpasswordTextBox.Text)
                    {
                        MessageBox.Show("Password and confirm password does not match");
                    }
                    else
                    {
                        //SqlConnection connection = new SqlConnection(ConfigurationManager.ConnectionStrings["IMS[B]"].ConnectionString);
                        //connection.Open();
                        User user = new User();
                        user.Name = nameTextBox.Text;
                        user.Username = usernameTextBox.Text;
                        user.Email = emailTextBox.Text;
                        user.Password = passwordTextBox.Text;
                        user.DateOfBirth = dobDatePicker.Text;
                        if (maleRadioButton.Checked)
                        {
                            user.Gender = "Male";
                        }
                        else
                        {
                            user.Gender = "Female";
                        }
                        // user.BloodGroup = bloodGroupComboBox.Text;

                        //string sql = "INSERT INTO Users(Name,Username,Email,Password,DateOfBirth,Gender) VALUES('" + user.Name + "','" + user.Username + "','"+user.Email+"','"+user.Password+"','"+user.DateOfBirth+"','"+user.Gender+"')";
                        //SqlCommand sqlCommand = new SqlCommand(sql, connection);
                        //int result = sqlCommand.ExecuteNonQuery();
                        //connection.Close();
                        UserDataAccess userDataAccess = new UserDataAccess();
                        if (userDataAccess.RegisterUser(user.Name, user.Username, user.Email, user.Password, user.DateOfBirth, user.Gender))
                        {
                            MessageBox.Show("User registered successfully");
                            login login = new login();
                            login.Show();
                            this.Hide();
                        }
                        else
                        {
                            MessageBox.Show("Error in user registration");
                        }
                    }
                }
            }
        }

        private void login_Click(object sender, EventArgs e)
        {
            login login = new login();
            login.Show();
            this.Hide();
        }
    }
}
