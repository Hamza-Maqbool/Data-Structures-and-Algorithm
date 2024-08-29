// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Greater(int *ptr1,int *ptr2,int *ptr3) {
    if (*ptr1 > *ptr2 && *ptr1 > *ptr3) {
        cout << *ptr1;
    }
    else if (*ptr2 > *ptr1 && *ptr2 > *ptr3) {
        cout << *ptr2;
    }
    else if (*ptr3 > *ptr2 && *ptr3 > *ptr1) {
        cout << *ptr3;
    }
}

int main()
{
    int num1,num2,num3;
    cout << "Enter the Num : ";
    cin >> num1;
    cout << "Enter the Num : ";
    cin >> num2;
    cout << "Enter the Num : ";
    cin >> num3;
    Greater(&num1, &num2, &num3);
   
}



