#include "complex.h"
#include "iostream"
#include "cmath"
using namespace std;
complex_number::complex_number(double re, double im) {
	read_number = re;
	virtual_number = im;
}
void complex_number::importComplex(double re = 0, double im = 0) {
	read_number = re;
	virtual_number = im;
}
void complex_number::exportComplex() {
	cout << read_number;
	if (virtual_number < 0) {
		cout << " - ";
	}
	else {
		cout << " + ";
	}
	cout << abs(virtual_number) << 'i' << endl;
}

complex_number complex_number::sumTWOComplexNumbers(complex_number comp)
{
	return complex_number();
}

complex_number complex_number::effxectTwoComplexNumbers(complex_number comp)
{
	return complex_number();
}

complex_number complex_number::calculatesTWOComplexNumbers(complex_number comp)
{
	return complex_number();
}
