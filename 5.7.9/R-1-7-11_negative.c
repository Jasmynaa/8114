//5.7.9��(����)���з���ֵ�ĺ������䷵��ֵ�������ʹ�ã�����ʱӦ��(void)˵��
//------�ſ�8114�ġ�R - 1 - 7 - 11 ���з���ֵ�ĺ������䷵��ֵ�������ʹ�ã�����ʱӦ��(void)˵����

int func(int para)
{
	int stat;
	if (para >= 0)
	{
		//...
		stat = 1;
	}
	else
	{
		//...
		stat = -1;
	}
	return(stat);
}
int main(void)
{
	int local = 0;
	//...
	func(local);      //Υ��
	//...
	return (0);
}
