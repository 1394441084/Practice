#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//�����ַ���,��ת�ַ������
void Reverse_string() {
	string String;
	int i,j;
	
	cout << "��������Ҫ��ת���ַ���:\n";
	cin >> String;

	i = 0;//�±��ͷ
	j = String.length() - 1;//�±��β
	while (i<j) {//���ַ���:123456789
		char tmp = String[i];//String[0]=1�ݴ浽tmp��,
		String[i] = String[j];//String[i]=9
		String[j] = tmp;//String[j] = 1;
		i++;//ͷǰ��,
		j--;//β����,������������ѭ��,5��λ��û�仯��
	}
	cout << String << endl;
}

int main(void) {
	Reverse_string();
	system("pause");
	return 0;
}