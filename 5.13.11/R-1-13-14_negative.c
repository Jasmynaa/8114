//5.13.11　(必要)禁止将NULL做为整型数0使用
//------维持8114的“R - 1 - 13 - 14 禁止将NULL做为整型数0使用”

#include <stdlib.h>
int fun(int width);
int main(void)
{
	int i;
	i = fun(NULL);       //违背
	return (0);
}
int fun(int width)
{
	int w;
	w = width - 10;
	return w;
}

