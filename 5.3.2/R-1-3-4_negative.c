//5.3.2��(ǿ��)�������ص�ָ���ֹ��ָ�����ھֲ�������ַ��ָ��
//------����ά�ֵ������޸�8114�ġ�R - 1 - 3 - 4 ��ֹ���ֲ�������ַ��Ϊ��������ֵ���ء�

#include <stdlib.h>
unsigned int * pfun(unsigned int *pa);
int main(void)
{
	unsigned int data;
	unsigned int *result = NULL;
	result = pfun(&data);
	return (0);
}
unsigned int * pfun(unsigned int *pa)
{
	unsigned int temp = 0;
	*pa = 10;
	temp = *pa;
	return &temp;         //Υ��
}

