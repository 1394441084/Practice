#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//ÊäÈë×Ö·û´®,Äæ×ª×Ö·û´®Êä³ö
void Reverse_string() {
	string String;
	int i,j;
	
	cout << "ÇëÊäÈëĞèÒªÄæ×ªµÄ×Ö·û´®:\n";
	cin >> String;

	i = 0;
	j = String.length() - 1;
	while (i<j) {//×Ö·û´®123456789

		char tmp = String[i];//String[0]=1
		String[i] = String[j];//String[i]=9
		String[j] = tmp;
		i++;
		j--;
	}
	cout << String << endl;
}

int main(void) {
	Reverse_string();
	system("pause");
	return 0;
}