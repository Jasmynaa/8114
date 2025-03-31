//5.3.11　(必要)禁止文件指针在退出作用域时没有关闭文件
//-------维持8114的“R - 1 - 3 - 10 禁止文件指针在退出时没有关闭文件”

#include <stdio.h>
int fr(void);
int main(void)
{
	int ret;
	ret = fr();
	//...
	return (0);
}
int fr(void)
{
	FILE *stream = NULL;
	char s[100];
	int n;
	if (NULL == (stream = fopen("data", "r")))
	{
		printf("The file 'data' was not opened\n");
		return (-1);
	}
	else
	{
		printf("The file 'data' was opened\n");
		n = fscanf(stream, "%s", s);
		//...
		return (0);        //违背
	}
}
