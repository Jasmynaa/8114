//5.10.4　(必要)指针变量的赋值类型必须与指针变量类型一致
//------维持8114的“R - 1 - 10 - 4 指针变量的赋值类型必须与指针变量类型一致”

#include <stdlib.h>
int main(void)
{
	unsigned int *ptr = NULL;
	unsigned short uid = 0;
	ptr = (unsigned short *)(&uid);  //违背
	ptr = (&uid);                    //违背2
	return (0);
}

