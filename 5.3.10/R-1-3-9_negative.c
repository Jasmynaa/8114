//5.3.10��(��Ҫ)��ָ�����ʹ��NULL����ֹʹ��������0
//------ά��8114�ġ�R - 1 - 3 - 9 ��ָ�����ʹ��NULL����ֹʹ��������0��

#include <stdlib.h>
#include <malloc.h>
int main(void)
{
	int *x = (int *)malloc(sizeof(int));
	if (x != 0)                  //Υ��
	{
		*x = 1;
	}
	else
	{
		return (-1);
	}
	return (0);
}
