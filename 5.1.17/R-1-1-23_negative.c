//5.1.17��(����)����������Ϊ��ʱ��Ӧʹ��void��ȷ˵��
//------�ſ�8114�ġ�R-1-1-23 ����������Ϊ��ʱ������ʹ��void��ȷ˵���� 

int fun();          // Υ��
int datax = 0;
int datay = 0;
int main(void)
{
	int iz01, iz02;
	datax = 1;
	datay = 2;
	iz01 = fun();
	return 0;
}
int fun()           // Υ��
{
	int temp;
	temp = 2 * datax + 3 * datay;
	return temp;
}