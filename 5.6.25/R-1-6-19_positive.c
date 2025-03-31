#include <string.h>
void main(void)
{
	int ret;
	char str[12] = "Hello ";
	ret = strcat_s(str, strlen(str) + strlen("world") + 1, "world");  //×ñÑ­
	return;
}
