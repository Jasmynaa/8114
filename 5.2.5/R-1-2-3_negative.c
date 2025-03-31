//5.2.5　(必要)头文件之前仅允许出现预处理指令或注释
//------维持8114的“R - 1 - 2 - 3 禁止在头文件前有可执行代码”

int main(void)
{
#include "..\061\061.h"       //违背
	int ix = 0;
	int iy = 1;
	int iz = 2;
	idata = ix + iy + iz;
	return (0);
}
