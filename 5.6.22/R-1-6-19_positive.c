
#include <string.h>
void main(void)
{
	int r;
	char src[4] = { 'a', 'b', 'c', '\0' };
	char des[10] = { 'd', 'e', '\0' };
	int m = 2, n = 2;
	//if (m <= sizeof(des) && n <= sizeof(src)&& m+n<sizeof(des))��Ҫ�����������
	r = strncpy_s(des, m, src, n);  //��ѭ
	return;
}
