//------内容维持但表述修改8114的“R-1-1-15 函数中的参数必须使用类型声明”

int fun(height)         //违背
{
	int h;
	h = height + 10;
	return h;
}
int main(void)
{
	int i, j;
	i = 1000;
	j = fun(i);
	return (0);
}
