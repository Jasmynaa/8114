//5.12.1��(��Ҫ)��ֹ���߼������д��ڻ�С�ڵ��߼��Ƚ�
//------ά��8114�ġ�R - 1 - 12 - 1 ��ֹ���߼������д��ڻ�С�ڵ��߼��Ƚϡ�

typedef unsigned int bool;
int main(void)
{
	bool outReg1, outReg2;
	int r = 100, h = 500, flag = 0;
	outReg1 = (r > 100);
	outReg2 = (h > 300);
	if (outReg1 > outReg2)       //Υ��
	{
		flag = 1;
	}
	if (outReg1 < outReg2)       //Υ��2
	{
		flag = 2;
	}
	return (0);
}
