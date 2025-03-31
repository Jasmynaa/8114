//5.13.1　(必要)禁止局部变量与全局变量同名
//------维持8114的“R - 1 - 13 - 1 禁止局部变量与全局变量同名”

int sign = 0;
int main(void)
{
	int local = 0;
	int sign = 0;        //违背
	//...
	return (0);
}
