//5.7.5��(��Ҫ)�з���ֵ�ĺ�������ͨ��������䷵��
//------ά��8114�ġ�R - 1 - 7 - 7 �з���ֵ�ĺ�������ͨ��������䷵�ء�

int fun(int a, int *b);
int main(void)
{
	int i = 1, j = 2;
	int k;
	k = fun(i, &j);
	return (0);
}
int fun(int a, int *b)
{
	if (1 == a)
	{
		*b = *b + a;
		return (1);
	}
	else
	{
		*b = *b - a;
	}                     //Υ��
}
