#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//输入字符串,逆转字符串输出
void Reverse_string() {
	string String;
	int i,j;
	
	cout << "请输入需要逆转的字符串:\n";
	cin >> String;

	i = 0;//下标的头
	j = String.length() - 1;//下标的尾
	while (i<j) {//例字符串:123456789
		char tmp = String[i];//String[0]=1暂存到tmp中,
		String[i] = String[j];//String[i]=9
		String[j] = tmp;//String[j] = 1;
		i++;//头前进,
		j--;//尾后退,两者相遇跳出循环,5的位置没变化过
	}
	cout << String << endl;
}

int main(void) {
	Reverse_string();
	system("pause");
	return 0;
}