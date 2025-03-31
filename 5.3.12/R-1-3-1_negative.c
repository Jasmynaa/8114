//5.3.12　(建议)谨慎使用超过两级的指针
//------放宽8114的“R - 1 - 3 - 1 禁止指针的指针超过两级”

#include <stdlib.h>
int main(void)
{
	unsigned int array[5] = { 0, 1, 2, 3, 4 };
	unsigned int *p1_ptr = NULL, **p2_ptr = NULL;
	unsigned int ***p3_ptr = NULL;  // 违背
	unsigned int data[5];
	unsigned int i;
	p1_ptr = array;
	p2_ptr = &p1_ptr;
	p3_ptr = &p2_ptr;
	for (i = 0; i < 5; i++)
	{
		data[i] = *(**p3_ptr + i);
	}
	return 0;
}
