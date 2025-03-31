//5.10.6　(必要)将非指针量赋予指针变量，必须使用强制转换
//------内容维持，进行拆分8114的“R - 1 - 10 - 5 将指针量赋予非指针变量或非指针量赋予指针变量，必须使用强制转换”

#include <stdlib.h>
int main(void)
{
	unsigned int *ptr = NULL;
	unsigned int adr = 0;
	ptr = adr;                   //违背
	return (0);
}

