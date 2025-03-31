//5.7.15　(建议)函数中避免存在未被使用的调用参数
//------维持8114的“A - 1 - 7 - 2 函数中避免存在未被使用的调用参数”

#include <stdio.h>

void sort(int left, int* center, int *right)		//	违背
{
	int a = left+1;
	a = 0;
}

int main()
{
	int a = 2;
	int b = 3;
	sort(1, &a, &b);
	return 0;
}