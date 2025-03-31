//5.13.13　(必要)用于表示字符串的数组必须以'\0'结束
//------维持8114的“R - 1 - 13 - 16 用于表示字符串的数组必须以'\0'结束”

#include <stdio.h>
int main(void)
{
	char buf[8];
	buf[0] = 'y';
	buf[1] = 'e';
	buf[2] = 's';         //违背
	printf("%s\n", buf);
	return (0);
}


