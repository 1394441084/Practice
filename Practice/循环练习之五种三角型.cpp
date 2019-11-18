#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//��һ��,������ÿ�еĸ���*,���û�����;
void Rows_and_columns() {
	int rows = 0;//Number_of_rows����
	int columns = 0; //Number_of_columns����
	cout << "���������ӡ������:";
	cin >> rows;
	cout << "���������ӡ����:";
	cin >> columns;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}

//�ڶ���,��������,�������������
void Semi_positive_triangle() {
	int rows = 0;
	cout << "�������ӡ����:";
	cin >> rows;
	/*
	i�ĸ���=*�ĸ���(i+1)
	��0��  *
	��1��  **
	��2��  ***
	*/
	for (int i = 0; i <rows; i++) {
		for (int j = 0; j < i+1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}

//������,��������,�������������
void Semi_inverted_triangle() {
	int rows = 0;
	cout << "�������ӡ����:";
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

//���Ĺ�,��������,���������������
void Triangular_type() {
	int rows = 0;
	cout << "�������ӡ����:";
	cin >> rows;
	/*
	  *�ŵĸ���			�ո�ĸ���
	  ��һ�� 1			(rows-1)
	  �ڶ��� 3			(rows-2)
	  ������ 5			(rows-3)
	  ������ 7			(rows-4)
	  ��i��  2*i-1		rows-i//�ο��ڶ���
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

//�����,��������,���������������
void Inverted_triangle_type() {
	int rows = 0;
	cout << "�������ӡ����:";
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