//5.7.6��(��Ҫ)��ֹ�޷���ֵ�����ķ��������з���ֵ
//------ά��8114�ġ�R - 1 - 7 - 8 ��ֹ�޷���ֵ�����ķ��������з���ֵ��

void fun(int a, int *b);
int main(void)
{
	int i = 1, j = 2;
	fun(i, &j);
	return (0);
}
void fun(int a, int *b)
{
	if (0 == a)
	{
		*b = *b + a;
	}
	else
	{
		*b = *b - a;
	}
	return (a + 1);           //Υ��
}
