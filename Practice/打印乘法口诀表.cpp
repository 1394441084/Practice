#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>//setw();��ͷ�ļ�

using namespace std;

//��ӡ�˷��ھ���
void Table_of_positive_tips() {
	int w ;
	for (int i = 1; i <=9; i++) {
		for (int j = 1; j <=i; j++) {
			//setw(2)����Ľ��������λ�Ͱ���λ�����,��_1����
			//std::left,�������
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