using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using PMS_FORMS.BL;
using System.IO;
using PMS_FORMS.user_forms;
using System.Windows.Forms;

namespace PMS_FORMS.DL
{
    class ProductDL
    {
        private static List<Product> productlists = new List<Product>();

        static string path1 = "D:\\University Work\\Semester 2\\PMS\\PMS FORMS\\bin\\Debug\\Product_Info.txt";
        static int countsum;
        static int price;
        public static bool isfound;
        internal static List<Product> Productlists { get => productlists; set => productlists = value; }

        public static void addproductintoList(Product newProduct)
        {
            productlists.Add(newProduct);
        }
        public static void deleteproduct()
        {
            productlists.Clear();
        }
        public static void addproductintofile(string pname, int pprice, int pquan)
        {
            StreamWriter file = new StreamWriter(path1, true);
            file.Write(pname);
            file.Write(",");
            file.Write(pprice);
            file.Write(",");
            file.WriteLine(pquan);
            file.Flush();
            file.Close();
        }
        public static int findProduct(string newProduct)
        {
            for (int x = 0; x < Productlists.Count; x++)
            {
                if (newProduct == Productlists[x].Name)
                {
                    return x;
                }
            }
            return -1;
        }
        public static void deleteItem(string newProduct,int quan)
        {
            int idx = findProduct(newProduct);
            if (idx >= 0)
            {
                Productlists[idx].Quantity = Productlists[idx].Quantity - quan;
                if(Productlists[idx].Quantity <= 0)
                {
                    Productlists.RemoveAt(idx);
                }
            }
        }
        public static void PutProductdataintofile()
        {
            StreamWriter file = new StreamWriter(path1, false);
            for (int i = 0; i < Productlists.Count; i++)
            {
                file.Write(Productlists[i].Name);
                file.Write(",");
                file.Write(Productlists[i].Price);
                file.Write(",");
                file.WriteLine(Productlists[i].Quantity);
            }
            file.Flush();
            file.Close();
        }
        public static void loadProductData()
        {
            using (StreamReader file1 = new StreamReader(path1))
            {
                string line;
                if (File.Exists(path1))
                {
                    while ((line = file1.ReadLine()) != null)
                    {
                        string Pname;
                        int price, quantity;
                        Pname = StaffDL.parseData(line, 1);
                        price = int.Parse(StaffDL.parseData(line, 2));
                        quantity = int.Parse(StaffDL.parseData(line, 3));
                        Product productlist = new Product(Pname, price, quantity);
                        Productlists.Add(productlist);

                    }
                    file1.Close();
                }
            }

        }
        public static void ReturnProduct(string name,int quantity)
        {
           
             isfound = false;
            int increase;
            price = 0;
            
            for (int i = 0; i < Productlists.Count; i++)
            {
               
                if (name == Productlists[i].Name)
                {
                    isfound = true;
                    increase = Productlists[i].Quantity + quantity;
                    Productlists[i].Quantity = increase;
                    price = quantity * Productlists[i].Price;
                    UForm4 f = new UForm4();
                    f.textBox1.Text = price.ToString();
                    f.Show();
                   
                }
            }
            
        }
        public static bool EditProductFromList(string Productname)
        {
            int idx = findProduct(Productname);
            if (Productlists[idx].Name == Productlists[idx].Name)
            {
                return true;
            }
            return false;

        }
        public static void buytheProduct(Product newProduct , int qu)
        {
            int decrese;
            int price, j = 0;
           
            for (int index = 0; index < Productlists.Count; index++)
            {
                if (Productlists[index].Name == newProduct.Name && Productlists[index].Price == newProduct.Price)
                {
                    if (Productlists[j].Quantity >= qu)
                    {
                        decrese = Productlists[index].Quantity - qu;
                        Productlists[index].Quantity = decrese;
                        price = qu * productlists[index].Price;
                        countsum = countsum + price;
                        
                    }
                }
            } 
           
        }
        public static int generateBill()
        {
            return countsum;
        }
        public static void bubbleSortByEmploy()
        {
            int n = productlists.Count();
            for (int x = 0; x < n - 1; x++)
            {
                bool isSwapped = false;
                for (int y = 0; y < n - x - 1; y++)
                {
                    if (productlists[y].Price > productlists[y + 1].Price)
                    {
                        swap(y,y + 1);
                        isSwapped = true;
                    }
                }
                if (!isSwapped)
                {
                    break;
                }
            }
        }
        
        public static void selectionSort()
        {
            int n = productlists.Count();
            for (int x = 0; x < n - 1; x++)
            {
                int minIndex = findMinimumByIndex(productlists, x, n);
                swap( x,minIndex);
            }
        }
        public static void swap(int x,int y)
        {
            Product p = new Product();
            p = Productlists[x];
            Productlists[x] = Productlists[y];
            Productlists[y] = p;

           
        }
        public static int findMinimumByIndex(List<Product> arr, int start, int end)
        {
            int min = arr[start].Price;
            int minIndex = start;
            for (int x = start; x < end; x++)
            {
                if (min > arr[x].Price)
                {
                    min = arr[x].Price;
                    minIndex = x;
                }
            }
            return minIndex;
        }
        public static void insertionSort()
        {
            int n = productlists.Count();
            for (int x = 1; x < n; x++)
            {
                int key = productlists[x].Price;
                int y = x - 1;
                while (y >= 0 && productlists[y].Price > key)
                {
                    productlists[y + 1].Price = productlists[y].Price;
                    y--;
                }
                productlists[y + 1].Price = key;
            }
        }
        public static void mergeSort(List<Product> customerListss, int start, int end)
        {

            if (start < end)
            {
                int mid = (start + end) / 2;
                mergeSort(customerListss, start, mid);
                mergeSort(customerListss, mid + 1, end);
                merge(customerListss, start, mid, end);
            }
        }
        public static void merge(List<Product> arr, int start, int mid, int end)
        {
            int i = start;
            int j = mid + 1;
            Queue<Product> tempArr = new Queue<Product>();
            while (i <= mid && j <= end)
            {
                if (arr[i].Price < arr[j].Price)
                {
                    tempArr.Enqueue(arr[i]);
                    i++;
                }
                else
                {
                    tempArr.Enqueue(arr[j]);
                    j++;
                }
            }
            while (i <= mid)
            {
                tempArr.Enqueue(arr[i]);
                i++;
            }
            while (j <= end)
            {
                tempArr.Enqueue(arr[j]);
                j++;
            }
            for (int x = start; x <= end; x++)
            {
                arr[x] = tempArr.Peek();
                tempArr.Dequeue();
            }
        }
        public static void count_sort()
        {

            int large = -1;
            int count1 = 0;
            int temp = Productlists.Count();
            int index = 0;
            int z;
            List<Product> output = new List<Product>();
            for (int x = 0; x < Productlists.Count(); x++)
            {
                if (Productlists[x].Price > large)
                {
                    large = Productlists[x].Price;
                }
            }

            int[] count = new int[large+1];
            int sum = 0;
            for (int x = 0; x < Productlists.Count(); x++)
            {
                for (int y = 0; y < Productlists.Count(); y++)
                {
                    if (Productlists[x].Price == Productlists[y].Price)
                    {
                        count1 = count1 + 1;
                        
                        
                        count[(Productlists[x].Price)] = count1;
                    }
                }
                count1 = 0;
            }
            for (int y = 1; y < count.Count(); y++)
            {
                count[y] = count[y] + count[y - 1];
            }
            for (int x = Productlists.Count() - 1; x > -1; x--)
            {
                index = count[Productlists[x].Price] - 1;
                count[Productlists[x].Price]--;
                output[index] = Productlists[x];
            }
            for (int x = 0; x < output.Count(); x++)
            {
                Productlists[x] = output[x];
            }
        }
        public static void countingSort()
        {
            List<Product> output = new List<Product>();
            for (int i = 0; i < Productlists.Count; i++)
            {
                Product o = null;
                output.Add(o);
            }
            int max = Productlists.Max(t => t.Price);
            List<int> count = new List<int>(max + 1);
            for (int x = 0; x < max + 1; x++)
            {
                int temp = 0;
                count.Add(temp);
            }
            for (int x = 0; x < Productlists.Count; x++)
            {
                count[Productlists[x].Price]++;
            }
            for (int x = 1; x < count.Count; x++)
            {
                count[x] = count[x - 1] + count[x];
            }
            for (int x = Productlists.Count - 1; x >= 0; x--)
            {
                int index = count[Productlists[x].Price] - 1;
                count[Productlists[x].Price]--;
                output[index] = Productlists[x];
            }
            for (int x = 0; x < output.Count; x++)
            {
                Productlists[x] = output[x];
            }
        }
        public static int parentIndex(int i)
        {
            return (i - 1) / 2;
        }
        public static int leftChildIndex(int i)
        {
            return (2 * i) + 1;
        }
        public static int rightChildIndex(int i)
        {
            return (2 * i) + 2;
        }
       /* public static void swap2(ref Product x, ref Product y)
        {
            Product p = new Product();
            p = x;
            x = y;
            y = p;


        }*/
       public static void heap_sort()
        {

            for (int x = (Productlists.Count()) / 2 - 1; x >= 0; x--)
            {

                heapifyByIndex(Productlists.Count(), x);
            }
            for (int x = Productlists.Count() - 1; x > 0; x--)
            {

                swap(0, x);
                heapifyByIndex(x, 0);
            }
        }

        public static void heapifyByIndex(int size, int index)
        {

            int maxindex;
            while (true)
            {
                int leftindex = leftChildIndex(index);
                int rightindex = rightChildIndex(index);
                if (rightindex >= size)
                {

                    if (leftindex >= size)
                    {
                        return;
                    }
                    else
                    {
                        maxindex = leftindex;
                    }
                }

                else
                {
                    if (Productlists[leftindex].Price >= Productlists[rightindex].Price)
                    {
                        maxindex = leftindex;
                    }
                    else
                    {
                        maxindex = rightindex;
                    }
                }
                if (Productlists[index].Price < Productlists[maxindex].Price)
                {
                    swap(index, maxindex);
                    index = maxindex;
                }
                else
                {
                    return;
                }
            }

        }
        public static void bucketSortByEMP()
        {
            List<List<float>> bucket = new List<List<float>>(productlists.Count());
            for (int x = 0; x < Productlists.Count(); x++)
            {
               // bucket[int(Productlists[x].Price * Productlists.Count())].push_back(Productlists[x]);
            }
            for (int i = 0; i < bucket.Count(); i++)
            {
                  bucket[i].Sort((x, y) => x.CompareTo(y));
            }
            int index = 0;
            for (int x = 0; x < bucket.Count(); x++)
            {
                for (int y = 0; y < bucket[x].Count(); y++)
                {
                    Productlists[index].Price =// bucket[x][y];
                    index++;
                }
            }
        }
        public static void radix_sortbyEMP(int place)
        {

            int count1 = 0;
            int index = 0;
            int temp = productlists.Count();
            int[] count2 = new int[10];
            List<Product> output = new List<Product>();
            for (int i = 0; i < Productlists.Count; i++)
            {
                Product o = null;
                output.Add(o);
            }

            for (int x = 0; x < productlists.Count(); x++)
            {

                for (int y = 0; y < productlists.Count(); y++)
                {

                    if ((productlists[x].Price / place) % 10 == (productlists[y].Price / place) % 10)
                    {

                        count1 = count1 + 1;
                        count2[(Productlists[x].Price / place) % 10] = count1;
                    }
                }
                count1 = 0;
            }
            for (int y = 1; y < count2.Count(); y++)
            {

                count2[y] = count2[y] + count2[y - 1];

            }
            for (int x = productlists.Count() - 1; x > -1; x--)
            {

                index = count2[(productlists[x].Price / place) % 10] - 1;
                count2[(productlists[x].Price / place) % 10]--;
                output[index] = productlists[x];
            }
            for (int x = 0; x < output.Count(); x++)
            {
                productlists[x] = output[x];
            }

        }
        public static int partition(List<Product> arr,int start, int end, int pivot)
        {
            int left = start;
            int right = end;
            while (left <= right)
            {
                while ( left <= end && arr[left].Price < arr[pivot].Price )
                    left++;
                while (right >= start && arr[right].Price >= arr[pivot].Price )
                    right--;
                if (left < right)
                {
                    Product temp = arr[left];
                    arr[left] = arr[right];
                    arr[right] = temp;
                }
            }
            Product tem = arr[right];
            arr[right] = arr[pivot];
            arr[pivot] = tem;
            return right;
        }
        public static void quickSort( List<Product> arr, int start, int end)
        {
            if (start < end)
            {
                int pivot = start;
                int mid = partition(arr, start + 1, end, pivot);
                quickSort(arr, start, mid - 1);
                quickSort(arr, mid + 1, end);
            }
        }
    }
}
