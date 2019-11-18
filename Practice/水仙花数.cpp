#include <iostream>
#include <Windows.h>

using namespace std;

//水仙花数:三位数字,三位数的立方和=此数本身
void Number_of_daffodils() {
	int a,b,c;//水仙花
	for (int i = 100; i <= 999; i++) {
		//判断i是否为水仙花
		//123=>c:3
		c = i % 10;
		b = (i / 10) % 10;
		a = i / 100;
		if (a * a * a + b * b * b + c * c * c == i) {
			cout << i << endl;
		}
	}
}
int main(void) {

	Number_of_daffodils();
	system("pause");
	return 0;
}