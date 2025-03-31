
typedef unsigned int bool;
int main(void)
{
	bool outReg1, outReg2;
	int r = 100, h = 500, flag = 0;
	outReg1 = (r > 100);
	outReg2 = (h > 300);
	if (outReg1 && (!outReg2))    //×ñÑ­
	{
		flag = 1;
	}
	if ((!outReg1) && outReg2)    //×ñÑ­2
	{
		flag = 2;
	}
	return (0);
}

