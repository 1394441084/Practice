#include <iostream>
#include <Windows.h>

using namespace std;

//ǧ����Ǯ
void A_thousand_chickensand_a_hundred_dollars() {
	/*
	һǧ��ǮҪ��һ��ֻ��,����ÿֻ50Ԫ,ĸ��ÿֻ30Ԫ,С��ÿ��ֻ10Ԫ.
	��:һǧ��Ǯ������һ��ֻ��&&Ҫ����.
	����:(1000/50)=1~20ֻ
	ĸ��:(1000/30)=33ֻ
	С��:(1000/10)=100*3ֻ

	����+ĸ��+С��=100ֻ
	����Ǯ+ĸ��Ǯ+С��Ǯ=1000Ԫ
	*/
	int i = 1;
	for (int Rooster = 1; Rooster <= 20; Rooster++) {//����
		for (int Hens = 1; Hens <= 33; Hens++) {//ĸ��
			for (int Chicken = 1; Chicken <= 99; Chicken++) {//С����һ�λ�10Ԫ��3ֻ
				/*
				��С������3,����1+,ĸ��1+С��3 !=100ֻ;3%3==0;
				����50Ԫ+ĸ��30Ԫ+С��3/3*10Ԫ(3ֻ10Ԫ)==90Ԫ
			     */
				if (Rooster + Hens + Chicken == 100 && Chicken % 3 == 0 
					&& Rooster * 50 + Hens * 30 + Chicken/3 * 10 == 1000 ) {
					cout << "��" << i << "����\n";
					cout << "����+ĸ��+С��=" << Rooster + Hens + Chicken << "ֻ\n";
					cout << "����Ǯ+ĸ��Ǯ+С��Ǯ=" << Rooster*50 + Hens*30 + Chicken/3*10 << "Ǯ\n";
					cout << "����:" << Rooster << "ֻ ĸ��:" << Hens << "ֻ С��:" << Chicken <<"ֻ\n"<<endl;
					i++;
				}
			}
		}
	}
}

//ǧ����Ǯ�Ż�
void A_thousand_chickensand_a_hundred_dollars1() {
	int i = 1;
	for (int Rooster = 1; Rooster <= 20; Rooster++) {//����
		for (int Hens = 1; Hens <= 33; Hens++) {//ĸ��
			int Chicken = 100-Rooster-Hens;//�ó�С����
				if (Chicken % 3 == 0&& Rooster * 50 + Hens * 30 + (Chicken / 3) * 10 == 1000) {
					cout << "��" << i << "����\n";
					cout << "����+ĸ��+С��=" << Rooster + Hens + Chicken << "ֻ\n";
					cout << "����Ǯ+ĸ��Ǯ+С��Ǯ=" << Rooster * 50 + Hens * 30 + Chicken / 3 * 10 << "Ǯ\n";
					cout << "����:" << Rooster << "ֻ ĸ��:" << Hens << "ֻ С��:" << Chicken << "ֻ\n" << endl;
					i++;
				}
		}
	}
}

void A_thousand_chickensand_a_hundred_dollars2() {
	int i = 1;
	for (int Rooster = 1; Rooster <= 20; Rooster++) {//����
		for (int Hens = 1; Hens <= 33; Hens++) {//ĸ��
			for (int Chicken = 3; Chicken <=33; Chicken=Chicken+3) {//С����һ�λ�10Ԫ��3ֻ
				if (Rooster + Hens + Chicken == 100 && Rooster * 50 + Hens * 30 + Chicken/3* 10 == 1000) {
					cout << "��" << i << "����\n";
					cout << "����+ĸ��+С��=" << Rooster + Hens + Chicken << "ֻ\n";
					cout << "����Ǯ+ĸ��Ǯ+С��Ǯ=" << Rooster * 50 + Hens * 30 + Chicken/3*10 << "Ǯ\n";
					cout << "����:" << Rooster << "ֻ ĸ��:" << Hens << "ֻ С��:" << Chicken << "ֻ\n" << endl;
					i++;
				}
			}
		}
	}
}

int main(void) {
	A_thousand_chickensand_a_hundred_dollars2();
	system("pause");
	return 0;
}