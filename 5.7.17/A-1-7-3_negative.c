//5.7.17��(����)����ʹ��exit��terminate��getenv����
//------���µ���8114�ġ�A - 1 - 7 - 3 ����ʹ��abort��exit������

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *s;
	terminate();                    //Υ��
	exit(EXIT_SUCCESS);      //Υ��
	char* path = getenv("PATH");			//Υ��
}