#include <iostream>
#include <Windows.h>

using namespace std;


int abc(int a, int b) {
	cout << "����abc�����汾1\n";
	return a + b;
}
int abc(int a, int b, int c) {
	cout << "����abc�����汾2\n";
	return a + b + c;
}
float abc(float a, float b) {
	cout << "����abc�����汾3\n";
	return a + b ;
}
//������һ��,���������ݲ�����������ò��õĺ���,����Ǻ�������,C���Բ�֧��!

int main(void) {
	cout << abc(3, 5) << endl;
	cout << abc(3,5,7) << endl;
	cout << abc(3.0f, 1.5) << endl;
	system("pause");
	return 0;
}