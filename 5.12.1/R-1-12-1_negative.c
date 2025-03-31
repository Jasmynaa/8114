//5.12.1　(必要)禁止对逻辑量进行大于或小于的逻辑比较
//------维持8114的“R - 1 - 12 - 1 禁止对逻辑量进行大于或小于的逻辑比较”

typedef unsigned int bool;
int main(void)
{
	bool outReg1, outReg2;
	int r = 100, h = 500, flag = 0;
	outReg1 = (r > 100);
	outReg2 = (h > 300);
	if (outReg1 > outReg2)       //违背
	{
		flag = 1;
	}
	if (outReg1 < outReg2)       //违背2
	{
		flag = 2;
	}
	return (0);
}
