//5.7.11��(��Ҫ)��ֹͬһ�����ʽ�е��ö��˳����غ���
//------ά��8114�ġ�R - 1 - 7 - 14 ��ֹͬһ�����ʽ�е��ö��˳����غ�����

unsigned int Vel(unsigned int *pcData);
unsigned int Acc(unsigned int *pcData);
int main(void)
{
	unsigned int dis, hei;
	dis = 3;
	hei = Vel(&dis) + Acc(&dis);             //Υ��
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
