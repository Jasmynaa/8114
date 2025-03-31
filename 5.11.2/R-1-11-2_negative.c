//5.11.2　(建议)变量初始化避免隐含依赖于系统的缺省值
//------放宽8114的“R - 1 - 11 - 2 变量初始化禁止隐含依赖于系统的缺省值”

int Gstate;                //违背
int main(void)
{
	static int StateN;     //违背2
	if (1 == Gstate)
	{
		StateN = StateN + 1;
	}
	return (0);
}

