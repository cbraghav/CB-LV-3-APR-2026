#include <bits/stdc++.h>
using namespace std;

// class Student {
// public:
// 	string name;
// 	int roll_no;
// 	int marks;
// 	int standard;
// 	char section;
// 	string branch;

// 	void introduction() {
// 		cout << "hello, my name is " << name << endl;
// 	}

// 	void study() {
// 		cout << name <<  " is studying" << endl;;
// 	}

// 	int add(int &a , int &b) {
// 		return a + b;
// 	}
// };



// class Animal {
// public	:

// 	string name;
// 	string color;
// 	int legs_count;
// 	int height;

// 	void speak() {

// 	}



// };




// int main() {

// 	// char c;
// 	// cin >> c ;
// 	// cout << (c == 'Y' ? "Yes" : "No") << endl;
// 	// int a =  (c == 'Y' ? 5 : 7);


// 	// int marks[10] = {50,20,40,30 ... };
// 	// int roll_no[10] = {};
// 	// string name[10] = {};

// 	Student s1;
// 	Student s2;

// 	s1.name = "Raghav";
// 	s1.roll_no = 10;
// 	s1.marks = 30;
// 	s1.standard = 7;



// 	s2.name = "Naman";
// 	s2.roll_no = 12;
// 	s2.marks = 70;
// 	s2.standard = 7;

// 	s1.introduction();

// 	s2.introduction();

// 	s2.study();
// 	cout << s2.marks << endl;

// 	// cout << s1.add(5, 7);

// 	Student s[10];

// 	s[0].name = "Divyansh";
// 	s[1].name = "Jaspreet";

// 	s[0].marks = 50;
// 	s[1].marks = 50;


// 	s[1].introduction();

// 	s[0].introduction();


// 	Animal cat;
// 	Student raghav;

// 	raghav.name = "Raghav";
// 	raghav.study();


// 	return 0;
// }



class Employee {
private:

	string name;
	int empId;
	int salary;
	string jobTitle;

public:

	string getName() {
		return name;
	}
	void work() {
		cout << name << "  is working" << endl;
	}

	// getSalary
	void printSalary() {
		cout << "salary of " << name << " is " << salary << endl;
	}

	void printJobTitle() {
		cout << jobTitle << endl;
	}

	Employee() {
		cout << "constructor 1 called " << endl;
	}

	Employee(string n , int e , int s) {
		name = n;
		empId = e;
		salary = s;
		cout << "constructor 2 called " << endl;
	}
	Employee(string name , int e , int s , string j) {
		// this->name = name;
		(*this).name = name;
		empId = e;
		salary = s;
		jobTitle = j;
		cout << "constructor 3 called " << endl;
	}

	Employee(Employee &e) {
		this->name = "naman";
		this->salary = e.salary;

	}


	~Employee() {
		cout << "Destructor is called for " << name  << endl;;
	}


};


void test() {
	Employee e4("abcd" , 20, 100, "test");

	e4.work();
	// e1.setSalary();
	e4.printSalary();
	cout << e4.getName() << endl;
	// cout << e1.jobTitle << endl;
	e4.printJobTitle();
}

int main() {

	Employee e1("raghav", 15, 100, "teacher");
	Employee e2("naman", 12, 10000);
	Employee e3(e1);

	cout << endl;
	// e1.name = "raghav";
	// e1.empId = 15;
	// e1.salary = 10000;
	// e1.jobTitle = "SWE";


	// cout << e1.name << endl;
	// // e1.name = "naman";
	// cout << e1.name << endl;

	e1.work();
	// e1.setSalary();
	e1.printSalary();
	cout << e1.getName() << endl;
	// cout << e1.jobTitle << endl;
	e1.printJobTitle();
	cout << endl;

	cout << " func test called -----------" << endl;

	test();
	cout << " func test over -----------" << endl;

	e3.work();
	// e1.setSalary();
	e3.printSalary();
	cout << e3.getName() << endl;
	// cout << e1.jobTitle << endl;
	e3.printJobTitle();

	cout << endl;


}