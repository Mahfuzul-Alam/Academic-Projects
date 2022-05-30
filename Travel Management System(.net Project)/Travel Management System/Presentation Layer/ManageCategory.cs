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
    public partial class ManageCategory : Form
    {
        public ManageCategory()
        {
            InitializeComponent();
        }

        private void ManageCategory_FormClosing(object sender, FormClosingEventArgs e)
        {
            Application.Exit();
        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        private void ManageCategory_Load(object sender, EventArgs e)
        {
            CategoryDataAccess categoryDataAccess = new CategoryDataAccess();
           // categorylistDataGridView.DataSource = categoryDataAccess.GetAllCategories ();
        }

        private void categorylistDataGridView_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void destinationButton_Click(object sender, EventArgs e)
        {
            destinations destinations = new destinations();
            destinations.Show();
            this.Hide();
        }

        private void transportButton_Click(object sender, EventArgs e)
        {
            transports transports = new transports();
            transports.Show();
            this.Hide();
        }

        private void back_Click(object sender, EventArgs e)
        {
            login login = new login();
            login.Show();
            this.Hide();
        }

        private void bookingsButton_Click(object sender, EventArgs e)
        {
            bookings bookings = new bookings();
                bookings.Show();
            this.Hide();
        }
    }
}
