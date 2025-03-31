#include <stdio.h>
int main(void)
{
	char line[5] = { 0 };
	printf("Input a string: ");
	if (NULL == fgets(line, 5, stdin))     //×ñÑ­
	{
		printf("fgets error\n");
		return (-1);
	}
	else
	{
		printf("The line entered was: %s\n", line);
	}
	return (0);
}
