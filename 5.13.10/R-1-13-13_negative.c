//5.13.10　(必要)禁止在表达式中出现多个同一volatile类型变量的运算
//------维持8114的“R - 1 - 13 - 13 禁止在表达式中出现多个同一volatile类型变量的运算”

int main(void)
{
	unsigned int i, z[100];
	volatile unsigned int v = 1;
	for (i = 0; i<100; i++)
	{
		z[i] = 3 * v*v + 2 * v + i;    //违背
	}
	return (0);
}

