//5.1.16　(建议)谨慎在函数体内使用外部声明
//------放宽8114的“R-1-1-17 禁止在函数体内使用外部声明”

int main(void)
{
	extern int zdata;           // 违背
	extern int fadd(int, int);  // 违背
	int x, y;
	x = 1;
	y = 2;
	zdata = fadd(x, y);
	return 0;
}
