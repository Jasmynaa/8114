int fsub(int *a, int *b);
int main(void)
{
	int sub = 0;
	int a = 1, b = 2;
	sub = fsub(&a, &b);
	return (0);
}
int fsub(int *a, int *b)
{
	int sub = 0;
	if ((*a) > (*b))            //��ѭ
	{
		sub = (*a) - (*b);
	}
	else if ((*a) < (*b))       //��ѭ2
	{
		sub = (*b) - (*a);
	}
	else
	{
		sub = 0;
	}
	return sub;
}

