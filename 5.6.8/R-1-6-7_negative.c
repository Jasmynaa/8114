//5.6.8　(必要)禁止移位操作中的移位数为负数
//------维持8114的“R - 1 - 6 - 7 禁止移位操作中的移位数为负数”

int main(void)
{
	unsigned int xdata = 2, ydata = 3;
	int sn = -2;
	xdata = xdata << -1;        //违背
	ydata = ydata >> sn;        //违背2
	return (0);
}
