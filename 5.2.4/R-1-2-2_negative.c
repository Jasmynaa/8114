//5.2.4　(必要)if-else语句必须使用大括号，除非只有一条可执行语句且与if-else语句同行
//------内容维持但适当放宽8114的“R - 1 - 2 - 2 if、else if、else必须用大括号括起来”

int main(void)
{
	int i = 0;
	int j;
	//......
	if (0 == i)
		j = 1;           //违背
	else
		j = 3;           //违背
	return (0);
}

