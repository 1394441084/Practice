#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <Windows.h>

using namespace std;

//C++�����������0-10ת��Ϊ��д
void Array_method()
{
	int Subscript = 0;
	string Figures[11] = { "��","Ҽ","��","��","��","��","½","��","��","��","ʰ" };
	printf("����������0-10\n");
	while (cin >> Subscript) {
		if (Subscript <= 10) {
			cout << Figures[Subscript] << endl;
		}
		else {
			cout << "�������,����������0-10\n";
		}
	}
}
//C++��switch����������ת��
void switch_Method() {
	int Figures = 0;//����
	int Times = 0;//����
	cout << "������һ��0-10�����ֽ���ת��\n";
	while (cin >> Figures) {
		switch (Figures) {
		case 0:
			cout << Figures << "=>��\n";
			break;
		case 1:
			cout << Figures << "=>Ҽ\n";
			break;
		case 2:
			cout << Figures << "=>��\n";
			break;
		case 3:
			cout << Figures << "=>��\n";
			break;
		case 4:
			cout << Figures << "=>��\n";
			break;
		case 5:
			cout << Figures << "=>��\n";
			break;
		case 6:
			cout << Figures << "=>½\n";
			break;
		case 7:
			cout << Figures << "=>��\n";
			break;
		case 8:
			cout << Figures << "=>��\n";
			break;
		case 9:
			cout << Figures << "=>��\n";
			break;
		case 10:
			cout << Figures << "=>ʰ\n";
			break;
		default:
			cout << "�͹ٱ���,��������0-10������.\n";
			Times++;
			if (Times > 3) {
				cout << "�Һ�æ��,�벻Ҫ�ٴ���.\n";
			}
		}
	}
}

int main(void) {
	//������0-10ת��Ϊ��д
	//�����鷽������ת��C++
	Array_method();
	//��switch����������ת��C++
	switch_Method();
	system("pause");
	return 0;
}