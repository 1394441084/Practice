#include <iostream>
#include <Windows.h>

using namespace std;
/*
�ݹ麯��:ֱ�ӻ��߼�ӵ��ú�������
ȱ��:������,Ч�ʵ�
*/

//쳲���������,�ݹ麯��
unsigned long long b(int n) {
	unsigned long long bb;
	if (n == 1 || n == 2) {
		return 1;//��������
	}
	bb = b(n - 1) + b(n + 1);
	return bb;
}

//�ξ�
void Dream(int n) {
	if (n > 5) { return; }
	cout << "�����" << n << "���ξ�\n";
	//�������һ��ջ�ռ�,����ѭ��Dream();����,ֱ��������������,
	Dream(n + 1);
	//������������return;����ת�����ô�����һ�����.
	cout << "�˳���" << n << "���ξ�\n";
	//���һ��ջ�ռ�������ִ�д���,�ͷ�ջ�ռ�,�ص����ξ���������(�ͷ�)
}

int main(void) {
	/*
	int n;
	cout << "���������:";
	cin >> n;
	cout << b(n) << endl;
	*/
	Dream(1);
	system("pause");
	return 0;
}