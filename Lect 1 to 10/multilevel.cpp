#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
	string name;
	void sayHello() {
		cout << "hello " << endl;
	}
};

class LandAnimal : public Animal {
public :
	int legs;
};

class Dog: public LandAnimal {
public:
	void bark() {
		cout << "dog barks" << endl;
	}
};

int main() {

	Dog d1;
	d1.name = "tiger";
	d1.legs = 4;

	cout << d1.name << endl << d1.legs << endl;

	d1.sayHello();

	d1.bark();

	return 0;
}