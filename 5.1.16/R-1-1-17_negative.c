//5.1.16��(����)�����ں�������ʹ���ⲿ����
//------�ſ�8114�ġ�R-1-1-17 ��ֹ�ں�������ʹ���ⲿ������

int main(void)
{
	extern int zdata;           // Υ��
	extern int fadd(int, int);  // Υ��
	int x, y;
	x = 1;
	y = 2;
	zdata = fadd(x, y);
	return 0;
}
