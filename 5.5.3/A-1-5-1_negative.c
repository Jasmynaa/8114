//5.5.3��(����)����ʹ��goto���
//------ά��8114�ġ�A - 1 - 5 - 1 ����ʹ��goto��䡱

#include<stdio.h>
#define xx  goto label1; //Υ��
int main()
{
	printf("  ");
	int i;
	for (i = 1; i<10; i++)
	{
		xx;  //Υ��
	}
label1:
	i = 5;
	return 0;
}