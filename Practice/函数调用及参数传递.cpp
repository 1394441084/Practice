#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//����н��(��н��,��н)
void Pay_rise(int current_salary, int multiple_salary) {
	current_salary += multiple_salary;
	cout << "��н��:" << current_salary << endl;
}


int main(void) {
	int x = 20000;
	cout << "��нǰ:" << x << endl;
	Pay_rise(x,5000);
	cout << "��н��:" << x << endl;

	system("pause");
	return 0;
}