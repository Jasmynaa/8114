//5.6.15��(��Ҫ)��������ȡ������ֹԽ��
//------ά��8114�ġ�R - 1 - 6 - 14 ��������ȡ������ֹԽ�硱

#include <string.h>
int main(void)
{
	int src[2] = { 1, 2 };
	int des[4] = { 0, 0, 0, 0 };
	memcpy(des, src, sizeof(des));       //Υ��
	return (0);
}
