#include <iostream>
#include <Windows.h>
#include "��ģ�鿪��ʾ��.h"

using namespace std;



//�����������������ֵ
int sss(int a, int b, int c) {
	
	if (a > b && a > c) {
		return a;
	}
	else if (b > a && b > c) {
		return b;
	}
	else { return c; }
}

int main(void) {
	cout << sun(100) << endl;//10Ϊsun();��ʵ��(ʵ�ʲ���)
	//ʹ��sun(10),���ǰ�10���ݵ�sun(�β�),�ͱ��sun(int n=10);
	int a1, b1, c1; a1 = 0; b1 = 0; c1 = 0;
	cout << "������������,�������ֵ\n";
	cin >> a1, b1, c1;
	cout<<sss(a1,b1,c1)<<endl;
	system("pause");
	return 0;
}

