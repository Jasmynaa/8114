#include <stdlib.h>
unsigned int * pfun(unsigned int *pa);
unsigned int Gdata = 0;
int main(void)
{
	unsigned int data;
	unsigned int *result = NULL;
	result = pfun(&data);
	return (0);
}
unsigned int * pfun(unsigned int *pa)
{
	*pa = 10;
	Gdata = *pa;
	return &Gdata;           //×ñÑ­
}
