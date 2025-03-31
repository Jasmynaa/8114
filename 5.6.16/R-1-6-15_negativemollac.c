//5.6.16　(强制)缓存区写入操作禁止越界
//------维持8114的“R - 1 - 6 - 15 缓存区写入操作禁止越界”

#include <string.h>
int main(void)
{
	int *src = (int*) malloc(4 * sizeof(int));
	int *des = (int*) malloc(2 * sizeof(int));
	memcpy(des, src, sizeof(src));       //违背
	return (0);
}
