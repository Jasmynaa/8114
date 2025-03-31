//------替代了8114的“R-1-1-21 禁止在#include语句中使用绝对路径” 

#include "R-1-1-21_negative1.h"  //违背
#include "R-1-1-21_negative2.h"

int main(void)
{
	a = 3;
	return (0);
}
