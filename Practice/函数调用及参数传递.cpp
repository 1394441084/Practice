#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//函数薪资(现薪资,加薪)
void Pay_rise(int current_salary, int multiple_salary) {
	current_salary += multiple_salary;
	cout << "加薪中:" << current_salary << endl;
}


int main(void) {
	int x = 20000;
	cout << "加薪前:" << x << endl;
	Pay_rise(x,5000);
	cout << "加薪后:" << x << endl;

	system("pause");
	return 0;
}