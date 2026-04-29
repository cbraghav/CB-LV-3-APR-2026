// #include <bits/stdc++.h>
// using namespace std;


// class Base {
// public :
// 	virtual void sayHello() = 0;
// 	Base() {
// 		cout << "base cons called" << endl;
// 	}
// };

// class Child : public Base {
// public:
// 	void sayHello()  override {
// 		cout << "Hello from child" << endl;;
// 	}
// 	Child() {
// 		cout << "child cons called" << endl;
// 	}
// };

// int main() {

// 	Child c;
// 	c.sayHello();
// 	// c.Base::sayHello();

// 	cout << endl;

// 	return 0;
// }



#include <bits/stdc++.h>
using namespace std;

class Human {
public:
	int a = 5;;
	static int x;
};

int Human::x = 10;

int main() {


	// Human h1;
	// Human h2;

	// h1.a = 10;
	Human::x = 99;

	// cout << h1.a << " " << h2.a << endl;

	// cout << h1.x << " " << h2.x << endl;
	cout << Human::x << endl;


	return 0;
}