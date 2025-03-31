//5.6.6　(必要)禁止在运算表达式中或函数调用参数中使用++或--操作符
//------维持8114的“R - 1 - 6 - 5 禁止在运算表达式中或函数调用参数中使用++或--操作符”

int fun(int p);
int main(void)
{
	int x = 1, y = 2, z = 3;
	int r;
	y = y + (x++);   //违背
	z = z + (++y);   //违背
	z = fun(--z);    //违背
	r = fun(z--);    //违背
	return (0);
}
int fun(int p)
{
	int ret;
	ret = 2 * p;
	return ret;
}
