//5.6.15　(必要)缓存区读取操作禁止越界
//------维持8114的“R - 1 - 6 - 14 缓存区读取操作禁止越界”

#include <string.h>
int main(void)
{
	int src[2] = { 1, 2 };
	int des[4] = { 0, 0, 0, 0 };
	memcpy(des, src, sizeof(des));       //违背
	return (0);
}
