//5.6.18��(ǿ��)ֻ���ͷ��ɱ�׼�����⶯̬������ڴ��
//------����ϸ��8114�ġ�R - 1 - 6 - 17 ��free��ָ�����ָ�����malloc��calloc����ĵ�ַ��

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
	if (NULL == p)
	{
		return (-1);
	}
	else
	{
		*p = 1;
		p++;
		*p = 2;
		free(p);                      //Υ��
		p = NULL;
	}
	return (0);
}

