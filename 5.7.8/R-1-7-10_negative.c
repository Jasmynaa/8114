//5.7.8��(��Ҫ)��������ֵ�����ͱ����붨��һ��
//------ά��8114�ġ�R - 1 - 7 - 10 ��������ֵ�����ͱ����붨��һ�¡�

unsigned int fun(unsigned int par);
int main(void)
{
	unsigned int i = 1;
	unsigned int j;
	j = fun(i);
	return (0);
}
unsigned int fun(unsigned int par)
{
	if (1 == par)
	{
		return (-1);      //Υ��
	}
	else if (2 == par)
	{
		return (1.5);     //Υ��2
	}
	else
	{
		return (2 * par);
	}
}

