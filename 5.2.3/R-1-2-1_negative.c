//5.2.3　(必要)循环体必须使用大括号，除非只有一条可执行语句且与循环控制语句同行
//------内容维持但适当放宽8114的“R-1-2-1 循环体必须用大括号括起来” 

int main(void)
{
	int i;
	int data[10];
	for (i = 0; i < 10; i++)
		data[i] = 0;           //违背
	return (0);
}
