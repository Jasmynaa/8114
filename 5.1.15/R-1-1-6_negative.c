//5.1.15　(建议)谨慎使用#undef
//------替代8114的“R-1-1-6 函数中的#define和#undef必须配对使用”

unsigned int fun1(void);
unsigned int fun2(void);
int main_bad(void)
{
	unsigned int a1 = 0U;
	unsigned int a2 = 0U;
	unsigned int a3 = 0U;
	a1 = fun1();
	a2 = fun2();
	a3 = a1 + a2;
	return 0;
}
unsigned int fun1(void)
{
	unsigned int x = 0U;
#define BLOCKDEF 2U     // 违背
	x = x + BLOCKDEF;
	return x;
}
unsigned int fun2(void)
{
	unsigned int x = 0U;
	x = x + BLOCKDEF;
#undef  BLOCKDEF        // 违背
	return x;
}