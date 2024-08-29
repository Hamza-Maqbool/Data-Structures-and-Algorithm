using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using PMS_FORMS.DL;
using System.Diagnostics;

namespace PMS_FORMS.STAFF_FORMS
{
    public partial class SForm7 : Form
    {
        public SForm7()
        {
            InitializeComponent();
        }
       

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            ProductDL.loadProductData();
            var watch = Stopwatch.StartNew();
            ProductDL.bubbleSortByEmploy();
            watch.Stop();
            SForm8 f = new SForm8();
            f.label1.Text = "Time Taken :" + watch.ElapsedMilliseconds + " ms";
            
            f.Show();
           
        }

        private void button2_Click(object sender, EventArgs e)
        {
            ProductDL.loadProductData();
            var watch = Stopwatch.StartNew();
            ProductDL.selectionSort();
            watch.Stop();
            SForm8 f = new SForm8();
            f.label1.Text = "Time Taken :" + watch.ElapsedMilliseconds + " ms";
            
          
            f.Show();

        }

        private void button3_Click(object sender, EventArgs e)
        {
            ProductDL.loadProductData();
            var watch = Stopwatch.StartNew();
            ProductDL.insertionSort();
            watch.Stop();
            SForm8 f = new SForm8();
            f.label1.Text = "Time Taken :" + watch.ElapsedMilliseconds + " ms";
            
            
            f.Show();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            ProductDL.loadProductData();
            var watch = Stopwatch.StartNew();
            ProductDL.mergeSort(ProductDL.Productlists, 0, ProductDL.Productlists.Count() - 1);
            watch.Stop();
            SForm8 f = new SForm8();
            f.label1.Text = "Time Taken :" + watch.ElapsedMilliseconds + " ms";
            
            
            f.Show();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            ProductDL.loadProductData();
            var watch = Stopwatch.StartNew();
            ProductDL.countingSort();
            SForm8 f = new SForm8();
            watch.Stop();
            f.label1.Text = "Time Taken :" + watch.ElapsedMilliseconds + " ms";
            
            f.Show();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            ProductDL.loadProductData();
            var watch = Stopwatch.StartNew();
            ProductDL.heap_sort();
            watch.Stop();
            SForm8 f = new SForm8();
            f.label1.Text = "Time Taken :" + watch.ElapsedMilliseconds + " ms";
            
            
            f.Show();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            ProductDL.loadProductData();
            int large = -1;
            int place = 1;
            var watch = Stopwatch.StartNew();
            for (int x = 0; x < ProductDL.Productlists.Count(); x++)
            {

                if (ProductDL.Productlists[x].Price > large)
                {

                    large = ProductDL.Productlists[x].Price;
                }
            }
            while (true)
            {
                if ((large / place) > 0)
                {

                    ProductDL.radix_sortbyEMP(place);
                    place = place * 10;

                }
                else
                {
                    break;
                }
            }
            watch.Stop();
            SForm8 f = new SForm8();
            f.label1.Text = "Time Taken :" + watch.ElapsedMilliseconds + " ms";
            
           
            
            f.Show();

        }

        private void button5_Click(object sender, EventArgs e)
        {
            ProductDL.loadProductData();
            var watch = Stopwatch.StartNew();
            ProductDL.quickSort(ProductDL.Productlists,0, ProductDL.Productlists.Count()-1);
            watch.Stop();
            SForm8 f = new SForm8();
            f.label1.Text = "Time Taken :" + watch.ElapsedMilliseconds + " ms";


            f.Show();
        }
    }
}
