//5.1.19　(建议)宏定义中谨慎使用##或#
//------维持8114的“A-1-1-3 宏定义中谨慎使用##或#”

#include <stdio.h>

typedef unsigned int UINT_32;
typedef unsigned char UCHAR;
UCHAR string[50];
#define cat(x) (&string[##(x)])     // 违背

void static_125(UCHAR string[50], UINT_32 n)
{

	UCHAR *token1;

	token1 = cat(n);
}
