//5.6.23　(必要)禁止使用strcat函数，推荐使用strncat函数或strcat_s函数。(强制)
//------具体化8114的“R - 1 - 6 - 19 使用字符串赋值、拷贝、追加等函数时，禁止目标字符串存储空间越界”

#include <string.h>
void main(void)
{
	int r;
	char src[4] = { 'a', 'b', 'c', '\0' };
	char des[3] = { 'd', 'e', '\0' };
	r = strcat(des, src);  //违背
	return;
}
