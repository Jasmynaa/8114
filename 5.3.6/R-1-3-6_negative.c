//5.3.6��(��Ҫ)ָ��������ͷź������ΪNULL
//------ά��8114�ġ�R - 1 - 3 - 6 ָ��������ͷź������ΪNULL��

#include <stdlib.h>
#include <malloc.h>
int main(void)
{
	int *x = (int *)malloc(sizeof(int));
	if (NULL != x)
	{
		*x = 1;
		//����
		free(x);                 //Υ��
	}
	else
	{
		return (-1);
	}
	//����
	return (0);
}

