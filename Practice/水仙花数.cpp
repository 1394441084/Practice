#include <iostream>
#include <Windows.h>

using namespace std;

//ˮ�ɻ���:��λ����,��λ����������=��������
void Number_of_daffodils() {
	int a,b,c;//ˮ�ɻ�
	for (int i = 100; i <= 999; i++) {
		//�ж�i�Ƿ�Ϊˮ�ɻ�
		//123=>c:3
		c = i % 10;//123/10,��3
		b = (i / 10) % 10;//123/10,ȡ��12,12/10,��2
		a = i / 100;//123/100=1.23,ȡ��1
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