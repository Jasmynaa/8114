//5.9.3　(建议)谨慎在for循环体内部修改循环控制变量
//------放宽8114的“R - 1 - 9 - 3 禁止在for循环体内部修改循环控制变量”

int main(void)
{
	int i, j, k;
	j = 100;
	k = 0;
	for (i = 0; i < j; i++)
	{
		i = 2 * i;    //违背
		k = k + 1;
	}
	return (0);
}

