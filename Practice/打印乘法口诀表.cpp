#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>//setw();的头文件

using namespace std;

//打印乘法口诀表
void Table_of_positive_tips() {
	int w ;
	for (int i = 1; i <=9; i++) {
		for (int j = 1; j <=i; j++) {
			//setw(2)后面的结果不超两位就按两位来输出,像_1这样
			//std::left,往左对齐
			w = (j == 1) ? 2 : 3;
				cout << i << "*" << j << "=" << setw(w) << std::left << i * j << " ";
		}
		cout << endl;
	}
}

int main(void){
	Table_of_positive_tips();
	system("pause");
	return 0;
}