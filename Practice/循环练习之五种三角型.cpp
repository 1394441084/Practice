#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//第一关,行数和每行的个数*,由用户输入;
void Rows_and_columns() {
	int rows = 0;//Number_of_rows行数
	int columns = 0; //Number_of_columns列数
	cout << "请输入需打印的行数:";
	cin >> rows;
	cout << "请输入需打印列数:";
	cin >> columns;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}

//第二关,输入行数,输出正半三角型
void Semi_positive_triangle() {
	int rows = 0;
	cout << "请输入打印行数:";
	cin >> rows;
	/*
	i的个数=*的个数(i+1)
	第0次  *
	第1次  **
	第2次  ***
	*/
	for (int i = 0; i <rows; i++) {
		for (int j = 0; j < i+1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}

//第三关,输入行数,输出倒半三角型
void Semi_inverted_triangle() {
	int rows = 0;
	cout << "请输入打印行数:";
	cin >> rows;
	/*
	 rows=3 i=0  rows-i ***
	 rows=3 i=1		    **
	 rows=3 i=2         *	
	*/
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j <rows-i ; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

//第四关,输入行数,输出完整正三角型
void Triangular_type() {
	int rows = 0;
	cout << "请输入打印行数:";
	cin >> rows;
	/*
	  *号的个数			空格的个数
	  第一行 1			(rows-1)
	  第二行 3			(rows-2)
	  第三行 5			(rows-3)
	  第四行 7			(rows-4)
	  第i行  2*i-1		rows-i//参考第二关
	*/
	
	for (int i = 0; i <= rows; i++) {
		for (int j = 0; j <= rows-i; j++) {
			cout << " ";
		}
		for (int n = 0; n < i*2-1; n++) {
			cout << "*";
		}
		cout << endl;
	}
}

//第五关,输入行数,输出完整倒三角型
void Inverted_triangle_type() {
	int rows = 0;
	cout << "请输入打印行数:";
	cin >> rows;
	for (int i = 0; i <rows; i++) {
		for (int j = 0; j <i+1; j++) {
			cout << " ";
		}
		for (int n = 0; n <rows*2-i*2-1; n++) {
			cout << "*";
		}
		cout << "\n";
	}
}

int main(void) {
	Inverted_triangle_type();
	system("pause");
	return 0;
}