#include <bits/stdc++.h>
using namespace std;

// // pass by refernce
// void increment(int &x) {
// 	x++;
// }

// pass by pointer
// void increment(int *x) {

// 	// (*x)++;
// 	// *x = 15;
// 	// int y = 25;
// 	// x = &y;
// }

// int x = 10;

// dangling pointer
// int* getPointer() {
// 	int x = 10;
// 	return &x;
// }



int main() {

	// int x = 15;
	// cout << "value of x :=> " << x << endl;
	// cout << "addr of x :=> " << &x << endl;

	// // i want to store addr of x in a pointer p
	// int* p = &x;
	// cout << "value of p (which is equal to addr of x) :=> "
	//      << p << endl;

	// // value -> addr  : use &
	// // add -> value : use *

	// cout << "value at addr p is :=> " << *p << endl;
	// cout << "addr of p" << &p << endl;
	// cout << "value at addr of x is :=> " << *(&x) << endl;

	// x = 20;
	// cout << "value after changing x : " << *p << endl;

	// *p = 25;
	// cout << "value of x after changing *p is : " << x << endl;

	// int y = 135;
	// p = &y;

	// cout << "add of y " << &y << endl;
	// cout << "value of y " << y << endl;

	// cout << "value of p ( which is addr of y) " << p << endl;

	// cout << "value at addr p " << *p << endl;

	// *p = 129;

	// cout << x << " " << y << " " << *p << endl;

	// int a = 5;

	// // increment(a); // [pass by refernce]
	// increment(&a); // pass by pointer
	// cout << a << endl;


	// int x = 5;
	// int *p = &x;
	// int **pp = &p;

	// cout << x << " " << *p << " " << **pp << endl;

	// cout << *pp << " " << p << " " << &x << endl;

	// int *p = getPointer();

	// cout << *p << endl;

	int m1 = 1;
	int m2 = 2;
	int m3 = 3;

	int m[3] ;  // int m[size]; -> ( 0 , 1 , 2 ... size - 1)
	// 0 1 2
	m[0] = 1;
	m[1] = 2;
	m[2] = 3;

	cout << m1 << " " << m[0] << endl;

	// name of arr -> addr of m[0]
	cout << m << " " << &m[0] << endl;


	int *p = m;
	cout << *p << endl;
	p++;
	cout << *p << endl;
	p--;
	cout << *p << endl;

	return 0;
}