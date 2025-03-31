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
	int *pbak = p;
	if (NULL == p)
	{
		return (-1);
	}
	else
	{
		*p = 1;
		p++;
		*p = 2;
		free(pbak);                   //×ñÑ­
		pbak = NULL;
	}
	return (0);
}
