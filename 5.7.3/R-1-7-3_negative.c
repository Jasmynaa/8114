//5.7.3��(��Ҫ)ʵ�����βεĸ�������һ��
//------ά��8114�ġ�R - 1 - 7 - 3 ʵ�����βεĸ�������һ�¡�

int fcal(int x, int y);
int main(void)
{
	int datax, datay, dataz;
	datax = 2;
	datay = 1;
	dataz = fcal(datax, datay, datax);   //Υ��
	return (0);
}
int fcal(int x, int y)
{
	int ret = x + y;
	return ret;
}
