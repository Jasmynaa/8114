//------内容维持但表述修改8114的“R-1-1-16 外部声明的变量，类型必须与定义一致”

#include "R-1-1-16_negative.h"
//程序文件2
extern short zdata;                //违背
int main(void)
{
	short x, y;
	x = 1;
	y = 2;
	zdata = x + y;
	return (0);
}

