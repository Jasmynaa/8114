//5.7.8　(必要)函数返回值的类型必须与定义一致
//------维持8114的“R - 1 - 7 - 10 函数返回值的类型必须与定义一致”

unsigned int fun(unsigned int par);
int main(void)
{
	unsigned int i = 1;
	unsigned int j;
	j = fun(i);
	return (0);
}
unsigned int fun(unsigned int par)
{
	if (1 == par)
	{
		return (-1);      //违背
	}
	else if (2 == par)
	{
		return (1.5);     //违背2
	}
	else
	{
		return (2 * par);
	}
}

