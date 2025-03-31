//5.1.8　(必要)位定义的位数之和应与类型长度对齐
//------内容维持但表述修改8114的“R-1-1-12 位定义的变量必须是同长度的类型且定义位禁止跨越类型的长度” 

typedef struct
{
	unsigned char    d1 : 2;
	unsigned char    d2 : 2;
	unsigned char    d3 : 6;   //违背
	unsigned short   d4 : 10;  //违背
	unsigned char    d5 : 2;   //违背
} stData;
