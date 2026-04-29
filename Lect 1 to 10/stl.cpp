#include <array>
#include <bits/stdc++.h>
using namespace std;

int main() {

	// int arr[8]; // int arr[N]

	// arr[0] = 10;// arr[i]  => 0 <= i < N  => 0 <= i <= N-1

	// cout << arr[6];

	// int arr[8] {};  // {} =>setting all elements in array as 0
	// int arr[8] = {1, 2, 3, 4, 5}; // [1,2,3,4,5,0,0,0];

	// int arr[9] = {987};
	// cout << arr[0] << " " << arr[2] << " " << arr[4] << endl;

	// // start=> Inclusive
	// // end => exclusive
	// // fill(start, end , val)
	// std::fill(arr, arr + 9, 55);
	// arr[5] = 99;
	// cout << arr[0] << " " << arr[2] << " " << arr[4] << endl;


	// int arr1[] = {1, 2, 3, 4, 5, 6};

	// int n = sizeof(arr1) / sizeof(arr1[0]);
	// number_of_elements = total_size/ size_of_one_element
	// cout << sizeof(arr) / sizeof(arr[0]) << endl;

	// cout << arr1[0] << endl;
	// cout << arr1[1] << endl;
	// cout << arr1[2] << endl;
	// cout << arr1[3] << endl;

	// for (int idx = 0; idx <= n - 1 ; idx++ ) {
	// 	cout << arr1[idx] << " ";
	// }
	// cout << endl;

	// int arr2[] = arr1;  => this will fail
	// int arr2[n];
	// arr2 = arr1; this will fail

	// for (int idx = 0; idx <= n - 1 ; idx++ ) {
	// 	// cout << arr2[idx] << " ";
	// 	arr2[idx] = arr1[idx];
	// }

	//memcpy(to_array, from_array, size);
	// memcpy(arr2, arr1, sizeof(arr1));
	// arr1[3] = 9875;
	// for (int idx = 0; idx <= n - 1 ; idx++ ) {
	// 	cout << arr2[idx] << " ";
	// }
	// cout << endl;

	// for (int idx = 0; idx <= n - 1 ; idx++ ) {
	// 	cout << arr1[idx] << " ";
	// }
	// cout << endl;

	// int a ;
	// cin >> a;


	// int arr[5];
	// int n = 5;
	// // cin >> arr[0];
	// // cin >> arr[1] >> arr[2];

	// // input
	// for (int i = 0 ; i < n; i++) {
	// 	cin >> arr[i];
	// }

	// // print
	// for (int i = 0 ; i < n ; i++) {
	// 	cout << arr[i] << " ";
	// }


	// [1,2,3]
	// [4,5,6]
	// [7,8,9]
	// [10,11,12]

	// int mat[4][3] = {
	// 	{1, 2, 3},
	// 	{4, 5, 6},
	// 	{7, 8, 9},
	// 	{10, 11, 12}
	// };
	// int mat[10][10] ;
	// cout << mat[0][0] << endl;
	// cout << mat[2][1] << endl;
	// cout << mat[2][2] << endl;
	// cout << mat[3][0] << endl;
	// cout << mat[3][1] << endl;
	// cout << mat[3][2] << endl;

	// task 1-> output using loop
	// taks 2 -> input using loop
	// int n = 4; // row cnt
	// int m = 3; // col cnt
	// cin >> n >> m;

	// for (int i = 0 ; i < n; i++) {
	// 	for (int j = 0 ; j < m; j++) {
	// 		cin >> mat[i][j];
	// 	}
	// }

	// for (int i = 0 ; i < n; i++) {
	// 	for (int j = 0 ; j < m; j++) {
	// 		cout << mat[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }


	// STL

	// Array
	// #include<array>

	// array<int, 10> marks = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// cout << marks.at(3) << endl;
	// cout << get<4>(marks) << endl;
	// cout << marks.size() << endl;
	// cout << marks.empty() << endl;


	// Vector
	// vector<data_type> name;

	// vector<int> marks; // creates a vector of size 0
	// vector<int> marks(5); // vector<int> marks(size)
	// vector<int> marks(5, 11); // vector<int> marks(size,value)
	// vector<int> marks = {1, 2, 3}; // vector<int> marks = {1,2,3};

	// marks[2] = 99;

	// // cout << marks.size() << endl;
	// // for (int i = 0 ; i < marks.size(); i++) {
	// // 	cout << marks[i] << " ";
	// // } cout << endl;

	// marks.push_back(5);
	// marks.push_back(96);

	// cout << marks.size() << endl;
	// for (int i = 0 ; i < marks.size(); i++) {
	// 	cout << marks[i] << " ";
	// } cout << endl;

	// marks.pop_back();
	// marks.pop_back();
	// marks.pop_back();
	// marks.pop_back();

	// cout << marks.size() << endl;
	// for (int i = 0 ; i < marks.size(); i++) {
	// 	cout << marks[i] << " ";
	// } cout << endl;

	// marks.erase(iterator)
	// marks.begin() -> iterator -> similar to pointer
	// cout << *(marks.begin() + 2) << endl;

	// marks.erase(marks.begin() + 2 );

	// cout << marks.size() << endl;
	// for (int i = 0 ; i < marks.size(); i++) {
	// 	cout << marks[i] << " ";
	// } cout << endl;

	// cout << marks.empty() << endl;


	// vector<vector<int>> mat = {
	// 	{1, 2, 3}, // mat[0]
	// 	{4, 5, 7568, 4235, 235, 35, 23,}, // mat[1]
	// 	{6, 7, 8} // mat[2]
	// };


	// for (int i = 0 ; i < mat.size(); i++) {
	// 	for (int j = 0 ; j < mat[i].size(); j++) {
	// 		cout << mat[i][j] << " ";
	// 	}
	// 	cout << endl;

	// }


	// vector<int> v;

	// int n; cin >> n;

	// for (int i = 0; i < n ; i++) {
	// 	int x;
	// 	cin >> x;
	// 	v.push_back(x);
	// }

	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n ; i++) {
		// int x;
		// cin >> x;
		// v.push_back(x);
		cin >> v[i];
	}


	cout << "size : " << v.size() << endl;
	for (int i = 0 ; i < v.size(); i++) {
		cout << v[i] << " ";
	}







	return 0;
}