void fun1(int p[], int n)    //×ñÑ­
{
	int i;
	for (i = 0; i<n; i++)
	{
		p[i] = p[i] + 1;
	}
}
void fun2(int *p, int n)     //×ñÑ­2
{
	int i;
	for (i = 0; i<n; i++)
	{
		p[i] = p[i] + 1;
	}
}
int main(void)
{
	int i;
	int a[6] = { 0, 1, 2, 3, 4, 5 };
	i = sizeof(a) / sizeof(int);
	fun1(a, i);
	fun2(a, i);
	return (0);
}
