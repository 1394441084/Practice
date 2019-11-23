#include <iostream>
#include <Windows.h>
#include "多模块开发示例.h"

using namespace std;



//计算三个整数的最大值
int sss(int a, int b, int c) {
	
	if (a > b && a > c) {
		return a;
	}
	else if (b > a && b > c) {
		return b;
	}
	else { return c; }
}

int main(void) {
	cout << sun(100) << endl;//10为sun();的实参(实际参数)
	//使用sun(10),就是把10传递到sun(形参),就变成sun(int n=10);
	int a1, b1, c1; a1 = 0; b1 = 0; c1 = 0;
	cout << "输入三个整数,计算最大值\n";
	cin >> a1, b1, c1;
	cout<<sss(a1,b1,c1)<<endl;
	system("pause");
	return 0;
}

