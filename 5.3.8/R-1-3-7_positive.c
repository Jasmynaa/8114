#include <stdlib.h>
#include <malloc.h>
int main(void)
{
	int *x = NULL;          //×ñÑ­
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
