//5.13.10��(��Ҫ)��ֹ�ڱ��ʽ�г��ֶ��ͬһvolatile���ͱ���������
//------ά��8114�ġ�R - 1 - 13 - 13 ��ֹ�ڱ��ʽ�г��ֶ��ͬһvolatile���ͱ��������㡱

int main(void)
{
	unsigned int i, z[100];
	volatile unsigned int v = 1;
	for (i = 0; i<100; i++)
	{
		z[i] = 3 * v*v + 2 * v + i;    //Υ��
	}
	return (0);
}

