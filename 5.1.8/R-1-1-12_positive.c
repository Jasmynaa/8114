
typedef struct 
{
	unsigned char    d1 : 2;
	unsigned char    d2 : 2;
	unsigned char : 4;   //��ѭ
	unsigned char    d3 : 6;
	unsigned char : 2;   //��ѭ
	unsigned short   d4 : 10;
	unsigned short : 6;   //��ѭ
	unsigned char    d5 : 2;
	unsigned char : 6;   //��ѭ
} stData1;

typedef struct
{
	unsigned char    d1 : 2;
	unsigned char    d2 : 2;
	unsigned char    d3 : 4;   //��ѭ
	unsigned short   d4 : 10;
	unsigned short : 6;   //��ѭ
	unsigned char    d5 : 2;
	unsigned char : 6;   //��ѭ
} stData2;
