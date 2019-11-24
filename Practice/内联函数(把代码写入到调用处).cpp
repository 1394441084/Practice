#include <iostream>
#include <Windows.h>

using namespace std;

/*
函数体每次调用都会开辟栈空间,在计算机底层做许多准备工作(保护原执行环境,切换到新环境),产生"时间开销"
内联函数(inline):将函数体写入调用处,避免函数调用的开销,获得更快的"速度"
内联函数的缺点:消耗main函数的栈空间,底层代码会变得"臃肿"
使用场合:函数体代码简单,只用几条执行语句或函数使用频率高,如一个循环中使用千万次
*/

//内联函数示例
inline int AB(int a,int b) {
	return a + b;
}

int main(void) {

	cout << AB(3, 5) << endl;

	system("pause");
	return 0;
}