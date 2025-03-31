//5.13.2　(必要)禁止函数形参与全局变量同名
//------维持8114的“R - 1 - 13 - 2 禁止函数形参与全局变量同名”

int sign = 0;
int func(int sign)      //违背
{
	int local = 0;
	local = sign;
	//...
	return local;
}
int main(void)
{
	//...
	return (0);
}
