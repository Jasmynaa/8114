//5.3.7��(��Ҫ)��ֹ�Ժ����в���ָ����и�ֵ
//------����ά�ֵ������޸�8114�ġ�R - 1 - 3 - 3 ��ֹ�Բ���ָ����и�ֵ��

unsigned int pfun(unsigned int *pa);
int main(void)
{
	unsigned int data;
	unsigned int result;
	result = pfun(&data);
	return (0);
}
unsigned int pfun(unsigned int *pa)
{
	static unsigned int i = 10;
	i = i + 1;
	pa = &i;            //Υ��
	return i;
}

