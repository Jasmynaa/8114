//5.7.11　(必要)禁止同一个表达式中调用多个顺序相关函数
//------维持8114的“R - 1 - 7 - 14 禁止同一个表达式中调用多个顺序相关函数”

unsigned int Vel(unsigned int *pcData);
unsigned int Acc(unsigned int *pcData);
int main(void)
{
	unsigned int dis, hei;
	dis = 3;
	hei = Vel(&dis) + Acc(&dis);             //违背
	return (0);
}
unsigned int Vel(unsigned int *pcData)
{
	unsigned int x = (*pcData);
	(*pcData) = x*x;
	return x;
}
unsigned int Acc(unsigned int *pcData)
{
	unsigned int x = (*pcData);
	(*pcData) = 2 * x;
	return x;
}
