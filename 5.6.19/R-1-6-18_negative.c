//5.6.19��(��Ҫ)��ֹʹ��gets�������Ƽ�ʹ��gets_s������fgets����
//------����ά�ֵ������޸�8114�ġ�R - 1 - 6 - 18 ��ֹʹ��gets������Ӧʹ��fgets���������

#include <stdio.h>
int main(void)
{
	char line[5] = { 0 };
	printf("Input a string: ");
	if (NULL == gets(line))                //Υ��
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
