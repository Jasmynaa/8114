//5.7.6　(必要)禁止无返回值函数的返回语句带有返回值
//------维持8114的“R - 1 - 7 - 8 禁止无返回值函数的返回语句带有返回值”

void fun(int a, int *b);
int main(void)
{
	int i = 1, j = 2;
	fun(i, &j);
	return (0);
}
void fun(int a, int *b)
{
	if (0 == a)
	{
		*b = *b + a;
	}
	else
	{
		*b = *b - a;
	}
	return (a + 1);           //违背
}
