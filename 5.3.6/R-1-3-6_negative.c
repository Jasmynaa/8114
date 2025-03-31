//5.3.6　(必要)指针变量被释放后必须置为NULL
//------维持8114的“R - 1 - 3 - 6 指针变量被释放后必须置为NULL”

#include <stdlib.h>
#include <malloc.h>
int main(void)
{
	int *x = (int *)malloc(sizeof(int));
	if (NULL != x)
	{
		*x = 1;
		//……
		free(x);                 //违背
	}
	else
	{
		return (-1);
	}
	//……
	return (0);
}

