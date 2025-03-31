
#include <string.h>
void main(void)
{
	char src[4] = { 'a', 'b', 'c', '\0' };
	char des[3] = { 'd', 'e', '\0' };
	strncpy(des, src, 2);    //×ñÑ­
	return;
}
