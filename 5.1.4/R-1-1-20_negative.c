//5.1.4　(必要)表示整数的char应用signed或unsigned说明
//------替代8114的“R-1-1-20 用于数值计算的字符型变量必须明确定义是有符号还是无符号”

int main(void)
{
	char i;                     // 违背
	int j;
	i = (char)0xFF;             // 违背
	j = i + 1;
	return 0;
}