//5.3.4　(强制)禁止使用已被释放空间的指针
//------拆分8114的“R - 1 - 3 - 5 禁止使用或释放未分配空间或已被释放的指针”

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
	}
	else
	{
		return (-1);
	}
	y = (*x);                     //违背
	return(0);
}

