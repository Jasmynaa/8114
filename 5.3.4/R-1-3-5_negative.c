//5.3.4��(ǿ��)��ֹʹ���ѱ��ͷſռ��ָ��
//------���8114�ġ�R - 1 - 3 - 5 ��ֹʹ�û��ͷ�δ����ռ���ѱ��ͷŵ�ָ�롱

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
	y = (*x);                     //Υ��
	return(0);
}

