
#include <string.h>
void main(void)
{
	char str[12] = "Hello ";
	int n = 5;
	//if (n <= sizeof("world") && strlen(str) + n <= sizeof(str))必须满足此条件
	strncat(str, "world", n);     //遵循
	return;
}
