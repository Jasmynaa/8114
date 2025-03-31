//5.1.6　(必要)禁止宏被差异性地重复定义
//------替代8114的“R-1-1-5 禁止#define被重复定义” 

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
#define BLOCKDEF 2U  //违背
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

