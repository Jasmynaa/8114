//5.7.5　(必要)有返回值的函数必须通过返回语句返回
//------维持8114的“R - 1 - 7 - 7 有返回值的函数必须通过返回语句返回”

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
	if (1 == a)
	{
		*b = *b + a;
		return (1);
	}
	else
	{
		*b = *b - a;
	}                     //违背
}
