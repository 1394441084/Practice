#include <iostream>
#include <Windows.h>

using namespace std;

//ˮ�ɻ���:��λ����,��λ����������=��������
void Number_of_daffodils() {
	int a,b,c;//ˮ�ɻ�
	for (int i = 100; i <= 999; i++) {
		//�ж�i�Ƿ�Ϊˮ�ɻ�
		//123=>c:3
		c = i % 10;
		b = (i / 10) % 10;
		a = i / 100;
		if (a * a * a + b * b * b + c * c * c == i) {
			cout << i << endl;
		}
	}
}
int main(void) {

	Number_of_daffodils();
	system("pause");
	return 0;
}