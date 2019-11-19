#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//输入一个整数,转换为二进制输出.
int Base_conversion(){
	while (1) {
		int Decimal_system = 0;//输入的十进制
		int Subscript = 0;//二进制数组的下标
		int Binary_system[32];//输出的二进制
		/*如果把以上定义放到while循环外,会引发数据错误,如打印2得1,再打印3还得1,
		这是以为数据未清空导致的*/
		cout << "请输入一个需要转换为二进制的正整数:";
		cin >> Decimal_system;
		if (Decimal_system <= 0) {
			cout << "请输入正整数\n";
		}
		while (Decimal_system != 0) {//输入的十进制不==0,循环下列语句
			Binary_system[Subscript] = Decimal_system % 2;//二进制[下标++]=十进制%2,如把余数(0|1)存进数组下标
			Decimal_system = Decimal_system / 2;//十进制/2取整赋值给十进制,如173/2=86;条件结束,十进制!=0,再次循环
			Subscript++;//下标前进
		}
		for (Subscript--; Subscript >= 0; Subscript--) {
			//这样就能把二进制从高往低打印了
			cout << Binary_system[Subscript]; //从下标数值最大位往最小位打印,如5往0走
		}
		cout << endl;
	}
}


int main(void) {

	Base_conversion();
	system("pause");
	return 0;
}