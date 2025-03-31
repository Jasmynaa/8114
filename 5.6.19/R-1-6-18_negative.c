//5.6.19　(必要)禁止使用gets函数，推荐使用gets_s函数或fgets函数
//------内容维持但表述修改8114的“R - 1 - 6 - 18 禁止使用gets函数，应使用fgets函数替代”

#include <stdio.h>
int main(void)
{
	char line[5] = { 0 };
	printf("Input a string: ");
	if (NULL == gets(line))                //违背
	{
		printf("gets error\n");
		return (-1);
	}
	else
	{
		printf("The line entered was: %s\n", line);
	}
	return (0);
}
