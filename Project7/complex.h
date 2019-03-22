#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#endif
struct complex_number {
public:
	double read_number;
	double virtual_number;

	complex_number(double re = 0.0, double   = 0.0);
	void importComplex(double re, double im);
	void exportComplex();
	complex_number sumTWOComplexNumbers(complex_number comp);
	complex_number effxectTwoComplexNumbers(complex_number comp);
	complex_number calculatesTWOComplexNumbers(complex_number comp);
};
