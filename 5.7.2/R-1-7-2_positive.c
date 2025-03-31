unsigned int sum(unsigned int p1, unsigned short p2);
int main(void)
{
	unsigned int ix, iy, iz;
	ix = 1;
	iy = 2;
	iz = sum(ix, (unsigned short)iy);  //×ñÑ­
	return (0);
}
unsigned int sum(unsigned int p1, unsigned short p2)
{
	unsigned int ret;
	ret = (unsigned int)(p1 + p2);
	return ret;
}
