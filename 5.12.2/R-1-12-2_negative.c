//5.12.2　(必要)禁止对非顺序存储地址的指针进行大于或小于的逻辑比较
//------细化8114的“R - 1 - 12 - 2 禁止对指针进行大于或小于的逻辑比较”

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
	if (a > b)            //违背
	{
		sub = (*a) - (*b);
	}
	else if (a < b)       //违背2
	{
		sub = (*b) - (*a);
	}
	else
	{
		sub = 0;
	}
	return sub;
}

