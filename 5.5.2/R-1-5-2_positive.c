
#include <stdio.h>
typedef char * pStr;    //×ñÑ­
void main(void)
{
	char string[4] = "abc";
	pStr p1, p2;
	p1 = string;
	p2 = string;
	return;
}
