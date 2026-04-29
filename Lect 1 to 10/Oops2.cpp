#include <bits/stdc++.h>
using namespace std;

// class Animal {

// public:
// 	string name = "Animal1";
// 	string color = "Green";
// 	int legs_count;
// 	int height;

// };

// class Dog : public Animal {
// public:
// 	string name = "tiger";

// 	void handshake() {
// 		cout << "dog' handshake" << endl;
// 	}
// };

// class Bird : public Animal {
// public:

// 	void fly() {
// 		cout << "bird in flying" << endl;
// 	}
// };


class LandAnimal {
public:
	string name = "land";
	int legs;

	void walk() {
		cout << "walk";
	}
};
class WaterAnimal {
public:

	string name = "water";
	bool has_gills;
};


class AmphibousAnimal : public LandAnimal, public WaterAnimal {
public:
};

int main() {

	// Dog d1;
	// // d1.name = "tiger";
	// cout << d1.name << endl;
	// cout << d1.color << endl;
	// d1.handshake();

	// Bird b1;
	// b1.color = "Black";
	// b1.fly();


	AmphibousAnimal frog;
	// cout << frog.name << endl;
	cout << frog.LandAnimal::name << endl;
	cout << frog.WaterAnimal ::name << endl;
	frog.has_gills = true;
	frog.legs = 2;

	// frog.walk();


	return 0;
}