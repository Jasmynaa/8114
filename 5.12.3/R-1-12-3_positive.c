
#include <math.h>
int main(void) {
	int i, j;
	int P = 1000;
	float d = 0.435;
	if (fabs(435 - (P*d)) < 1e-4)                          //×ñÑ­
	{
		i = 1;
	}
	else {
		i = 2;
	}
	if ((435 >= (P*d) + 1e-4) || (435 <= (P*d) - 1e-4))    //×ñÑ­2
	{
		j = 1;
	}
	else {
		j = 2;
	}
	return (0);
}
