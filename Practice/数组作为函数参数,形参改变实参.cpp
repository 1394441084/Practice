#include <iostream>
#include <Windows.h>

using namespace std;

//�ɼ�
void Bchievementprint(int achievement[],int n) {//�βα�������ָ��,ռ��int4�ֽ�
	for (int i = 0; i < n; i++) {
		cout << "��" << i + 1 << "�ųɼ�:" << achievement[i] << endl;
	}
}

//�ӷ�,��ÿ�ſγ̶���bonus_points��
void Bonus_points(int achievement[], int n,int bonus_points) {
	for (int i = 0; i < n; i++) {
		achievement[i] += bonus_points;
	}
}

int main(void) {
	int achievement[3] = { 60,70,80 };//�ɼ�
	cout << achievement[1]<< endl;
	Bchievementprint(achievement,3);
	//��������Ϊ�����Ĳ���ʱ,��������п����޸���������ֵ
	Bonus_points(achievement,3,10);
	cout << "ԭ����"<<achievement[2]<< endl;
	Bchievementprint(achievement, 3);
	system("pause");
	return 0;
}