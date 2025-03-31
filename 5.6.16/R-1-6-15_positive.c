#include <string.h>
int main(void)
{
	int src[4] = { 1, 2, 3, 4 };
	int des[2] = { 0, 0 };
	memcpy(des, src, sizeof(des));       //×ñÑ­
	return (0);
}
