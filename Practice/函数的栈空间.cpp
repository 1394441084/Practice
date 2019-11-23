#include <iostream>
#include <Windows.h>

using namespace std;

/*
void bug() {
	//运行时因栈帧空间溢出而崩溃
	char buff[2000000];//2M
	cout << (int)buff[sizeof(buff) - 1] << endl;
}
*/

//函数栈帧地址示例
/*
	栈空间
该函数的本地变量    更早函数的栈帧		高地址	n=3 buff:6E6894 这是地址不关啥的事
该函数的本地变量    调用者函数的栈帧			n=2	buff:6CD270 (6E6894-6CD270=19624)
该函数的本地变量    被调用函数的栈帧	低地址	n=1	buff:6B3C4C (19624/1024=20)
函数被调用一次,栈空间就会开辟一块内存空间给函数使用,这块内存空间大小=此函数的空间大小(名为函数栈帧)
函数体内的变量会先后进入栈帧空间,函数调用完会释放(清空)栈帧.
*/
void bug0(int n){//int n进栈帧空间
	//9次就爆掉了
	char buff[1024 * 100];//栈空间分配了空间给函数后,这100k就进栈帧空间
	printf("n=%d\n", n);
	printf("buff:%X\n", buff);//把数组的地址打印出来
	if (n == 1) { return; }
	bug0(n - 1);//递归函数
}

int main(void) {
	bug0(3);
	system("pause");
	return 0;
}