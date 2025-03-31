
typedef struct 
{
	unsigned char    d1 : 2;
	unsigned char    d2 : 2;
	unsigned char : 4;   //×ñÑ­
	unsigned char    d3 : 6;
	unsigned char : 2;   //×ñÑ­
	unsigned short   d4 : 10;
	unsigned short : 6;   //×ñÑ­
	unsigned char    d5 : 2;
	unsigned char : 6;   //×ñÑ­
} stData1;

typedef struct
{
	unsigned char    d1 : 2;
	unsigned char    d2 : 2;
	unsigned char    d3 : 4;   //×ñÑ­
	unsigned short   d4 : 10;
	unsigned short : 6;   //×ñÑ­
	unsigned char    d5 : 2;
	unsigned char : 6;   //×ñÑ­
} stData2;
