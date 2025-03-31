//5.6.16　(强制)缓存区写入操作禁止越界
//------维持8114的“R - 1 - 6 - 15 缓存区写入操作禁止越界”

#include <string.h>
int main(void)
{
	int src[4] = { 1, 2, 3, 4 };
	int des[2] = { 0, 0 };
	memcpy(des, src, sizeof(src));       //违背
	return (0);
}
