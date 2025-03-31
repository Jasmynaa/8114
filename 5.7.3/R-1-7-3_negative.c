//5.7.3　(必要)实参与形参的个数必须一致
//------维持8114的“R - 1 - 7 - 3 实参与形参的个数必须一致”

int fcal(int x, int y);
int main(void)
{
	int datax, datay, dataz;
	datax = 2;
	datay = 1;
	dataz = fcal(datax, datay, datax);   //违背
	return (0);
}
int fcal(int x, int y)
{
	int ret = x + y;
	return ret;
}
