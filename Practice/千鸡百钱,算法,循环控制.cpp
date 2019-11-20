#include <iostream>
#include <Windows.h>

using namespace std;

//千鸡百钱
void A_thousand_chickensand_a_hundred_dollars() {
	/*
	一千块钱要买一百只鸡,公鸡每只50元,母鸡每只30元,小鸡每三只10元.
	问:一千快钱必须买一百只鸡&&要花完.
	公鸡:(1000/50)=1~20只
	母鸡:(1000/30)=33只
	小鸡:(1000/10)=100*3只

	公鸡+母鸡+小鸡=100只
	公鸡钱+母鸡钱+小鸡钱=1000元
	*/
	int i = 1;
	for (int Rooster = 1; Rooster <= 20; Rooster++) {//公鸡
		for (int Hens = 1; Hens <= 33; Hens++) {//母鸡
			for (int Chicken = 1; Chicken <= 99; Chicken++) {//小鸡买一次花10元得3只
				/*
				如小鸡数到3,公鸡1+,母鸡1+小鸡3 !=100只;3%3==0;
				公鸡50元+母鸡30元+小鸡3/3*10元(3只10元)==90元
			     */
				if (Rooster + Hens + Chicken == 100 && Chicken % 3 == 0 
					&& Rooster * 50 + Hens * 30 + Chicken/3 * 10 == 1000 ) {
					cout << "第" << i << "种买法\n";
					cout << "公鸡+母鸡+小鸡=" << Rooster + Hens + Chicken << "只\n";
					cout << "公鸡钱+母鸡钱+小鸡钱=" << Rooster*50 + Hens*30 + Chicken/3*10 << "钱\n";
					cout << "公鸡:" << Rooster << "只 母鸡:" << Hens << "只 小鸡:" << Chicken <<"只\n"<<endl;
					i++;
				}
			}
		}
	}
}

//千鸡百钱优化
void A_thousand_chickensand_a_hundred_dollars1() {
	int i = 1;
	for (int Rooster = 1; Rooster <= 20; Rooster++) {//公鸡
		for (int Hens = 1; Hens <= 33; Hens++) {//母鸡
			int Chicken = 100-Rooster-Hens;//得出小鸡数
				if (Chicken % 3 == 0&& Rooster * 50 + Hens * 30 + (Chicken / 3) * 10 == 1000) {
					cout << "第" << i << "种买法\n";
					cout << "公鸡+母鸡+小鸡=" << Rooster + Hens + Chicken << "只\n";
					cout << "公鸡钱+母鸡钱+小鸡钱=" << Rooster * 50 + Hens * 30 + Chicken / 3 * 10 << "钱\n";
					cout << "公鸡:" << Rooster << "只 母鸡:" << Hens << "只 小鸡:" << Chicken << "只\n" << endl;
					i++;
				}
		}
	}
}

void A_thousand_chickensand_a_hundred_dollars2() {
	int i = 1;
	for (int Rooster = 1; Rooster <= 20; Rooster++) {//公鸡
		for (int Hens = 1; Hens <= 33; Hens++) {//母鸡
			for (int Chicken = 3; Chicken <=33; Chicken=Chicken+3) {//小鸡买一次花10元得3只
				if (Rooster + Hens + Chicken == 100 && Rooster * 50 + Hens * 30 + Chicken/3* 10 == 1000) {
					cout << "第" << i << "种买法\n";
					cout << "公鸡+母鸡+小鸡=" << Rooster + Hens + Chicken << "只\n";
					cout << "公鸡钱+母鸡钱+小鸡钱=" << Rooster * 50 + Hens * 30 + Chicken/3*10 << "钱\n";
					cout << "公鸡:" << Rooster << "只 母鸡:" << Hens << "只 小鸡:" << Chicken << "只\n" << endl;
					i++;
				}
			}
		}
	}
}

int main(void) {
	A_thousand_chickensand_a_hundred_dollars2();
	system("pause");
	return 0;
}