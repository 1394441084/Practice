//在多模块开发时,函数的调用是经常的,如果不包含自己的头文件,就要分先后编译等
#include "多模块开发示例.h" 

//函数的定义
int sun(int n) {//n表示形参(形式参数)
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += i;
	}
	return s;
}