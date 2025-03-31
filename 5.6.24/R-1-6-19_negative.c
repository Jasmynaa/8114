//5.6.24　(必要)使用strncat(des,src,n)函数时，n必须满足安全性条件。(强制)
//-------具体化8114的“R - 1 - 6 - 19 使用字符串赋值、拷贝、追加等函数时，禁止目标字符串存储空间越界”
//--安全性条件：
//--(1) n <= sizeof(src)
//--(2) strlen(des) + n <= sizeof(des)
//--(3) 拷贝后，des存储空间中存在结束符

#include <string.h>
void main(void)
{
	char str[11] = "Hello ";
	strncat(str, "world", 5);     //违背
	return;
}
