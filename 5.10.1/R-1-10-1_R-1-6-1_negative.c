//5.10.1　(必要)将浮点型量赋给整型变量必须显式强制转换
//------维持8114的“R - 1 - 10 - 1 浮点数变量赋给整型变量必须强制转换”
//------将8114的“R - 1 - 6 - 1 禁止将浮点常数赋给整型变量”弱化后归为此条。

int main(void)
{
	int ix, iy;
	float fx = 1.85;
	float fy = -1.85;
	ix = fx;                     //违背
	iy = fy;                     //违背2
	return (0);
}


