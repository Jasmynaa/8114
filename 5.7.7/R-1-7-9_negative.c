//5.7.7��(��Ҫ)�з���ֵ�����ķ�����������з���ֵ
//------ά��8114�ġ�R - 1 - 7 - 9 �з���ֵ�����ķ�����������з���ֵ��

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
	if (0 == a)
	{
		*b = *b + a;
	}
	else
	{
		*b = *b - a;
	}
	return;             //Υ��
}
