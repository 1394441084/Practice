#include <iostream>
#include <Windows.h>

using namespace std;


int abc(int a, int b) {
	cout << "调用abc函数版本1\n";
	return a + b;
}
int abc(int a, int b, int c) {
	cout << "调用abc函数版本2\n";
	return a + b + c;
}
float abc(float a, float b) {
	cout << "调用abc函数版本3\n";
	return a + b ;
}
//函数名一样,编译器根据参数情况来调用不用的函数,这就是函数重载,C语言不支持!

int main(void) {
	cout << abc(3, 5) << endl;
	cout << abc(3,5,7) << endl;
	cout << abc(3.0f, 1.5) << endl;
	system("pause");
	return 0;
}