//5.7.1　(建议)谨慎覆盖标准函数库的函数
//------放宽8114的“R - 1 - 7 - 1 禁止覆盖标准函数库的函数”

int printf(int a, int b)  //违背
{
	return ((a > b) ? a : b);
}
int main(void)
{
	int ret;
	ret = printf(2, 3);
	return (0);
}
