
#include <string.h>
void main(void)
{
	char str[12] = "Hello ";
	int n = 5;
	//if (n <= sizeof("world") && strlen(str) + n <= sizeof(str))�������������
	strncat(str, "world", n);     //��ѭ
	return;
}
