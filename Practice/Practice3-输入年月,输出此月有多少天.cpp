#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

/*������-��,����ж�����
�����2����29��
��ͨ����:�ܱ�4���������ܱ�100����
��������:�ܱ�400����
*/
void Year_month_day() {
	int year = 0;
	int month = 0;
	bool flag;//���
	int day = 0;
	cout << "�����������֪�������ж�����\n";
	while (cin >> year >> month) {
		if (year % 400 == 0) {
			flag = true;
			cout << "��ͨ����\n";
		}
		else if ((year % 4 == 0) && (year != 100)) {
			cout << "��������\n";
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
			cout << "�Ƿ��·�!\n";
		}
		cout << year << "��" << month << "����" << day << "��\n";
	}
}

int main(void) {
	Year_month_day();
	system("pause");
	return 0;
}