//5.3.3　(强制)禁止使用未被分配空间的指针
//------拆分8114的“R - 1 - 3 - 5 禁止使用或释放未分配空间或已被释放的指针”


#include <stdlib.h>
#include <malloc.h>
int main(void)
{
	char *x = NULL;
	char data[5] = { 1, 2, 3, 4, 5 };
	memcpy(x, data, 5);      //违背    
	/* ...... */
	return (0);
}
