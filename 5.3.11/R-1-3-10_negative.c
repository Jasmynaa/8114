//5.3.11��(��Ҫ)��ֹ�ļ�ָ�����˳�������ʱû�йر��ļ�
//-------ά��8114�ġ�R - 1 - 3 - 10 ��ֹ�ļ�ָ�����˳�ʱû�йر��ļ���

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
		return (0);        //Υ��
	}
}
