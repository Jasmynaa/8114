//5.3.8��(��Ҫ)��̬�����ָ���������ʱ��δ������ռ�����ʼ��ΪNULL
//------ά��8114�ġ�R - 1 - 3 - 7 ��̬�����ָ���������ʱ��δ������ռ�����ʼ��ΪNULL��

#include <stdlib.h>
#include <malloc.h>
int main(void)
{
	int *x;                 //Υ��
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


