#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
	double re, im;

	cout << "Enter for the first complexe number: ";
	cin >> re >> im;
	complex_number complex1(re, im);
	cout << "Enter for the second complexe number: ";
	cin >> re >> im;
	complex_number complex2(re, im);
	cout << "The sum: ";
	(complex1.sumTWOComplexNumbers(complex2)).exportComplex();
	cout << "Effxect two complex numbers: ";
	(complex1.effxectTwoComplexNumbers(complex2)).exportComplex();
	(complex1.calculatesTWOComplexNumbers(complex2)).exportComplex();


	return 0;

}