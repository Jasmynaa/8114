//5.9.1　(必要)for循环控制变量必须使用局部变量
//------维持特殊的8114的“R - 1 - 9 - 1 for循环控制变量必须使用局部变量”

unsigned int Ginum = 0;
int main(void)
{
	int i = 10;
	for (Ginum = 0; Ginum < 10; Ginum++)  //违背
	{
		i = i - 1;
	}
	return (0);
}

