//5.10.4��(��Ҫ)ָ������ĸ�ֵ���ͱ�����ָ���������һ��
//------ά��8114�ġ�R - 1 - 10 - 4 ָ������ĸ�ֵ���ͱ�����ָ���������һ�¡�

#include <stdlib.h>
int main(void)
{
	unsigned int *ptr = NULL;
	unsigned short uid = 0;
	ptr = (unsigned short *)(&uid);  //Υ��
	ptr = (&uid);                    //Υ��2
	return (0);
}

