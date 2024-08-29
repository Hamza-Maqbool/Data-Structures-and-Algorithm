// Lab1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Complex.h";

int main()
{
    Complex mynum(12.4,14.5);
    Complex SecNum = mynum.DivComplex(mynum);
    mynum.print(SecNum);
    Complex ThirdNum = mynum.ComplexConjucate(mynum);
    mynum.print(ThirdNum);

}
