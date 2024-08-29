// menu option.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;
#include "MyStack.h";

int main_menu() {
	std::cout << "-1. Exit." << endl;
	std::cout << "1. Go to First Menu." << endl;
	std::cout << "Enter our Option........" << endl;
	int option;
	cin >> option;
	return option;
}
int First_menu() {
	cout << "1. Go to Second Menu." << endl;
	cout << "0. Back." << endl;
	cout << "Enter our Option........" << endl;
	int option;
	cin >> option;
	return option;
}
int Secound_menu() {
	cout << "1. Go to Third Menu." << endl;
	cout << "0. Back." << endl;
	cout << "Enter our Option........" << endl;
	int option;
	cin >> option;
	return option;
}
int Third_menu() {
	cout << "0. Back." << endl;
	cout << "Enter our Option........" << endl;
	int option;
	cin >> option;
	return option;
}
int main()
{
	int option1 = main_menu();
	MyStack st;
	while (option1 != -1) {
		if (option1 == 1) {
			st.push(1);
			option1=First_menu();
			if (option1 == 1) {
				st.push(2);
				option1 = Secound_menu();
				if(option1 == 1){
					st.push(3);
					option1 = Third_menu();
					if (option1 == 0) {
						st.pop();
						int menu = st.ShowTop();
						if (menu == 1) {
							option1 = First_menu();
						}
						else if (menu == 2) {
							option1 = Secound_menu();
						}
						else if (menu == 3) {
							option1 = Third_menu();
						}
					}
				}
				else if (option1 == 0) {
					st.pop();
					int menu = st.ShowTop();
					if (menu == 1) {
						option1 = First_menu();
					}
					else if (menu == 2) {
						option1 = Secound_menu();
					}
					else if (menu == 3) {
						option1 = Third_menu();
					}
				}
			}
			else if (option1 == 0) {
				st.pop();
				int menu = st.ShowTop();
				if (menu == 1) {
					option1 = First_menu();
				}
			}
		}
		 if (option1 == 2) {
			st.push(2);
			option1 = Secound_menu();
		    if (option1 == 0) {
			st.pop();
			int menu = st.ShowTop();
			if (menu == 1) {
				option1 = First_menu();
			}
			else if (menu == 2) {
				option1 = Secound_menu();
			}
			else if (menu == 3) {
				option1 = Third_menu();
			}
		  }
		}
		 if (option1 == 3) {
			st.push(3);
			option1 = Third_menu();
		    if (option1 == 0) {
			st.pop();
			int menu = st.ShowTop();
			if (menu == 1) {
				option1 = First_menu();
			}
			else if (menu == 2) {
				option1 = Secound_menu();
			}
			else if (menu == 3) {
				option1 = Third_menu();
			}
		}
		}
	}
}



