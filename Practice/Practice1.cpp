#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string>
#include <string.h>

using namespace std;

//让用户输入一个字符进行转换,如大写变小写,其它不必转换.

int main(void) {
	char ASCll='0';
	//C++版的字母转换,小小的优化(可控输出);
	cout << "请输入一个字母进行转换.\n";
	while (cin >> ASCll) {
		//&&逻辑与,而且,并且的意思,所有条件为真才真,不然为假
		if (ASCll >= 'a' && ASCll <= 'z') {
			ASCll = ASCll - 'a' + 'A';//如输入小写a(97),那么97-97+65=65(A);
			cout << ASCll << "\n";
			cout << "还需要转换请再次输入,如不需要请按CTRL+z+回车结束\n";
		}
		else if (ASCll >= 'A' && ASCll <= 'Z') {
			ASCll = ASCll - 'A' + 'a';
			cout << ASCll << "\n";
			cout << "还需要转换请再次输入,如不需要请按CTRL+z+回车结束\n";
		}
		else {
			cout << "输入不是字母,原样返回\n";
			cout << ASCll << endl;
			cout << "还需要转换请再次输入,如不需要请按CTRL+z+回车结束\n";
		}
	}

	//C语言的转换
	/*
	printf("请输入您要转换的字母:\n");
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
		printf("%c,您输入的不是字母.", ASCll);
	}

	//printf("转换为:%c\n", ASCll);
	*/
	system("pause");
	return 0;
}