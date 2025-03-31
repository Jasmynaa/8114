//5.7.17　(建议)谨慎使用exit、terminate、getenv函数
//------重新调整8114的“A - 1 - 7 - 3 谨慎使用abort、exit函数”

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *s;
	terminate();                    //违背
	exit(EXIT_SUCCESS);      //违背
	char* path = getenv("PATH");			//违背
}