#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	printf("About to system command.com and run a DOS command\n");
	char *p = (char*)malloc(10);
	if (p == NULL)
		return 0;
	*p = 'a';
	return (0);
}