//5.5.3　(建议)谨慎使用goto语句
//------维持8114的“A - 1 - 5 - 1 谨慎使用goto语句”

#include<stdio.h>
#define xx  goto label1; //违背
int main()
{
	printf("  ");
	int i;
	for (i = 1; i<10; i++)
	{
		xx;  //违背
	}
label1:
	i = 5;
	return 0;
}