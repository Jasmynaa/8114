//5.4.3　(必要)禁止非整数类型的switch语句控制表达式
//------扩展8114的“R - 1 - 4 - 4 禁止对bool量使用switch语句”

int main(void)
{
	int x = 0;
	int y = 0;
	//...
	switch (0 == x)    //违背
	{
	case 1:
		y = 1;
		break;
	default:
		y = 2;
		break;
	}
	return (0);
}
