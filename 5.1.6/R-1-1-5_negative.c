//5.1.6��(��Ҫ)��ֹ�걻�����Ե��ظ�����
//------���8114�ġ�R-1-1-5 ��ֹ#define���ظ����塱 

#define BLOCKDEF 1U
unsigned int fun1(void);
unsigned int fun2(void);
int main(void)
{
	unsigned int a1 = 0U;
	unsigned int a2 = 0U;
	unsigned int a3 = 0U;
	unsigned int a4 = 0U;
	a1 = fun1();
	a2 = a1 + BLOCKDEF;
	a3 = fun2();
	a4 = a3 + BLOCKDEF;
	return (0);
}
#define BLOCKDEF 2U  //Υ��
unsigned int fun1(void)
{
	unsigned int x = 0U;
	x = x + BLOCKDEF;
	return x;
}
unsigned int fun2(void)
{
	unsigned int x = 0U;
	x = x + BLOCKDEF;
	return x;
}

