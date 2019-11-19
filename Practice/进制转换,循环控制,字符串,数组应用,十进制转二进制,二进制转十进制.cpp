#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//输入十进制,转换为二进制输出.
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

//输入一个二进制数,转换为十进制
void Binary_conversion() {
	/*123=1*100(百位)+2*10(十位)+3*1(个位);
	  1011=[1*(2^3)]+[0*(2^2)]+[1*(2^1)]+[1*(2的0次方)]
	  2的0次方是1（任何数的0次方都是1，0的0次方无意义）
	  =1*8+0*4+1*2+1*1=11;*/
	string Binary_system;//二进制
	int Weight_value = 1;//权值
	int Sum_of_powers = 0;//次方和

	cout << "请输入一个二进制数:";
	cin >> Binary_system;

	//字符串.length(),计算字符串长度函数;
	for (int Subscript = Binary_system.length() - 1; Subscript >= 0; Subscript--) {
		int Get_an_integer = Binary_system[Subscript] - '0';//'0'-'0'=0;'1'-'0'=1;字符串转换成整数完成
		//次方和+=取得整数*权值,得到的次方和进行累加,循环结束得十进制数
		Sum_of_powers += Get_an_integer * Weight_value;
		Weight_value *= 2;//权值变化,2^0,2^1,依次
	}
	//所得十进制数,这里打印了
	cout << Sum_of_powers << endl;
}

int main(void) {
	Binary_conversion();
	system("pause");
	return 0;
}