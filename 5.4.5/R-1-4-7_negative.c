//5.4.5��(��Ҫ)switch����е�case��default��֧������break��return��ֹ�����÷ǿ�case���������ȷע��
//------�ſ�8114�ġ�R - 1 - 4 - 7 switch�е�case��default������break��return��ֹ������case���������ȷע�͡�

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	//...
	switch (i)
	{
	case 1:         //Υ��
		if (j > 0)
		{
			k = 1;
			break;
		}
		k = 2;
	case 2:
	case 3:         //Υ��
	{
						j = 3;
	}
	case 4:         //Υ��
		k = 4;
	case 5:
		j = 5;
		break;
	default:        //Υ��
		j = -1;
	}
	return (0);
}
