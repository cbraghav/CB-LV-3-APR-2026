#include <bits/stdc++.h>
using namespace std;


class Math {
public:

	int add(int a, int b) {
		return a + b;
	}
	int add(int a, int b, int c) {
		return a + b + c;
	}

};

class ComplexNumber {
public:
	int real;
	int imag;

	ComplexNumber plus(ComplexNumber &b) {
		// a -> this
		// b -> input
		return ComplexNumber(
		           real + b.real,
		           imag + b.imag
		       );
	}

	ComplexNumber(int a, int b) {
		real = a;
		imag = b;
	}
	ComplexNumber operator+(ComplexNumber &b) {
		// return ComplexNumber(
		//            real + b.real,
		//            imag + b.imag
		//        );

		int real_sum = this->real + b.real;
		int imag_sum = this->imag + b.imag;
		ComplexNumber x(real_sum, imag_sum);
		return x;
	}
};

int main() {


	// Math m;
	// cout << m.add(5, 6, 8) << endl;
	// cout << m.add(3, 4) << endl;

	ComplexNumber c1(3, 5);
	ComplexNumber c2(7, 2);

	// ComplexNumber c3 = c1.plus(c2);
	ComplexNumber c3 = (c1 + c2);// <-> ComplexNumber c3 = c1. + (c2);

	ComplexNumber c4 = c1 + c2 + c3;
	cout << c4.real << " + i" << c4.imag << endl;

	return 0;
}