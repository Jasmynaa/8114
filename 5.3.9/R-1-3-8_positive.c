
#include <stdlib.h>
#include <malloc.h>
int main(void)
{
	int *x = (int *)malloc(sizeof(int));
	if (NULL != x)                //×ñÑ­
	{
		*x = 1;
	}
	else
	{
		return (-1);
	}
	return (0);
}

