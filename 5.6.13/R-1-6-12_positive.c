void calculate(int db, int x)
{
	if (x!=0)
		printf("%d", db / x);               //��ѭ
}

int main()
{
	int b, c;
	scanf("%d%d", &b, &c);
	calculate(b, c);
	return  0;
}