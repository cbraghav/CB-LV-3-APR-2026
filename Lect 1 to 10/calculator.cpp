#include <bits/stdc++.h>
using namespace std;

void add() {

	int a, b;
	cin >> a >> b;

	cout << a + b << endl;


}
int main() {

	while (true) {
		int a, b;
		char c;
		cin >> c;
		switch (c) {
		case '+':
			add();
			break;
		case '-':
			cin >> a >> b;
			cout << a - b << endl;
			break;
			break;
		case '0':
			cout << "thanks for using : exit" << endl;
			return 0;
		default:
			cout << "please enter a valid symbol ( + - * / % or 0 to exit )" << endl;
			break;

		}
	}

	return 0;
}