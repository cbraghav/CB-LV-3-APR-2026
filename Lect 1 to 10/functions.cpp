#include <bits/stdc++.h>
using namespace std;

// // declare -> only structure , no body
// int mul(int x, int y);

// define -> structure + body -> it is not being used
// int mul(int x, int y) {
// 	int z = x * y;
// 	return z;
// }

// void sayhello() {
// 	cout << "hello" << endl;
// // }

// void sayhello(string s) {
// 	cout << "hello " << s << endl;
// }

// void printnumber(int x) {
// 	cout << x << endl;
// }

// string sayhello() {
// 	return "hellooo";
// }

// string sayhello(string name) {
// 	return "hello " + name;
// }

// int print_and_multiply(int x) {
// 	cout << x << endl;
// 	return x * 10;
// }

// int main() {

// int a, b;
// cin >> a >> b;

// // int ans = mul(a, b); // using a function
// cout << mul(a, b) << endl;


// sayhello();

// sayhello("raghav");

// cout << sayhello() << endl	;
// cout << sayhello("aman")  << endl;

// printnumber(62);

// cout << print_and_multiply(5) << endl;


// string s = "this is my name : raghav";
// cout << s << endl;

// cin >> s; //-> only stores raghav
// getline(cin, s);

// cout << s << endl;
// return 0;
// }


// int add(int a, int b) {
// 	cout << "add 1 ";
// 	return a + b ;
// }

// chaneg in only return type : wont work
// double add(int a, int b) {
// 	cout << "add 1 ";
// 	return a + b ;
// }

// int add(int x, int y) {
// 	cout << "add 4";
// 	return x + y;
// }

// int add(int a, int b, int c) {
// 	cout << "add 2 ";
// 	return a + b + c;
// }

// double add(double a , double b) {
// 	cout << "add 3 : ";
// 	return a +  b;
// }


// void increment(int & y) {
// 	y++;
// }

// void increment(int &y) {
// 	y++;
// }

// void increment(int& y) {
// 	y++;	y++;	y++;	y++;
// }

int add_abc(int a, int b, int c = 0, int d) {
	return a + b + c + d;
}

int main() {

	// int a = 5;
	// increment(a);
	// cout << a << endl;
	cout << add_abc(1, 2, 3, 4) << endl;
	cout << add_abc(1, 2, 3) << endl;
	cout << add_abc(1, 2) << endl;

	// int x = 15;
	// cout << x << endl;
	// cin >> x ;
	// cout << x << endl;
	// cin >> x ;
	// cout << x << endl;

	// int x = add(9, 10);
	// double y = add(6, 7);
	// cout << add(5, 6) << endl;
	// cout << add(4, 5, 6) << endl;
	// cout << add(2.7, 3.6) << endl;



}