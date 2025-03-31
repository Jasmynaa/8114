//5.4.1　(必要)if-else if语句应有else分支
//------内容维持但表述修改8114的“R - 1 - 4 - 1 在if - else if语句中必须使用else分支”

int main(void)
{
	int i = 0, j = 0;
	double x = 0.0;
	//..
	if (0 == i)
	{
		x = 1.0;
	}
	else if (1 == i)
	{
		x = 2.0;
	}                       //违背
	if (0 == j)
	{
		x = x + 5.0;
	}
	return (0);
}
