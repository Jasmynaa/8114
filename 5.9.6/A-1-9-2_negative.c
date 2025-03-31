//5.9.6　(建议)谨慎在循环中使用多个break语句
//------维持8114的“A - 1 - 9 - 2 谨慎在循环中使用多个break语句”

#include <math.h>
#include <stdio.h>
int main()
{
	int i;
	for (i = 1; i<10; i++)
	{
		if (i == 1)
		{
			break;   //违背
		}
		else if (i == 5)
		{
			break;  //违背
		}
		printf("Number=%d\n", i);
	}

}