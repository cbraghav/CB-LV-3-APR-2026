#include <bits/stdc++.h>
using namespace std;

// int x = 20;

// namespace raghav {
// int x = 30;
// }


int main() {

	// int x = 1;

	// cout << x << endl;

	// cout << raghav::x << endl;
	// cout << ::x << endl;

	// cout << x << endl;
	// {
	// 	int y = 5;
	// 	cout << x << endl;
	// 	cout << y << endl;
	// }
	// cout << y << endl;

	// int n = 5;
	// for (int r = 1; r <= n; r++) {
	// 	// cout << " row " << r << " -> ";
	// 	int col_cnt = n;
	// 	for (int c = 1 ; c <= col_cnt; c++)
	// 	{
	// 		cout << c << " ";
	// 	}
	// 	cout << endl;
	// }

//1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
	// int n = 5;
	// int row_cnt = n;
	// for (int r = 1; r <= row_cnt; r++) {
	// 	// cout << " row " << r << " -> ";
	// 	int col_cnt = r;
	// 	for (int c = 1 ; c <= col_cnt; c++)
	// 	{
	// 		cout << c << " ";
	// 	}
	// 	cout << endl;
	// }



	/*
	1 2 3 4 5
	1 2 3 4
	1 2 3
	1 2
	1
	*/

	// int n = 5;
	// int row_cnt = n;
	// for (int r = 1; r <= row_cnt; r++) {
	// 	// cout << " row " << r << " -> ";
	// 	int col_cnt = row_cnt - r + 1;
	// 	for (int c = 1 ; c <= col_cnt; c++)
	// 	{
	// 		cout << c << " ";
	// 	}
	// 	cout << endl;
	// }

	// int n = 5;
	// for (int r = n; r >= 1; r--) {
	// 	for (int c = 1; c <= r ; c++) {
	// 		cout << c << " ";
	// 	}
	// 	cout << endl;
	// }

	/*
	1 1 1 1 1
	2 2 2 2 2
	3 3 3 3 3
	4 4 4 4 4
	5 5 5 5 5
	*/

	// int n = 5;
	// int row_cnt = n;
	// for (int r = 1; r <= row_cnt; r++) {
	// 	int col_cnt = row_cnt;
	// 	for (int c = 1 ; c <= col_cnt; c++)
	// 	{
	// 		cout << r 	<< " ";
	// 	}
	// 	cout << endl;
	// }


	/*
	1
	2 1
	3 2 1
	4 3 2 1
	5 4 3 2 1
	*/

	// int n = 5;
	// int row_cnt = n;
	// for (int r = 1; r <= row_cnt; r++) {
	// 	int col_cnt = r;
	// 	// for (int c = 1 ; c <= col_cnt; c++)
	// 	for (int c = col_cnt ; c >= 1; c--)
	// 	{
	// 		cout << c 	<< " ";
	// 	}
	// 	cout << endl;
	// }



	/*
	* * * * 1
	* * * 1 2
	* * 1 2 3
	* 1 2 3 4
	1 2 3 4 5
	*/
	// int n = 5;
	// int row_cnt = n;
	// for (int r = 1; r <= row_cnt; r++) {
	// 	// print stars
	// 	int col_cnt1 = row_cnt - r;
	// 	for (int c = 1 ; c <= col_cnt1; c++)
	// 	{
	// 		cout << "*" 	<< " ";
	// 	}

	// 	// print numbers
	// 	int col_cnt2 = r;
	// 	for (int c = 1 ; c <= col_cnt2; c++)
	// 	{
	// 		cout << c 	<< " ";
	// 	}
	// 	cout << endl;
	// }


	/*
	1
	1 2
	1 2 3
	1 2 3 4
	1 2 3 4 5
	1 2 3 4
	1 2 3
	1 2
	1
	*/

	// int n = 9;

	// // increase
	// int row_cnt = n / 2 + 1;
	// for (int r = 1; r <= row_cnt; r++) {
	// 	// print numbers
	// 	int col_cnt = r;
	// 	for (int c = 1 ; c <= col_cnt; c++)
	// 	{
	// 		cout << c 	<< " ";
	// 	}
	// 	cout << endl;
	// }

	// // decrease
	// row_cnt = n / 2;
	// for (int r = 1; r <= row_cnt; r++) {
	// 	// cout << " row " << r << " -> ";
	// 	int col_cnt = row_cnt - r + 1;
	// 	for (int c = 1 ; c <= col_cnt; c++)
	// 	{
	// 		cout << c << " ";
	// 	}
	// 	cout << endl;
	// }



	/*

	1 2 3 4 5 5 4 3 2 1
	1 2 3 4 * * 4 3 2 1
	1 2 3 * * * * 3 2 1
	1 2 * * * * * * 2 1
	1 * * * * * * * * 1
	1 * * * * * * * * 1
	1 2 * * * * * * 2 1
	1 2 3 * * * * 3 2 1
	1 2 3 4 * * 4 3 2 1
	1 2 3 4 5 5 4 3 2 1
	*/
	// int n = 10;

	// // decrease
	// int row_cnt = n / 2 ;
	// for (int r = 1; r <= row_cnt; r++) {
	// 	// print numbers
	// 	int col_cnt = row_cnt - r + 1;
	// 	for (int c = 1 ; c <= col_cnt; c++)
	// 	{
	// 		cout << c 	<< " ";
	// 	}

	// 	// print star
	// 	col_cnt = 2 * (r - 1);
	// 	for (int c = 1 ; c <= col_cnt; c++)
	// 	{
	// 		cout << "*"	<< " ";
	// 	}

	// 	// print numbers -> reverse of above numbers
	// 	col_cnt = row_cnt - r + 1;
	// 	// for (int c = 1 ; c <= col_cnt; c++)
	// 	for (int c = col_cnt; c >= 1; c--)
	// 	{
	// 		cout << c 	<< " ";
	// 	}
	// 	cout << endl;
	// }
	// // increase
	// row_cnt = n / 2 ;
	// // for (int r = 1; r <= row_cnt; r++)
	// for (int r = row_cnt ; r >= 1; r--)
	// {
	// 	// print numbers
	// 	int col_cnt = row_cnt - r + 1;
	// 	for (int c = 1 ; c <= col_cnt; c++)
	// 	{
	// 		cout << c 	<< " ";
	// 	}

	// 	// print star
	// 	col_cnt = 2 * (r - 1);
	// 	for (int c = 1 ; c <= col_cnt; c++)
	// 	{
	// 		cout << "*"	<< " ";
	// 	}

	// 	// print numbers -> reverse of above numbers
	// 	col_cnt = row_cnt - r + 1;
	// 	// for (int c = 1 ; c <= col_cnt; c++)
	// 	for (int c = col_cnt; c >= 1; c--)
	// 	{
	// 		cout << c 	<< " ";
	// 	}
	// 	cout << endl;
	// }



	/*
	1 2 3 4 5 4 3 2 1
	1 2 3 4 * 4 3 2 1
	1 2 3 * * * 3 2 1
	1 2 * * * * * 2 1
	1 * * * * * * * 1
	1 2 * * * * * 2 1
	1 2 3 * * * 3 2 1
	1 2 3 4 * 4 3 2 1
	1 2 3 4 5 4 3 2 1

	*/


	// int n = 10;

	// // decrease
	// int row_cnt = n / 2 ;
	// for (int r = 1; r <= row_cnt; r++) {
	// 	// print numbers
	// 	int col_cnt = row_cnt - r + 1;
	// 	for (int c = 1 ; c <= col_cnt; c++)
	// 	{
	// 		cout << c 	<< " ";
	// 	}

	// 	// print star
	// 	col_cnt = 2 * (r - 1);
	// 	for (int c = 1 ; c <= col_cnt - 1; c++)
	// 	{
	// 		cout << "*"	<< " ";
	// 	}

	// 	// print numbers -> reverse of above numbers
	// 	col_cnt = row_cnt - r + 1;
	// 	// for (int c = 1 ; c <= col_cnt; c++)
	// 	if (r == 1) {
	// 		col_cnt--;
	// 	}
	// 	for (int c = col_cnt; c >= 1; c--)
	// 	{

	// 		cout << c 	<< " ";
	// 	}
	// 	cout << endl;
	// }
	// // increase
	// row_cnt = n / 2 ;
	// // for (int r = 1; r <= row_cnt; r++)
	// for (int r = row_cnt - 1 ; r >= 1; r--)
	// {
	// 	// print numbers
	// 	int col_cnt = row_cnt - r + 1;
	// 	for (int c = 1 ; c <= col_cnt; c++)
	// 	{
	// 		cout << c 	<< " ";
	// 	}

	// 	// print star
	// 	col_cnt = 2 * (r - 1);
	// 	for (int c = 1 ; c <= col_cnt - 1; c++)
	// 	{
	// 		cout << "*"	<< " ";
	// 	}

	// 	// print numbers -> reverse of above numbers
	// 	col_cnt = row_cnt - r + 1;
	// 	if (r == 1) {
	// 		col_cnt--;
	// 	}
	// 	// for (int c = 1 ; c <= col_cnt; c++)
	// 	for (int c = col_cnt ; c >= 1; c--)
	// 	{
	// 		cout << c 	<< " ";
	// 	}
	// 	cout << endl;
	// }


	/*

	        1
	      1 2 1
	    1 2 3 2 1
	  1 2 3 4 3 2 1
	1 2 3 4 5 4 3 2 1
	  1 2 3 4 3 2 1
	    1 2 3 2 1
	      1 2 1
	        1
	*/


	int n = 9;

	int row_cnt  = n / 2 + 1;

	for (int r = 1 ; r <= row_cnt; r++) {
		// spaces
		int col_cnt = row_cnt - r;
		for (int c = 1; c <= col_cnt; c++) {
			cout << " " << " ";
		}
		// numbers inc
		col_cnt = r;
		for (int c = 1; c <= col_cnt; c++) {
			cout << c << " ";
		}
		// numbers dec
		col_cnt = r - 1;
		// for (int c = 1; c <= col_cnt; c++) {
		for (int c = col_cnt ; c >= 1; c--) {
			cout << c << " ";
		}
		cout << endl;
	}


	// for (int r = 1 ; r <= row_cnt; r++)
	for (int r = row_cnt - 1 ; r >= 1; r--)
	{
		// spaces
		int col_cnt = row_cnt - r;
		for (int c = 1; c <= col_cnt; c++) {
			cout << " " << " ";
		}
		// numbers inc
		col_cnt = r;
		for (int c = 1; c <= col_cnt; c++) {
			cout << c << " ";
		}
		// numbers dec
		col_cnt = r - 1;
		// for (int c = 1; c <= col_cnt; c++) {
		for (int c = col_cnt ; c >= 1; c--) {
			cout << c << " ";
		}
		cout << endl;
	}




	return 0;
}