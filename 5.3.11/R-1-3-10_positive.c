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
		fclose(stream);  //��ѭ
		return (0);
	}
}
