#include <iostream>
#include <Windows.h>

using namespace std;
/*
递归函数:直接或者间接调用函数本身
缺点:开销大,效率低
*/

//斐波那契数列,递归函数
unsigned long long b(int n) {
	unsigned long long bb;
	if (n == 1 || n == 2) {
		return 1;//结束条件
	}
	bb = b(n - 1) + b(n + 1);
	return bb;
}

//梦境
void Dream(int n) {
	if (n > 5) { return; }
	cout << "进入第" << n << "重梦境\n";
	//这里分配一个栈空间,重新循环Dream();函数,直到遇到结束条件,
	Dream(n + 1);
	//结束条件成立return;则跳转到调用处的下一条语句.
	cout << "退出第" << n << "重梦境\n";
	//最后一个栈空间先往下执行代码,释放栈空间,重叠的梦境依次破灭(释放)
}

int main(void) {
	/*
	int n;
	cout << "请输入序号:";
	cin >> n;
	cout << b(n) << endl;
	*/
	Dream(1);
	system("pause");
	return 0;
}