//5.13.11��(��Ҫ)��ֹ��NULL��Ϊ������0ʹ��
//------ά��8114�ġ�R - 1 - 13 - 14 ��ֹ��NULL��Ϊ������0ʹ�á�

#include <stdlib.h>
int fun(int width);
int main(void)
{
	int i;
	i = fun(NULL);       //Υ��
	return (0);
}
int fun(int width)
{
	int w;
	w = width - 10;
	return w;
}

