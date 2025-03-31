//5.6.1　(强制)禁止将越界整数赋给整型变量
//------放宽且拓展8114的“R - 1 - 6 - 2 禁止将越界整数赋给整型变量”

int main(void)
{
	unsigned char data1 = 256;      // 违背
	signed char data2 = -129;       // 违背
	// ......
	return 0;
}