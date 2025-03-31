#include <stdlib.h>
#include <malloc.h>
int main(void)
{
	char *x = NULL;
	char data[5] = { 1, 2, 3, 4, 5 };
	x = (char *)malloc(5 * sizeof(char));  //×ñÑ­
	memcpy(x, data, 5);
	/* ...... */
	return (0);
}
