//5.7.2��(��Ҫ)��ֹ������ʵ�κ��β����Ͳ�һ��
//------ά��8114�ġ�R - 1 - 7 - 2 ��ֹ������ʵ�κ��β����Ͳ�һ�¡�

unsigned int sum(unsigned int p1, unsigned short p2);
int main(void)
{
	unsigned int ix, iy, iz;
	ix = 1;
	iy = 2;
	iz = sum(ix, iy);              //Υ��
	return (0);
}
unsigned int sum(unsigned int p1, unsigned short p2)
{
	unsigned int ret;
	ret = (unsigned int)(p1 + p2);
	return ret;
}
