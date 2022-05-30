using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Travel_Management_System.Presentation_Layer
{
    public partial class transports : Form
    {
        public transports()
        {
            InitializeComponent();
        }

        private void Transports_FormClosing(object sender, FormClosingEventArgs e)
        {
            Application.Exit();
        }

        private void backButton_Click(object sender, EventArgs e)
        {
            ManageCategory manageCategory = new ManageCategory();
            manageCategory.Show();
            this.Hide();
        }

        private void busRadioButton_CheckedChanged(object sender, EventArgs e)
        {
           
            
        }

        private void busPictureBox_Click(object sender, EventArgs e)
        {

        }
    }
}
