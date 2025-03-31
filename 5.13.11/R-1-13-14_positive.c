#include <stdlib.h>
int fun(int width);
int main(void)
{
	int i;
	i = fun(0);          //×ñÑ­
	return (0);
}
int fun(int width)
{
	int w;
	w = width - 10;
	return w;
}
