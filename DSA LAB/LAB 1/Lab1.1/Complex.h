#pragma once
#include <iostream>
using namespace std;
#include <cstdlib>

class Complex
{
private:
	double real;
	double imaginary;
public:
	Complex() {
		real = 0;
		imaginary = 0;
	}
	Complex(double r) {
		real = r;
		imaginary = 0;
	}
	Complex(double r , double i) {
		real = r;
		imaginary = i;
	}
	Complex(const Complex & c) {
		real = c.real;
		imaginary = c.imaginary;
	}
	double GetReal() {
		return real;
	}
	double GetImgi() {
		return imaginary;
	}
	void SetReal(double real) {
		this->real = real;
	}
	void SetImgi(double imaginary) {
		this->imaginary = imaginary;
	}

	 Complex addComplex(Complex num) {
		 Complex newnum;
		newnum.real = this->real + num.real;
		newnum.imaginary = this->imaginary + num.imaginary;
		return newnum;
	 }
	 Complex SubComplex(Complex num) {
		 Complex newnum;
		 newnum.real = this->real - num.real;
		 newnum.imaginary = this->imaginary - num.imaginary;
		 return newnum;
	 }
	 Complex MulComplex(Complex num) {
		 Complex newnum;
		 newnum.real = this->real * num.real;
		 newnum.imaginary = this->imaginary * num.imaginary;
		 return newnum;
	 }
	 Complex DivComplex(Complex num) {
		 Complex newnum;
		 newnum.real = this->real / num.real;
		 newnum.imaginary = this->imaginary / num.imaginary;
		 return newnum;
	 }
	 Complex ComplexConjucate(Complex num) {
		 if (num.imaginary > 0) {
			 num.imaginary = -num.imaginary;
		 }
		 else {
			 num.imaginary = abs(num.imaginary);
		 }
		 return num;
	 }
	 void print(Complex num) {
		 cout << num.real;
		 if (num.imaginary > 0) {
			 cout << "+" << num.imaginary << "i"<<endl;
		 }
		 else {
			 cout << num.imaginary << "i"<<endl;
		 }
	 }
};

