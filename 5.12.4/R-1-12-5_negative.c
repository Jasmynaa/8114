//5.12.4　(必要)禁止无符号数与有符号数之间的直接比较
//------维持8114的“R - 1 - 12 - 5 禁止无符号数与有符号数之间的直接比较”

int main(void)
{
	unsigned int x;
	int y, i;
	x = 2;
	y = -2;
	if (y < x)          //违背
	{
		i = 0;
	}
	else
	{
		i = 1;
	}
	return (0);
}

