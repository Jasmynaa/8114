//5.6.21　(必要)使用strncpy(des,src,n)函数时，n必须满足安全性条件
//------具体化8114的“R - 1 - 6 - 19 使用字符串赋值、拷贝、追加等函数时，禁止目标字符串存储空间越界”
//--n必须满足安全性条件：
//--(1) n <= sizeof(des)
//--(2) n <= sizeof(src)
//--(3) 复制后，des存储空间中存在结束符

#include <string.h>
void main(void)
{
	char src[4] = { 'a', 'b', 'c', '\0' };
	char des[3] = { 'd', 'e', '\0' };
	strncpy(des, src, 3);    //违背
	return;
}
