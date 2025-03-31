//5.7.7　(必要)有返回值函数的返回语句必须带有返回值
//------维持8114的“R - 1 - 7 - 9 有返回值函数的返回语句必须带有返回值”

int fun(int a, int *b);
int main(void)
{
	int i = 1, j = 2;
	int k;
	k = fun(i, &j);
	return (0);
}
int fun(int a, int *b)
{
	if (0 == a)
	{
		*b = *b + a;
	}
	else
	{
		*b = *b - a;
	}
	return;             //违背
}
