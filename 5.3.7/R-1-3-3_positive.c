
#include <stdio.h>
typedef char * pStr;    //��ѭ
#include <stdlib.h>
unsigned int pfun(unsigned int **pa);
int main(void)
{
	unsigned int *data = NULL;
	unsigned int result;
	result = pfun(&data);
	return (0);
}
unsigned int pfun(unsigned int **pa)
{
	static unsigned int i = 10;
	i = i + 1;
	*pa = &i; //��ѭ
	return i;
}
