//5.2.7　(必要)逻辑表达式中的运算项必须要使用括号
//------维持8114的“R - 1 - 2 - 5 逻辑判别表达式中的运算项必须要使用括号”
//--注：“位与”提升为强制准则。

int main_bad(void)
{
	unsigned int i, tbc;
	tbc = 0x80;
	if (tbc & 0x80 == 0x80)   // 违背
	{
		i = 1;
	}
	else
	{
		i = 2;
	}
	return 0;
}
