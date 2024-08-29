using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using PMS_FORMS.BL;
using PMS_FORMS.DL;

namespace PMS_FORMS.STAFF_FORMS
{
    public partial class SForm8 : Form
    {
        public SForm8()
        {
            InitializeComponent();
        }
        public void dataBind()
        {
            dataGridView1.DataSource = null;
            dataGridView1.DataSource = ProductDL.Productlists;
            dataGridView1.Refresh();
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void tableLayoutPanel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void dataGridView1_CellContentClick_1(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {

            dataGridView1.DataSource = ProductDL.Productlists;
            dataBind();
            ProductDL.deleteproduct();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
