//5.9.6��(����)������ѭ����ʹ�ö��break���
//------ά��8114�ġ�A - 1 - 9 - 2 ������ѭ����ʹ�ö��break��䡱

#include <math.h>
#include <stdio.h>
int main()
{
	int i;
	for (i = 1; i<10; i++)
	{
		if (i == 1)
		{
			break;   //Υ��
		}
		else if (i == 5)
		{
			break;  //Υ��
		}
		printf("Number=%d\n", i);
	}

}