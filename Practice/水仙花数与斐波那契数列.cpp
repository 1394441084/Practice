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

//��ӡ���������ڵ�쳲���������
int Fibonacci_series() {
	int Fibonacci_series1 = 0;
	unsigned long long a = 1;//����ڶ�λ
	unsigned long long b = 1;//�����һλ
	unsigned long long c ;//�������λ,���λ
	while (1) {
		cout << "������쳲��������еĸ���:";
		cin >> Fibonacci_series1;
		if (Fibonacci_series1 <= 0) {
			cout << "�׵�Ҫ���̫����,����޷�������.Ҫ�������0������Ŷ.\n";
			//return 1;
		}
		if (Fibonacci_series1 == 1) {
			cout << Fibonacci_series1 << endl;
			//return 0;
		}
		if (Fibonacci_series1 == 2) {
			cout << "1 1" << endl;
			//return 0;
		}
		if (Fibonacci_series1 >= 3) {
			cout << "1 1 ";
			for (int i = 3; i <= Fibonacci_series1; i++) {
				c = a + b;//��λ=����λ֮��,��λǰ��һλ
				a = b;//aǰ��һλ
				b = c;//bǰ��һλ
				cout << c << " ";
			}
			cout << endl;
		}
	}
}

int main(void) {
	Fibonacci_series();
	system("pause");
	return 0;
}