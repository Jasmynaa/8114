int fun(void);     // ��ѭ
int datax = 0;
int datay = 0;
int main(void)
{
	int iz01, iz02;
	datax = 1;
	datay = 2;
	iz02 = fun();
	return 0;
}
int fun(void)      // ��ѭ
{
	int temp;
	temp = 2 * datax + 3 * datay;
	return temp;
}