//5.6.18　(强制)只能释放由标准函数库动态分配的内存块
//------具体细化8114的“R - 1 - 6 - 17 被free的指针必须指向最初malloc、calloc分配的地址”

#include <stdlib.h>
#include <malloc.h>
int fun(void);
int main(void)
{
	int i;
	i = fun();
	return (0);
}
int fun(void)
{
	int *p = (int *)malloc(3 * sizeof(int));
	if (NULL == p)
	{
		return (-1);
	}
	else
	{
		*p = 1;
		p++;
		*p = 2;
		free(p);                      //违背
		p = NULL;
	}
	return (0);
}

