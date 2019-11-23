#include <iostream>
#include <Windows.h>

using namespace std;

//成绩
void Bchievementprint(int achievement[],int n) {//形参本质上是指针,占用int4字节
	for (int i = 0; i < n; i++) {
		cout << "第" << i + 1 << "门成绩:" << achievement[i] << endl;
	}
}

//加分,把每门课程都加bonus_points分
void Bonus_points(int achievement[], int n,int bonus_points) {
	for (int i = 0; i < n; i++) {
		achievement[i] += bonus_points;
	}
}

int main(void) {
	int achievement[3] = { 60,70,80 };//成绩
	cout << achievement[1]<< endl;
	Bchievementprint(achievement,3);
	//把数组作为函数的参数时,这个函数中可以修改这个数组的值
	Bonus_points(achievement,3,10);
	cout << "原数组"<<achievement[2]<< endl;
	Bchievementprint(achievement, 3);
	system("pause");
	return 0;
}