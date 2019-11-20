#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;
//输入字符串(一句话),统计多少单词
void Number_of_words() {//单词个数
	/*	   I LOVE YOU '\0'
 跳过连续空格 跳过非空格组合 */
	while (1) {
		char line[256];//输入字符串
		int i = 0;//下标
		int number = 0;//个数
		cout << "请输入需要统计单词个数的英文字符串:\n";
		gets_s(line, sizeof(line));
		while (line[i] == ' ') i++;//跳过空格
		while (line[i]) {
			while (line[i] != ' ' && line[i]) i++;//跳过单词
			while (line[i] == ' ') i++;//跳过空格
			number++;
		}
		cout << "一共有" << number << "单词\n";
	}
}

//逆转字符串输出
void Reverse_string_output() {
	/*
	123 456 789
	987 654 321 整句反过来
	789 456 123 单词为单位反过来
	*/
	string string0;
	int i, j; i = 0; j = 0;
	while (1) {
		cout << "请输入需要逆转的字符串:\n";
		getline(cin, string0);//输入一行字符串
		j = string0.length() - 1;
		while (i < j) {
			char c = string0[i];
			string0[i] = string0[j];
			string0[j] = c;
			i++; j--;
		}
		cout << string0 << endl;
		i = 0;
		while (string0[i]) {
			while (string0[i] == ' ')i++;
			j = i;
			while (string0[j] && string0[j] != ' ')j++;
			for (int k1 = i, k2 = j - 1; k1 < k2; k1++, k2--) {
				char c = string0[k1]; string0[k1] = string0[k2]; string0[k2] = c;
			}
			i = j;
		}
		cout << string0 << endl;
	}
}

int main(void) {
	Reverse_string_output();
	system("pause");
	return 0;
}