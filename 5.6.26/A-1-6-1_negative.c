//5.6.26　(建议)谨慎对有符号整型量进行位运算
//------维持8114的“A - 1 - 6 - 1 谨慎对有符号整型量进行位运算”

int main(void)
{
	signed int a = 5;
	unsigned int dd = 5;
	a << 5;	                       //违背
	(int)dd << 3;	              //违背

	return 0;
}