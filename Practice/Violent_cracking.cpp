#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;
//在控制台这样 ?.exe | ?.exe ,两文件要在同一文件夹
void Violent_cracking() {
	string Account_number = "?????";//账号
	char Possible[64];//10+26+26+1,存放密码的可能,每位有63可能;
	char Temporary_password[32];//存放临时密码;
	int Subscript = 0;//存放数组下标;

	for (int Figures = 0; Figures < 10; Figures++) {//Figures数字
		Possible[Subscript++] = '0' + Figures;//'3'='0'+3;
	}
	/*
	for (int Letters = 0; Letters < 26; Letters++) {
		Possible[Subscript++] = 'a' + Letters;//Letters字母
	}

	for (int Letters = 0; Letters < 26; Letters++) {
		Possible[Subscript++] = 'A' + Letters;//Letters字母
	}

	Possible[Subscript++] = '_';
	*/
	Possible[Subscript] = '\0';

	//Password密码
	for (int Password1 = 0; Password1 < Subscript; Password1++) {//第一位密码
		for (int Password2 = 0; Password2 < Subscript; Password2++) {
			for (int Password3 = 0; Password3 < Subscript; Password3++) {
				for (int Password4 = 0; Password4 < Subscript; Password4++) {
					for (int Password5 = 0; Password5 < Subscript; Password5++) {
						for (int Password6 = 0; Password6 < Subscript; Password6++) {
							Temporary_password[0] = Possible[Password1];
							Temporary_password[1] = Possible[Password2];
							Temporary_password[2] = Possible[Password3];
							Temporary_password[3] = Possible[Password4];
							Temporary_password[4] = Possible[Password5];
							Temporary_password[5] = Possible[Password6];
							Temporary_password[6] = '\0';
							cout << Account_number << endl;
							cout << Temporary_password << endl;
							Sleep(10);
						}
					}
				}
			}
		}
	}
	cout << "破解失败!" << endl;
}

int main(void) {
	Violent_cracking();
	system("pause");
	return 0;
}