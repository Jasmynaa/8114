//5.3.9　(必要)动态分配的指针变量第一次使用前必须进行是否为NULL的判别
//------维持8114的“R - 1 - 3 - 8 动态分配的指针变量第一次使用前必须进行是否为NULL的判别”

#include <malloc.h>
int main(void)
{
	int *x = (int *)malloc(sizeof(int));
	*x = 1;                      //违背
	return (0);
}


