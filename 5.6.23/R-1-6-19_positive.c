#include <string.h>
void main(void)
{
	int r;
	char src[4] = { 'a', 'b', 'c', '\0' };
	char des[10] = { 'd', 'e', '\0' };
	int m = strlen(src);
	r = strncat(des, src, m);  //×ñÑ­
	r = strncat_s(des,2, src, m);  //×ñÑ­	
	return;
}