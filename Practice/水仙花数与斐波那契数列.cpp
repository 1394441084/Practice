#include <iostream>
#include <Windows.h>

using namespace std;

//水仙花数:三位数字,三位数的立方和=此数本身
void Number_of_daffodils() {
	int a,b,c;//水仙花
	for (int i = 100; i <= 999; i++) {
		//判断i是否为水仙花
		//123=>c:3
		c = i % 10;//123/10,余3
		b = (i / 10) % 10;//123/10,取整12,12/10,余2
		a = i / 100;//123/100=1.23,取整1
		if (a * a * a + b * b * b + c * c * c == i) {
			cout << i << endl;
		}
	}
}

//打印输入数字内的斐波那契数列
int Fibonacci_series() {
	int Fibonacci_series1 = 0;
	unsigned long long a = 1;//后面第二位
	unsigned long long b = 1;//后面第一位
	unsigned long long c ;//后面第零位,输出位
	while (1) {
		cout << "请输入斐波那契数列的个数:";
		cin >> Fibonacci_series1;
		if (Fibonacci_series1 <= 0) {
			cout << "亲的要求可太高了,臣妾无法做到呢.要输出大于0的正数哦.\n";
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
				c = a + b;//零位=后两位之和,零位前进一位
				a = b;//a前进一位
				b = c;//b前进一位
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