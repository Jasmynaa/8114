//5.2.1　(强制)逻辑表达式中的“位与”运算项必须要使用括号
//------针对位与运算强化8114的“R-1-2-5 逻辑判别表达式中的运算项必须要使用括号” 

int main(void)
{
	unsigned int i, tbc;
	tbc = 0x80;
	if (tbc & 0x80 == 0x80)     //违背
	{
		i = 1;
	}
	else
	{
		i = 2;
	}
	return (0);
}
