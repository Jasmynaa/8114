//5.1.19��(����)�궨���н���ʹ��##��#
//------ά��8114�ġ�A-1-1-3 �궨���н���ʹ��##��#��

#include <stdio.h>

typedef unsigned int UINT_32;
typedef unsigned char UCHAR;
UCHAR string[50];
#define cat(x) (&string[##(x)])     // Υ��

void static_125(UCHAR string[50], UINT_32 n)
{

	UCHAR *token1;

	token1 = cat(n);
}
