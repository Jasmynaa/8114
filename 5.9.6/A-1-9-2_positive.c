
#include <math.h>
#include <stdio.h>
int main()
{
	int i;
	for (i = 1; i<10; i++)
	{
		if (i == 1)
		{
			continue;
		}
		else if (i == 5)
		{
			break;		//×ñÑ­
		}
		printf("Number=%d\n", i);
	}

}