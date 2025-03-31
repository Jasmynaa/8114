//5.3.2　(强制)函数返回的指针禁止是指向函数内局部变量地址的指针
//------内容维持但表述修改8114的“R - 1 - 3 - 4 禁止将局部变量地址做为函数返回值返回”

#include <stdlib.h>
unsigned int * pfun(unsigned int *pa);
int main(void)
{
	unsigned int data;
	unsigned int *result = NULL;
	result = pfun(&data);
	return (0);
}
unsigned int * pfun(unsigned int *pa)
{
	unsigned int temp = 0;
	*pa = 10;
	temp = *pa;
	return &temp;         //违背
}

