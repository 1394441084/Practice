#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;
//�����ַ���(һ�仰),ͳ�ƶ��ٵ���
void Number_of_words() {//���ʸ���
	/*	   I LOVE YOU '\0'
 ���������ո� �����ǿո���� */
	while (1) {
		char line[256];//�����ַ���
		int i = 0;//�±�
		int number = 0;//����
		cout << "��������Ҫͳ�Ƶ��ʸ�����Ӣ���ַ���:\n";
		gets_s(line, sizeof(line));
		while (line[i] == ' ') i++;//�����ո�
		while (line[i]) {
			while (line[i] != ' ' && line[i]) i++;//��������
			while (line[i] == ' ') i++;//�����ո�
			number++;
		}
		cout << "һ����" << number << "����\n";
	}
}

//��ת�ַ������
void Reverse_string_output() {
	/*
	123 456 789
	987 654 321 ���䷴����
	789 456 123 ����Ϊ��λ������
	*/
	string string0;
	int i, j; i = 0; j = 0;
	while (1) {
		cout << "��������Ҫ��ת���ַ���:\n";
		getline(cin, string0);//����һ���ַ���
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