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
	if ((*a) > (*b))            //×ñÑ­
	{
		sub = (*a) - (*b);
	}
	else if ((*a) < (*b))       //×ñÑ­2
	{
		sub = (*b) - (*a);
	}
	else
	{
		sub = 0;
	}
	return sub;
}

