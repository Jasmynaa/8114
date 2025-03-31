//5.6.22　(必要)使用strncpy_s(des,m,src,n)函数时，m和n必须满足安全性条件。(强制)
//------具体化8114的“R - 1 - 6 - 19 使用字符串赋值、拷贝、追加等函数时，禁止目标字符串存储空间越界”
//--m和n必须满足安全性条件：
//--(1) m <= sizeof(des)#ISemanticProblem.BINDING_NOT_FOUND#
//--(2) n <= sizeof(src)
//--(3) 复制后，des的m个字节中存在结束符
#include <safe_str_lib.h>
#include <stdio.h>
//#include <string.h>
void main(void)
{
	int r;
	char *src= (char*)malloc(4*sizeof(char));
	for(int i=0;i<4;i++)
	{
		sprintf(src+i, "%c", i);		
	}
	char *des = (char*)malloc(3*sizeof(char));
	r = strncpy_s(des, 3, src, 3);  //违背
	return;
}
