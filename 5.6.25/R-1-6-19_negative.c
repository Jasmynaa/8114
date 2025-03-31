//5.6.25　(必要)使用strcat_s(des,n,src)函数时，n必须满足安全性条件。(强制)
//------具体化8114的“R - 1 - 6 - 19 使用字符串赋值、拷贝、追加等函数时，禁止目标字符串存储空间越界”
//--安全性条件：
//--(1)	n >= stelen(des) + stelen(src) + 1
//--(2)	n <= sizeof(des)

#include <string.h>
void main(void)
{
	int ret1, ret2;
	char str[11] = "Hello ";
	ret1 = strcat_s(str, strlen("world"), "world");               //违背
	ret2 = strcat_s(str, strlen(str) + strlen("world") + 1, "world"); //违背
	return;
}



