#include <stdio.h>
int main(void)
{
	char buf[8];
	buf[0] = 'y';
	buf[1] = 'e';
	buf[2] = 's';
	buf[3] = '\0';         //×ñÑ­
	printf("%s\n", buf);
	return (0);
}
