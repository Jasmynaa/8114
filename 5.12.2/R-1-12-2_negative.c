//5.12.2��(��Ҫ)��ֹ�Է�˳��洢��ַ��ָ����д��ڻ�С�ڵ��߼��Ƚ�
//------ϸ��8114�ġ�R - 1 - 12 - 2 ��ֹ��ָ����д��ڻ�С�ڵ��߼��Ƚϡ�

int fsub(int *a, int *b);
int main(void)
{
	int sub = 0;
	int a = 1, b = 2;
	sub = fsub(&a, &b);
	return (0);
}
int fsub(int *a, int *b)
{
	int sub = 0;
	if (a > b)            //Υ��
	{
		sub = (*a) - (*b);
	}
	else if (a < b)       //Υ��2
	{
		sub = (*b) - (*a);
	}
	else
	{
		sub = 0;
	}
	return sub;
}

