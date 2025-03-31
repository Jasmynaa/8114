
#include <stdlib.h>
#include <malloc.h>
int main(void)
{
	int *x = (int *)malloc(sizeof(int));
	int y = 0;
	if (x != NULL)
	{
		*x = 1;
		free(x);
		x = NULL;
	}
	else
	{
		return (-1);
	}
	if (x != NULL)
	{
		y = (*x);               //×ñÑ­
	}
	return(0);
}
