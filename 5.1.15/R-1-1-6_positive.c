unsigned int fun1(void);
unsigned int fun2(void);
int main_good(void)
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
#define BLOCKDEF 2U     // ×ñÑ­
	x = x + BLOCKDEF;
#undef  BLOCKDEF        // ×ñÑ­
	return x;
}
unsigned int fun2(void)
{
	unsigned int x = 0U;
#define BLOCKDEF 2U     // ×ñÑ­
	x = x + BLOCKDEF;
#undef  BLOCKDEF        // ×ñÑ­
	return x;
}