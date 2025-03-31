//------5.2.8　(必要)当使用“/* … */”进行中文注释时，注释内容与注释符之间必须加空格
//新增准则

#include <stdio.h>
void main(void)
{
	/*讯*/                        //违背 
	printf("step 1\n");/*step 1*/
	printf("step 2\n");/*step 2*/
	printf("finished.\n");
	return;
}

