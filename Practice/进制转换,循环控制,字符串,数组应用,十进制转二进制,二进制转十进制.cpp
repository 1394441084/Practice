#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//����ʮ����,ת��Ϊ���������.
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

//����һ����������,ת��Ϊʮ����
void Binary_conversion() {
	/*123=1*100(��λ)+2*10(ʮλ)+3*1(��λ);
	  1011=[1*(2^3)]+[0*(2^2)]+[1*(2^1)]+[1*(2��0�η�)]
	  2��0�η���1���κ�����0�η�����1��0��0�η������壩
	  =1*8+0*4+1*2+1*1=11;*/
	string Binary_system;//������
	int Weight_value = 1;//Ȩֵ
	int Sum_of_powers = 0;//�η���

	cout << "������һ����������:";
	cin >> Binary_system;

	//�ַ���.length(),�����ַ������Ⱥ���;
	for (int Subscript = Binary_system.length() - 1; Subscript >= 0; Subscript--) {
		int Get_an_integer = Binary_system[Subscript] - '0';//'0'-'0'=0;'1'-'0'=1;�ַ���ת�����������
		//�η���+=ȡ������*Ȩֵ,�õ��Ĵη��ͽ����ۼ�,ѭ��������ʮ������
		Sum_of_powers += Get_an_integer * Weight_value;
		Weight_value *= 2;//Ȩֵ�仯,2^0,2^1,����
	}
	//����ʮ������,�����ӡ��
	cout << Sum_of_powers << endl;
}

int main(void) {
	Binary_conversion();
	system("pause");
	return 0;
}