//5.11.2��(����)������ʼ����������������ϵͳ��ȱʡֵ
//------�ſ�8114�ġ�R - 1 - 11 - 2 ������ʼ����ֹ����������ϵͳ��ȱʡֵ��

int Gstate;                //Υ��
int main(void)
{
	static int StateN;     //Υ��2
	if (1 == Gstate)
	{
		StateN = StateN + 1;
	}
	return (0);
}

