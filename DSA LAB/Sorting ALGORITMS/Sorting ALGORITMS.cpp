#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "CustomerBL.h"
#include "conio.h"
#include "CustomerDL.h"
#include "CustomerUI.h"
#include "chrono"
#include <cstdio>
using namespace std;

int main()
{
	CustomerUI obj;
	static string path;
	string path1 = "Sorted-File";
	CustomerDL obj1;
	int count = obj1.customerList.size();
	while (true)
	{
		int op = obj.MainMenu();
		if (op == 1) {
			while (true)
			{
				op = obj.FirstMenu();
				
				if (op == 1) {
					path = "organizations-100.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find==true) {
						cout << "Data Loaded"<<endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.bubbleSortByEmploy();
		                    end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							cout << "Press any Key to Print the Record" << endl;
							_getch();
							start = chrono::steady_clock::now();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.bubbleSortByIndex();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							cout << "Press any Key to Print the Record" << endl;
							_getch();
							start = chrono::steady_clock::now();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 2) {
					auto start = chrono::steady_clock::now();
					path = "organizations-1000.csv";
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.bubbleSortByEmploy();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							cout << "Press any Key to Print the Record" << endl;
							_getch();
							start = chrono::steady_clock::now();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.bubbleSortByIndex();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							cout << "Press any Key to Print the Record" << endl;
							_getch();
							start = chrono::steady_clock::now();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 3) {
					path = "organizations-10000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.bubbleSortByEmploy();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							cout << "Press any Key to Print the Record" << endl;
							_getch();
							start = chrono::steady_clock::now();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.bubbleSortByIndex();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							cout << "Press any Key to Print the Record" << endl;
							_getch();
							start = chrono::steady_clock::now();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 4) {
					path = "organizations-100000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.bubbleSortByEmploy();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							cout << "Press any Key to Print the Record" << endl;
							_getch();
							start = chrono::steady_clock::now();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.bubbleSortByIndex();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							start = chrono::steady_clock::now();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 5) {
					path = "organizations-500000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.bubbleSortByEmploy();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							cout << "Press any Key to Print the Record" << endl;
							_getch();
							start = chrono::steady_clock::now();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.bubbleSortByIndex();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							start = chrono::steady_clock::now();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				
				if (op == 6) {
					obj1.clear();
					break;
				}
				obj1.writeDataIntoFile(path1);
				obj1.clear();
			}
		}
		else if (op == 2) {
			while (true)
			{
				op = obj.FirstMenu();
				if (op == 1) {
					path = "organizations-100.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.selectionSortByEmploy();
							start = chrono::steady_clock::now();
							start = chrono::steady_clock::now();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.selectionSortByIndex();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							start = chrono::steady_clock::now();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 2) {
					path = "organizations-1000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.selectionSortByEmploy();
							start = chrono::steady_clock::now();
							start = chrono::steady_clock::now();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
						    start = chrono::steady_clock::now();
							obj1.selectionSortByIndex();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 3) {
					path = "organizations-10000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.selectionSortByEmploy();
							
						 end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.selectionSortByIndex();
							
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 4) {
					path = "organizations-100000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.selectionSortByEmploy();
							
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
		                    start = chrono::steady_clock::now();
							obj1.selectionSortByIndex();
							
		                    end = chrono::steady_clock::now();
		                    diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
		                    end = chrono::steady_clock::now();
		                    diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 5) {
					path = "organizations-500000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.selectionSortByEmploy();
							
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.selectionSortByIndex();
							
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				if (op == 6) {
					obj1.clear();
					break;
				}
				obj1.writeDataIntoFile(path1);
				obj1.clear();
			}
		}
		else if (op == 3) {
			while (true)
			{
				op = obj.FirstMenu();
				if (op == 1) {
					path = "organizations-100.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.insertionSortByEmploy();
							
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
						 start = chrono::steady_clock::now();
							obj1.insertionSortByIndex();
							
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 2) {
					path = "organizations-1000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.insertionSortByEmploy();
							
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.insertionSortByIndex();
							
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 3) {
					path = "organizations-10000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.insertionSortByEmploy();
							
							end = chrono::steady_clock::now();
							auto diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.insertionSortByIndex();
							
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 4) {
					path = "organizations-100000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.insertionSortByEmploy();
							
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.insertionSortByIndex();
							
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 5) {
					path = "organizations-500000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.insertionSortByEmploy();
							
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.insertionSortByIndex();
							
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				if (op == 6) {
					obj1.clear();
					break;
				}
				obj1.writeDataIntoFile(path1);
				obj1.clear();
			}
		}
		else if (op == 4) {
			while (true)
			{
				op = obj.FirstMenu();
				if (op == 1) {
					path = "organizations-100.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.mergeSortByEmploy(obj1.customerList, 0, obj1.customerList.size() - 1);
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.mergeSortByIndex(obj1.customerList, 0, obj1.customerList.size() - 1);
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 2) {
					path = "organizations-1000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.mergeSortByEmploy(obj1.customerList, 0, obj1.customerList.size() - 1);
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.mergeSortByIndex(obj1.customerList, 0, obj1.customerList.size() - 1);
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 3) {
					path = "organizations-10000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.mergeSortByEmploy(obj1.customerList, 0, obj1.customerList.size() - 1);
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
						 start = chrono::steady_clock::now();
							obj1.mergeSortByIndex(obj1.customerList, 0, obj1.customerList.size() - 1);
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 4) {
					path = "organizations-100000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
						start = chrono::steady_clock::now();
							obj1.mergeSortByEmploy(obj1.customerList, 0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
						start = chrono::steady_clock::now();
							obj1.mergeSortByIndex(obj1.customerList, 0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				else if (op == 5) {
					path = "organizations-500000.csv";
					auto start = chrono::steady_clock::now();
					bool find = obj1.readFromFile(path);
					auto end = chrono::steady_clock::now();
					auto diff = end - start;
					if (find == true) {
						cout << "Data Loaded" << endl;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						op = obj.SecondMenu();
						if (op == 1) {
							start = chrono::steady_clock::now();
							obj1.mergeSortByEmploy(obj1.customerList, 0, obj1.customerList.size() - 1);
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
						else if (op == 2) {
							start = chrono::steady_clock::now();
							obj1.mergeSortByIndex(obj1.customerList, 0, obj1.customerList.size() - 1);
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
							_getch();
							obj1.printArray();
							end = chrono::steady_clock::now();
							diff = end - start;
							cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						}
					}
				}
				if (op == 6) {
					obj1.clear();
					break;
				}
				obj1.writeDataIntoFile(path1);
				obj1.clear();
			}
		}
		else if (op == 5) {
		while (true)
		{
			op = obj.FirstMenu();
			if (op == 1) {
				path = "organizations-100.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.quickSortByEmploy(0, obj1.customerList.size()-1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.quickSortByIDX(0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 2) {
				path = "organizations-1000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.quickSortByEmploy(0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.quickSortByIDX(0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 3) {
				path = "organizations-10000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.quickSortByEmploy(0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.quickSortByIDX(0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 4) {
				path = "organizations-100000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.quickSortByEmploy(0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.quickSortByIDX(0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 5) {
				path = "organizations-500000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.quickSortByEmploy(0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.quickSortByIDX(0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			if (op == 6) {
				obj1.clear();
				break;
			}
			obj1.writeDataIntoFile(path1);
			obj1.clear();
		}
		}
		else if (op == 6) {
		while (true)
		{
			op = obj.FirstMenu();
			if (op == 1) {
				path = "organizations-100.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.heap_sortbyEMP();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.heap_sortbyIndex();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 2) {
				path = "organizations-1000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.heap_sortbyEMP();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.heap_sortbyIndex();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 3) {
				path = "organizations-10000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.heap_sortbyEMP();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.heap_sortbyIndex();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 4) {
				path = "organizations-100000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.heap_sortbyIndex();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.heap_sortbyIndex();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 5) {
				path = "organizations-500000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.heap_sortbyEMP();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.heap_sortbyIndex();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			if (op == 6) {
				obj1.clear();
				break;
			}
			obj1.writeDataIntoFile(path1);
			obj1.clear();
		}
		
		}
		else if (op == 7) {
		while (true)
		{
			op = obj.FirstMenu();
			if (op == 1) {
				path = "organizations-100.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.count_sortBYEMP();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.count_sortBYINDEX();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 2) {
				path = "organizations-1000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.count_sortBYEMP();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.count_sortBYINDEX();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 3) {
				path = "organizations-10000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.count_sortBYEMP();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.count_sortBYINDEX();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 4) {
				path = "organizations-100000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.count_sortBYEMP();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.count_sortBYINDEX();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 5) {
				path = "organizations-500000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.count_sortBYEMP();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.count_sortBYINDEX();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			if (op == 6) {
				obj1.clear();
				break;
			}
			obj1.writeDataIntoFile(path1);
			obj1.clear();
		}

		}
		else if (op == 8) {
		while (true)
		{
			op = obj.FirstMenu();
			if (op == 1) {
				path = "organizations-100.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						int large = -1;
						int place = 1;
						start = chrono::steady_clock::now();
						for (int x = 0; x < obj1.customerList.size(); x++) {

							if (obj1.customerList[x].no_of_employ > large) {

								large = obj1.customerList[x].no_of_employ;
							}
						}
						while (true) {
							if ((large / place) > 0) {

								obj1.radix_sortbyEMP(place);
								place = place * 10;

							}
							else {
								break;
							}
						}
						
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						int large = -1;
						int place = 1;
						start = chrono::steady_clock::now();
						for (int x = 0; x < obj1.customerList.size(); x++) {

							if (obj1.customerList[x].index > large) {

								large = obj1.customerList[x].index;
							}
						}
						while (true) {
							if ((large / place) > 0) {

								obj1.radix_sortbyIndex(place);
								place = place * 10;

							}
							else {
								break;
							}
						}
						
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 2) {

				path = "organizations-1000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						int large = -1;
						int place = 1;
						start = chrono::steady_clock::now();
						for (int x = 0; x < obj1.customerList.size(); x++) {

							if (obj1.customerList[x].no_of_employ > large) {

								large = obj1.customerList[x].no_of_employ;
							}
						}
						while (true) {
							if ((large / place) > 0) {

								obj1.radix_sortbyEMP(place);
								place = place * 10;

							}
							else {
								break;
							}
						}
					
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						int large = -1;
						int place = 1;
						start = chrono::steady_clock::now();
						for (int x = 0; x < obj1.customerList.size(); x++) {

							if (obj1.customerList[x].index > large) {

								large = obj1.customerList[x].index;
							}
						}
						while (true) {
							if ((large / place) > 0) {

								obj1.radix_sortbyIndex(place);
								place = place * 10;

							}
							else {
								break;
							}
						}
						
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 3) {
				path = "organizations-10000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						int large = -1;
						int place = 1;
						start = chrono::steady_clock::now();
						for (int x = 0; x < obj1.customerList.size(); x++) {

							if (obj1.customerList[x].no_of_employ > large) {

								large = obj1.customerList[x].no_of_employ;
							}
						}
						while (true) {
							if ((large / place) > 0) {

								obj1.radix_sortbyEMP(place);
								place = place * 10;

							}
							else {
								break;
							}
						}
						
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						int large = -1;
						int place = 1;
						start = chrono::steady_clock::now();
						for (int x = 0; x < obj1.customerList.size(); x++) {

							if (obj1.customerList[x].index > large) {

								large = obj1.customerList[x].index;
							}
						}
						while (true) {
							if ((large / place) > 0) {

								obj1.radix_sortbyIndex(place);
								place = place * 10;

							}
							else {
								break;
							}
						}
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 4) {
				path = "organizations-100000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						int large = -1;
						int place = 1;
						start = chrono::steady_clock::now();
						for (int x = 0; x < obj1.customerList.size(); x++) {

							if (obj1.customerList[x].no_of_employ > large) {

								large = obj1.customerList[x].no_of_employ;
							}
						}
						while (true) {
							if ((large / place) > 0) {

								obj1.radix_sortbyEMP(place);
								place = place * 10;

							}
							else {
								break;
							}
						}
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						int large = -1;
						int place = 1;
						start = chrono::steady_clock::now();
						for (int x = 0; x < obj1.customerList.size(); x++) {

							if (obj1.customerList[x].index > large) {

								large = obj1.customerList[x].index;
							}
						}
						while (true) {
							if ((large / place) > 0) {

								obj1.radix_sortbyIndex(place);
								place = place * 10;

							}
							else {
								break;
							}
						}
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 5) {
				path = "organizations-500000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						int large = -1;
						int place = 1;
						start = chrono::steady_clock::now();
						for (int x = 0; x < obj1.customerList.size(); x++) {

							if (obj1.customerList[x].no_of_employ > large) {

								large = obj1.customerList[x].no_of_employ;
							}
						}
						while (true) {
							if ((large / place) > 0) {

								obj1.radix_sortbyEMP(place);
								place = place * 10;

							}
							else {
								break;
							}
						}
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						int large = -1;
						int place = 1;
						start = chrono::steady_clock::now();
						for (int x = 0; x < obj1.customerList.size(); x++) {

							if (obj1.customerList[x].index > large) {

								large = obj1.customerList[x].index;
							}
						}
						while (true) {
							if ((large / place) > 0) {

								obj1.radix_sortbyIndex(place);
								place = place * 10;

							}
							else {
								break;
							}
						}
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			if (op == 6) {
				obj1.clear();
				break;
			}
			obj1.writeDataIntoFile(path1);
			obj1.clear();
		}

		}
		else if (op == 9) {
		while (true)
		{
			op = obj.FirstMenu();
			if (op == 1) {
				path = "organizations-100.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.bucketSortByEMP();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.mergeSortByIndex(obj1.customerList, 0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 2) {
				path = "organizations-1000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.mergeSortByEmploy(obj1.customerList, 0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.mergeSortByIndex(obj1.customerList, 0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 3) {
				path = "organizations-10000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.mergeSortByEmploy(obj1.customerList, 0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.mergeSortByIndex(obj1.customerList, 0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 4) {
				path = "organizations-100000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.mergeSortByEmploy(obj1.customerList, 0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.mergeSortByIndex(obj1.customerList, 0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			else if (op == 5) {
				path = "organizations-500000.csv";
				auto start = chrono::steady_clock::now();
				bool find = obj1.readFromFile(path);
				auto end = chrono::steady_clock::now();
				auto diff = end - start;
				if (find == true) {
					cout << "Data Loaded" << endl;
					cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					op = obj.SecondMenu();
					if (op == 1) {
						start = chrono::steady_clock::now();
						obj1.mergeSortByEmploy(obj1.customerList, 0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
					else if (op == 2) {
						start = chrono::steady_clock::now();
						obj1.mergeSortByIndex(obj1.customerList, 0, obj1.customerList.size() - 1);
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
						_getch();
						obj1.printArray();
						end = chrono::steady_clock::now();
						diff = end - start;
						cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
					}
				}
			}
			if (op == 6) {
				obj1.clear();
				break;
			}
			obj1.writeDataIntoFile(path1);
			obj1.clear();
		}

		}
		else if (op == 10) {
     		break;
		}
	}
}


