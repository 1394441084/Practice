#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string>
#include <string.h>

using namespace std;

//���û�����һ���ַ�����ת��,���д��Сд,��������ת��.

int main(void) {
	char ASCll='0';
	//C++�����ĸת��,СС���Ż�(�ɿ����);
	cout << "������һ����ĸ����ת��.\n";
	while (cin >> ASCll) {
		//&&�߼���,����,���ҵ���˼,��������Ϊ�����,��ȻΪ��
		if (ASCll >= 'a' && ASCll <= 'z') {
			ASCll = ASCll - 'a' + 'A';//������Сдa(97),��ô97-97+65=65(A);
			cout << ASCll << "\n";
			cout << "����Ҫת�����ٴ�����,�粻��Ҫ�밴CTRL+z+�س�����\n";
		}
		else if (ASCll >= 'A' && ASCll <= 'Z') {
			ASCll = ASCll - 'A' + 'a';
			cout << ASCll << "\n";
			cout << "����Ҫת�����ٴ�����,�粻��Ҫ�밴CTRL+z+�س�����\n";
		}
		else {
			cout << "���벻����ĸ,ԭ������\n";
			cout << ASCll << endl;
			cout << "����Ҫת�����ٴ�����,�粻��Ҫ�밴CTRL+z+�س�����\n";
		}
	}

	//C���Ե�ת��
	/*
	printf("��������Ҫת������ĸ:\n");
	scanf("%c",&ASCll);

	if (ASCll >= 'a' && ASCll <= 'z') {
		ASCll -= 32;
		printf("%c\n", ASCll);
	}
	else if (ASCll >= 'A' && ASCll <= 'Z') {
		
		ASCll += 32;
		printf("%c\n", ASCll);
	}
	else {
		printf("%c,������Ĳ�����ĸ.", ASCll);
	}

	//printf("ת��Ϊ:%c\n", ASCll);
	*/
	system("pause");
	return 0;
}