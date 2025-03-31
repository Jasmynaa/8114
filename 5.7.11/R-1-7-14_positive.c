unsigned int Vel(unsigned int *pcData);
unsigned int Acc(unsigned int *pcData);
int main(void)
{
	unsigned int dis, hei, temp1, temp2;
	dis = 3;
	temp1 = Vel(&dis);
	temp2 = Acc(&dis);
	hei = temp1 + temp2;                       //×ñÑ­
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
