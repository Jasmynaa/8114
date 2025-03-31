//5.3.10　(必要)空指针必须使用NULL，禁止使用整型数0
//------维持8114的“R - 1 - 3 - 9 空指针必须使用NULL，禁止使用整型数0”

#include <stdlib.h>
#include <malloc.h>
int main(void)
{
	int *x = (int *)malloc(sizeof(int));
	if (x != 0)                  //违背
	{
		*x = 1;
	}
	else
	{
		return (-1);
	}
	return (0);
}
