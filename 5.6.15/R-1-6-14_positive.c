#include <string.h>
int main(void)
{
	int src[2] = { 1, 2 };
	int des[4] = { 0, 0, 0, 0 };
	memcpy(des, src, sizeof(src));       //×ñÑ­
	return (0);
}
