#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

/*输入年-月,输出有多少天
闰年的2月有29天
普通闰年:能被4整除但不能被100整除
超级闰年:能被400整除
*/
void Year_month_day() {
	int year = 0;
	int month = 0;
	bool flag;//标记
	int day = 0;
	cout << "输入年和月能知道此月有多少天\n";
	while (cin >> year >> month) {
		if (year % 400 == 0) {
			flag = true;
			cout << "普通闰年\n";
		}
		else if ((year % 4 == 0) && (year != 100)) {
			cout << "超级闰年\n";
		}
		else {
			flag = false;
		}
		switch (month) {
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			day = 31;
			break;
		case 4:case 6:case 9:case 11:
			day = 30;
			break;
		case 2:
			day = flag ? 29 : 28;
			break;
		default:
			cout << "非法月份!\n";
		}
		cout << year << "年" << month << "月有" << day << "天\n";
	}
}

int main(void) {
	Year_month_day();
	system("pause");
	return 0;
}