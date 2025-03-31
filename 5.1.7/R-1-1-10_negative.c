//5.1.7　(必要)单比特位域变量，禁止定义为有符号类型
//------内容维持但表述修改8114的“R-1-1-10 位定义的有符号整型变量位长必须大于1”
//--注：只一位的有符号整型变量，该位为1时表示-1，该位为0时表示0。


typedef struct
{
	signed int si01 : 1;      // 违背
	signed int si02 : 2;
	unsigned int serv : 29;
}sData;
int main(void)
{
	sData data;
	data.si01 = -1;
	data.si02 = -1;
	return 0;
}