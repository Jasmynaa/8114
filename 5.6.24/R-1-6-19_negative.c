//5.6.24��(��Ҫ)ʹ��strncat(des,src,n)����ʱ��n�������㰲ȫ��������(ǿ��)
//-------���廯8114�ġ�R - 1 - 6 - 19 ʹ���ַ�����ֵ��������׷�ӵȺ���ʱ����ֹĿ���ַ����洢�ռ�Խ�硱
//--��ȫ��������
//--(1) n <= sizeof(src)
//--(2) strlen(des) + n <= sizeof(des)
//--(3) ������des�洢�ռ��д��ڽ�����

#include <string.h>
void main(void)
{
	char str[11] = "Hello ";
	strncat(str, "world", 5);     //Υ��
	return;
}
