//5.7.2　(必要)禁止函数的实参和形参类型不一致
//------维持8114的“R - 1 - 7 - 2 禁止函数的实参和形参类型不一致”

unsigned int sum(unsigned int p1, unsigned short p2);
int main(void)
{
	unsigned int ix, iy, iz;
	ix = 1;
	iy = 2;
	iz = sum(ix, iy);              //违背
	return (0);
}
unsigned int sum(unsigned int p1, unsigned short p2)
{
	unsigned int ret;
	ret = (unsigned int)(p1 + p2);
	return ret;
}
