//5.6.23��(��Ҫ)��ֹʹ��strcat�������Ƽ�ʹ��strncat������strcat_s������(ǿ��)
//------���廯8114�ġ�R - 1 - 6 - 19 ʹ���ַ�����ֵ��������׷�ӵȺ���ʱ����ֹĿ���ַ����洢�ռ�Խ�硱

#include <string.h>
void main(void)
{
	int r;
	char src[4] = { 'a', 'b', 'c', '\0' };
	char des[3] = { 'd', 'e', '\0' };
	r = strcat(des, src);  //Υ��
	return;
}
