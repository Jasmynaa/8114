#include <stdlib.h>
#include <malloc.h>
int main(void)
{
	int *x = NULL;          //��ѭ
	//...
	x = (int *)malloc(sizeof(int));
	if (NULL != x)
	{
		*x = 1;
	}
	else
	{
		return (-1);
	}
	return (0);
}
