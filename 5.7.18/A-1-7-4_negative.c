//5.7.18　(建议)对系统函数的调用，建议调用后对其返回状态的有效性进行判别
//------维持8114的“A - 1 - 7 - 4 对系统函数的调用，建议调用后对其返回状态的有效性进行判别”

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	printf("About to system command.com and run a DOS command\n");
	char *p = (char*)malloc(10);    //违背
	if(p!=NULL)
	{
	*p = 'a';
	}
	return (0);
}