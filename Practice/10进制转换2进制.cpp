#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//����һ������,ת��Ϊ���������.
int Base_conversion(){
	while (1) {
		int Decimal_system = 0;//�����ʮ����
		int Subscript = 0;//������������±�
		int Binary_system[32];//����Ķ�����
		/*��������϶���ŵ�whileѭ����,���������ݴ���,���ӡ2��1,�ٴ�ӡ3����1,
		������Ϊ����δ��յ��µ�*/
		cout << "������һ����Ҫת��Ϊ�����Ƶ�������:";
		cin >> Decimal_system;
		if (Decimal_system <= 0) {
			cout << "������������\n";
		}
		while (Decimal_system != 0) {//�����ʮ���Ʋ�==0,ѭ���������
			Binary_system[Subscript] = Decimal_system % 2;//������[�±�++]=ʮ����%2,�������(0|1)��������±�
			Decimal_system = Decimal_system / 2;//ʮ����/2ȡ����ֵ��ʮ����,��173/2=86;��������,ʮ����!=0,�ٴ�ѭ��
			Subscript++;//�±�ǰ��
		}
		for (Subscript--; Subscript >= 0; Subscript--) {
			//�������ܰѶ����ƴӸ����ʹ�ӡ��
			cout << Binary_system[Subscript]; //���±���ֵ���λ����Сλ��ӡ,��5��0��
		}
		cout << endl;
	}
}


int main(void) {

	Base_conversion();
	system("pause");
	return 0;
}