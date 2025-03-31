
typedef struct
{
	signed int si01 : 2;     // ×ñÑ­
	signed int si02 : 2;
	unsigned int serv : 28;
}sData;
int main(void)
{
	sData data;
	data.si01 = -1;
	data.si02 = -1;
	return 0;
}