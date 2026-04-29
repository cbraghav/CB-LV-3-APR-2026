#include <bits/stdc++.h>
using namespace std;


class Parent {
public:
	string name = "Raghav";

protected:
	int salary = 10000;

private:
	string password = "abc";

// public:
// 	void printPasswordParent() {
// 		cout << password << endl;
// 	}
};


class Child: public Parent {
public:
	void printSalary() {
		cout << salary << endl;
	}
	// void printPassword() {
	// 	// cout << password << endl;
	// }
};
int main() {

	Child c1;

	cout << c1.name << endl;
	// cout << c1.password << endl;
	// cout << c1.salary << endl;
	c1.printSalary();

	// c1.printPassword();
	// c1.printPasswordParent();



	return 0;
}