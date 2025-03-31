//5.7.16　(必要)禁止使用abort、system函数
//------重新调整8114的“A - 1 - 7 - 3 谨慎使用abort、exit函数”

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *s;
	abort();                    //违背
	exit(EXIT_SUCCESS);      //违背
}