#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <sstream>
#include "CustomerBL.h"
using namespace std;
class CustomerDL
{
public:
    CustomerDL() {

    }
	 vector<CustomerBL> customerList;
     string parse(string line, int value)
     {
         const char quote = '"';
         int l = line.length();
         string parse = "";
         int count = 1, qcount = 0;
         for (int i = 0; i < l; i++)
         {
             if (line[i] == ',')
             {
                 if (qcount % 2 == 0)
                     count++;
                 if (line[i + 1] == quote && count == value) {
                     i += 2;
                     while (line[i] != quote) {
                         parse = parse + line[i];
                         i++;
                     }
                     return parse;
                 }
             }
             else if (count == value)
             {
                 parse = parse + line[i];
             }
             if (line[i] == quote) {
                 qcount++;
             }
         }
         return parse;
     }
    
      bool readFromFile(string path) {
         string line, word, temp, temp2;
         int index;
         string id;
         string name;
         string website;
         string country;
         string description;
         string founded;
         string industry;
         int noOfEmployees;

         stringstream ss;
         ifstream fin;
         fin.open(path);
         getline(fin, line);
         while (fin.good())
         {
             getline(fin, line);
             if (!line.empty())
             {
                 index = stoi(parse(line, 1));
                 id = parse(line, 2);
                 name = parse(line, 3);
                 website = parse(line, 4);
                 country = parse(line, 5);
                 description = parse(line, 6);
                 founded = parse(line, 7);
                 industry = parse(line, 8);
                 noOfEmployees = stoi(parse(line, 9));

                 CustomerBL customer(name,index, country,id, description, founded, industry,website, noOfEmployees);
                 customerList.push_back(customer);
             }
             else {
                 fin.close();
             }
         }
         return true;
     }
      void bubbleSortByEmploy()
      {
          int n = customerList.size();
          for (int x = 0; x < n - 1; x++)
          {
              bool isSwapped = false;
              for (int y = 0; y < n - x - 1; y++)
              {
                  if (customerList[y].no_of_employ > customerList[y + 1].no_of_employ)
                  {
                      swap(customerList[y].no_of_employ, customerList[y + 1].no_of_employ);
                      isSwapped = true;
                  }
              }
              if (!isSwapped)
              {
                  break;
              }
          }
      }
      void bubbleSortByIndex()
      {
          int n = customerList.size();
          for (int x = 0; x < n - 1; x++)
          {
              bool isSwapped = false;
              for (int y = 0; y < n - x - 1; y++)
              {
                  if (customerList[y].index > customerList[y + 1].index)
                  {
                      swap(customerList[y].index, customerList[y + 1].index);
                      isSwapped = true;
                  }
              }
              if (!isSwapped)
              {
                  break;
              }
          }
      }
      void printArray() {
          for (int i = 0;i < customerList.size();i++) {
              cout << customerList[i].index<<" ";
              cout << customerList[i].organization << " ";
              cout << customerList[i].name << " ";
              cout << customerList[i].website << " ";
              cout << customerList[i].country << " ";
              cout << customerList[i].description << " ";
              cout << customerList[i].founded << " ";
              cout << customerList[i].industry << " ";
              cout << customerList[i].no_of_employ << ","<<endl;
          }
      }
       void clear() {
          CustomerDL::customerList.clear();
       }
       void selectionSortByEmploy() {
           int n = customerList.size();
           for (int x = 0; x < n - 1; x++)
           {
               int minIndex = findMinimumByEmploy(customerList, x, n);
               swap(customerList[x].no_of_employ, customerList[minIndex].no_of_employ);
           }
       }
       int findMinimumByEmploy(vector<CustomerBL> arr, int start, int end)
       {
           int min = arr[start].no_of_employ;
           int minIndex = start;
           for (int x = start; x < end; x++)
           {
               if (min > arr[x].no_of_employ)
               {
                   min = arr[x].no_of_employ;
                   minIndex = x;
               }
           }
           return minIndex;
       }
       void selectionSortByIndex() {
           int n = customerList.size();
           for (int x = 0; x < n - 1; x++)
           {
               int minIndex = findMinimumByIndex(customerList, x, n);
               swap(customerList[x].index, customerList[minIndex].index);
           }
       }
       int findMinimumByIndex(vector<CustomerBL> arr, int start, int end)
       {
           int min = arr[start].index;
           int minIndex = start;
           for (int x = start; x < end; x++)
           {
               if (min > arr[x].index)
               {
                   min = arr[x].index;
                   minIndex = x;
               }
           }
           return minIndex;
       }
       void insertionSortByEmploy()
       {
           int n = customerList.size();
           for (int x = 1; x < n; x++)
           {
               int key = customerList[x].no_of_employ;
               int y = x - 1;
               while (y >= 0 && customerList[y].no_of_employ > key)
               {
                   customerList[y + 1].no_of_employ = customerList[y].no_of_employ;
                   y--;
               }
               customerList[y + 1].no_of_employ = key;
           }
       }
       void insertionSortByIndex()
       {
           int n = customerList.size();
           for (int x = 1; x < n; x++)
           {
               int key = customerList[x].index;
               int y = x - 1;
               while (y >= 0 && customerList[y].index > key)
               {
                   customerList[y + 1].index = customerList[y].index;
                   y--;
               }
               customerList[y + 1].index = key;
           }
       }
       void mergeSortByEmploy(vector<CustomerBL> &customerListss, int start,int end)
       {
           
           if (start < end)
           {
               int mid = (start + end) / 2;
               mergeSortByEmploy(customerListss, start, mid);
               mergeSortByEmploy(customerListss, mid + 1, end);
               mergeByEmploy(customerListss, start, mid, end);
           }
       }
       void mergeByEmploy(vector<CustomerBL> &arr, int start, int mid, int end) {
           int i = start;
           int j = mid + 1;
           queue<CustomerBL> tempArr;
           while (i <= mid && j <= end) {
               if (arr[i].no_of_employ < arr[j].no_of_employ)
               {
                   tempArr.push(arr[i]);
                   i++;
               }
               else
               {
                   tempArr.push(arr[j]);
                   j++;
               }
           }
           while (i <= mid) {
               tempArr.push(arr[i]);
               i++;
           }
           while (j <= end) {
               tempArr.push(arr[j]);
               j++;
           }
           for (int x = start; x <= end; x++) {
               arr[x] = tempArr.front();
               tempArr.pop();
           }
       }
       void mergeSortByIndex(vector<CustomerBL>& customerListss, int start, int end)
       {

           if (start < end)
           {
               int mid = (start + end) / 2;
               mergeSortByIndex(customerListss, start, mid);
               mergeSortByIndex(customerListss, mid + 1, end);
               mergeByIndex(customerListss, start, mid, end);
           }
       }
       void mergeByIndex(vector<CustomerBL>& arr, int start, int mid, int end) {
           int i = start;
           int j = mid + 1;
           queue<CustomerBL> tempArr;
           while (i <= mid && j <= end) {
               if (arr[i].index < arr[j].index)
               {
                   tempArr.push(arr[i]);
                   i++;
               }
               else
               {
                   tempArr.push(arr[j]);
                   j++;
               }
           }
           while (i <= mid) {
               tempArr.push(arr[i]);
               i++;
           }
           while (j <= end) {
               tempArr.push(arr[j]);
               j++;
           }
           for (int x = start; x <= end; x++) {
               arr[x] = tempArr.front();
               tempArr.pop();
           }
       }
       void writeDataIntoFile(string path) {
           std::ofstream myfile;
           myfile.open(path);
           for (int i = 0;i < customerList.size();i++) {
               myfile << customerList[i].index << "," << customerList[i].organization << "," << customerList[i].name << "," << customerList[i].website << "," << customerList[i].country << "," << customerList[i].description << "," << customerList[i].founded << "," << customerList[i].industry << "," << customerList[i].no_of_employ << "\n";
           }
           myfile.close();
       }
       int partitionByEMP(int start, int end,int pivot)
       {
           int left = start;
           int right = end;
           while (left <= right) {
               while (left <= end && customerList[left].no_of_employ < customerList[pivot].no_of_employ ) {
                   left++;
               }
               while (right >= start && customerList[right].no_of_employ > customerList[pivot].no_of_employ) {
                   right--;
               }
               if (left < right) {
                   swap(customerList[left], customerList[right]);
               }
           }
           swap(customerList[pivot], customerList[right]);
           return right;
       }
       int partitionByIDX(int start, int end, int pivot)
       {
           int left = start;
           int right = end;
           while (left <= right) {
               while (left <= end && customerList[left].index < customerList[pivot].index) {
                   left++;
               }
               while (right >= start && customerList[right].index > customerList[pivot].index) {
                   right--;
               }
               if (left < right) {
                   swap(customerList[left], customerList[right]);
               }
           }
           swap(customerList[pivot], customerList[right]);
           return right;
       }
       
       void quickSortByEmploy(int start, int end)
       {
           
           if (start < end)
           {
               int pivot = start;
               int mid = partitionByEMP(start + 1, end, pivot);
               cout << endl;
               quickSortByEmploy(start, mid - 1);
               quickSortByEmploy(mid + 1, end);
           }
       }
       void quickSortByIDX(int start, int end)
       {

           if (start < end)
           {
               int pivot = start;
               int mid = partitionByIDX(start + 1, end, pivot);
               cout << endl;
               quickSortByIDX(start, mid - 1);
               quickSortByIDX(mid + 1, end);
           }
       }
       int parentIndex(int i)
       {
           return (i - 1) / 2;
       }
       int leftChildIndex(int i)
       {
           return (2 * i) + 1;
       }
       int rightChildIndex(int i)
       {
           return (2 * i) + 2;
       }
       void count_sortBYEMP() {

           int large = -1;
           int count1 = 0;
           int temp = customerList.size();
           int index = 0;
           int z;
           vector <CustomerBL> output(temp);
           for (int x = 0; x < customerList.size(); x++) {
               if (customerList[x].no_of_employ > large) {
                   large = customerList[x].no_of_employ;
               }
           }

           vector<int> count(large + 1);
           for (int x = 0;x < customerList.size(); x++) {
               for (int y = 0; y < customerList.size(); y++) {
                   if (customerList[x].no_of_employ == customerList[y].no_of_employ) {
                       count1 = count1 + 1;
                       count.insert(count.begin() + customerList[x].no_of_employ, count1);
                   }
               }
               count1 = 0;
           }
           for (int y = 1; y < count.size(); y++) {
               count[y] = count[y] + count[y - 1];
           }
           for (int x = customerList.size() - 1; x > -1; x--) {
               index = count[customerList[x].no_of_employ] - 1;
               count[customerList[x].no_of_employ] --;
               output[index] = customerList[x];
           }
           for (int x = 0; x < output.size(); x++) {
               customerList[x] = output[x];
           }
       }
       void count_sortBYINDEX() {

           int large = -1;
           int count1 = 0;
           int temp = customerList.size();
           int index = 0;
           int z;
           vector <CustomerBL> output(temp);
           for (int x = 0; x < customerList.size(); x++) {
               if (customerList[x].index > large) {
                   large = customerList[x].index;
               }
           }

           vector<int> count(large + 1);
           for (int x = 0;x < customerList.size(); x++) {
               for (int y = 0; y < customerList.size(); y++) {
                   if (customerList[x].index == customerList[y].index) {
                       count1 = count1 + 1;
                       count.insert(count.begin() + customerList[x].index, count1);
                   }
               }
               count1 = 0;
           }
           for (int y = 1; y < count.size(); y++) {
               count[y] = count[y] + count[y - 1];
           }
           for (int x = customerList.size() - 1; x > -1; x--) {
               index = count[customerList[x].index] - 1;
               count[customerList[x].index] --;
               output[index] = customerList[x];
           }
           for (int x = 0; x < output.size(); x++) {
               customerList[x] = output[x];
           }
       }
       void radix_sortbyEMP(int place) {

           int count1 = 0;
           int index = 0;
           int temp = customerList.size();
           vector<int>count(10);
           vector<CustomerBL> output(temp);

           for (int x = 0;x < customerList.size(); x++) {

               for (int y = 0; y < customerList.size(); y++) {

                   if ((customerList[x].no_of_employ / place) % 10 == (customerList[y].no_of_employ / place) % 10) {

                       count1 = count1 + 1;
                       count[(customerList[x].no_of_employ / place) % 10] = count1;
                   }
               }
               count1 = 0;
           }
           for (int y = 1; y < count.size(); y++) {

               count[y] = count[y] + count[y - 1];

           }
           for (int x = customerList.size() - 1;x > -1; x--) {

               index = count[(customerList[x].no_of_employ / place) % 10] - 1;
               count[(customerList[x].no_of_employ / place) % 10]--;
               output[index] = customerList[x];
           }
           for (int x = 0; x < output.size(); x++) {
               customerList[x] = output[x];
           }

       }
       void radix_sortbyIndex(int place) {

           int count1 = 0;
           int index = 0;
           int temp = customerList.size();
           vector<int>count(10);
           vector<CustomerBL> output(temp);

           for (int x = 0;x < customerList.size(); x++) {

               for (int y = 0; y < customerList.size(); y++) {

                   if ((customerList[x].index / place) % 10 == (customerList[y].index / place) % 10) {

                       count1 = count1 + 1;
                       count[(customerList[x].index / place) % 10] = count1;
                   }
               }
               count1 = 0;
           }
           for (int y = 1; y < count.size(); y++) {

               count[y] = count[y] + count[y - 1];

           }
           for (int x = customerList.size() - 1;x > -1; x--) {

               index = count[(customerList[x].index / place) % 10] - 1;
               count[(customerList[x].index / place) % 10]--;
               output[index] = customerList[x];
           }
           for (int x = 0; x < output.size(); x++) {
               customerList[x] = output[x];
           }

       }
       void heap_sortbyIndex() {

           for (int x = (customerList.size()) / 2 - 1; x >= 0; x--) {

               heapifyByIndex(customerList.size(), x);
           }
           for (int x = customerList.size() - 1; x > 0; x--) {

               swap(customerList[0], customerList[x]);
               heapifyByIndex(x, 0);
           }
       }

       void heapifyByIndex(int size, int index) {

           int maxindex;
           while (true) {
               int leftindex = leftChildIndex(index);
               int rightindex = rightChildIndex(index);
               if (rightindex >= size) {

                   if (leftindex >= size) {
                       return;
                   }
                   else {
                       maxindex = leftindex;
                   }
               }

               else {
                   if (customerList[leftindex].index >= customerList[rightindex].index) {
                       maxindex = leftindex;
                   }
                   else {
                       maxindex = rightindex;
                   }
               }
               if (customerList[index].index < customerList[maxindex].index) {
                   swap(customerList[index], customerList[maxindex]);
                   index = maxindex;
               }
               else {
                   return;
               }
           }

       }
       void heap_sortbyEMP() {

           for (int x = (customerList.size()) / 2 - 1; x >= 0; x--) {

               heapifyByEMP(customerList.size(), x);
           }
           for (int x = customerList.size() - 1; x > 0; x--) {

               swap(customerList[0], customerList[x]);
               heapifyByEMP(x, 0);
           }
       }

       void heapifyByEMP(int size, int index) {

           int maxindex;
           while (true) {
               int leftindex = leftChildIndex(index);
               int rightindex = rightChildIndex(index);
               if (rightindex >= size) {

                   if (leftindex >= size) {
                       return;
                   }
                   else {
                       maxindex = leftindex;
                   }
               }

               else {
                   if (customerList[leftindex].no_of_employ >= customerList[rightindex].no_of_employ) {
                       maxindex = leftindex;
                   }
                   else {
                       maxindex = rightindex;
                   }
               }
               if (customerList[index].no_of_employ < customerList[maxindex].no_of_employ) {
                   swap(customerList[index], customerList[maxindex]);
                   index = maxindex;
               }
               else {
                   return;
               }
           }

       }
       void bucketSortByEMP() {
           vector<vector<float>> bucket(customerList.size());
           for (int x = 0; x < customerList.size(); x++)
           {
               bucket[int(customerList[x].no_of_employ * customerList.size())].push_back(customerList[x].no_of_employ);
           }
           for (int x = 0; x < bucket.size(); x++)
           {
               sort(bucket[x].begin(), bucket[x].end());
           }
           int index = 0;
           for (int x = 0; x < bucket.size(); x++)
           {
               for (int y = 0; y < bucket[x].size(); y++)
               {
                   customerList[index].no_of_employ = bucket[x][y];
                   index++;
               }
           }
       }
};

