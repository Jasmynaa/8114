//5.7.12��(����)����ʹ�ú����䳤�����б�
//------�ſ�8114�ġ�R - 1 - 7 - 15 ��ֹ�ں�����������ʹ��ʡ�Ժš�

int fun(int datax, ...);    //Υ��
int main(void)
{
	int ix, iy, iz;
	ix = 1;
	iy = 2;
	iz = fun(ix, iy);
	return (0);
}
int fun(int datax, ...)     //Υ��2
{
	int temp;
	temp = 2 * datax;
	return temp;
}
