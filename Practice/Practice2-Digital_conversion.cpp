#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <Windows.h>

using namespace std;

//C++用数组把数字0-10转换为大写
void Array_method()
{
	int Subscript = 0;
	string Figures[11] = { "零","壹","贰","叁","肆","伍","陆","柒","捌","玖","拾" };
	printf("请输入数字0-10\n");
	while (cin >> Subscript) {
		if (Subscript <= 10) {
			cout << Figures[Subscript] << endl;
		}
		else {
			cout << "输入错误,请输入数字0-10\n";
		}
	}
}
//C++用switch方法来进行转换
void switch_Method() {
	int Figures = 0;//数字
	int Times = 0;//次数
	cout << "请输入一个0-10的数字进行转换\n";
	while (cin >> Figures) {
		switch (Figures) {
		case 0:
			cout << Figures << "=>零\n";
			break;
		case 1:
			cout << Figures << "=>壹\n";
			break;
		case 2:
			cout << Figures << "=>贰\n";
			break;
		case 3:
			cout << Figures << "=>叁\n";
			break;
		case 4:
			cout << Figures << "=>肆\n";
			break;
		case 5:
			cout << Figures << "=>伍\n";
			break;
		case 6:
			cout << Figures << "=>陆\n";
			break;
		case 7:
			cout << Figures << "=>柒\n";
			break;
		case 8:
			cout << Figures << "=>捌\n";
			break;
		case 9:
			cout << Figures << "=>玖\n";
			break;
		case 10:
			cout << Figures << "=>拾\n";
			break;
		default:
			cout << "客官别闹,请您输入0-10的数字.\n";
			Times++;
			if (Times > 3) {
				cout << "我很忙的,请不要再错了.\n";
			}
		}
	}
}

int main(void) {
	//把数字0-10转换为大写
	//用数组方法进行转换C++
	Array_method();
	//用switch方法来进行转换C++
	switch_Method();
	system("pause");
	return 0;
}