//5.4.4��(��Ҫ)��ö�������о���ȫ�⣬switch���Ӧ��default��֧
//------����ά�ֵ������޸�8114�ġ�R - 1 - 4 - 6 ��ö�������о���ȫ�⣬switch����Ҫ��default��

enum WorkMode { INI = 0, FIGHT, MAINTAIN, TRAIN } work_state;
int main(void)
{
	int i = 0;
	int j = 0;
	//...
	switch (work_state)    //Υ��
	{
	case INI:
		i = 1;
		break;
	case FIGHT:
		i = 2;
		break;
	case MAINTAIN:
		i = 3;
		break;
	}
	switch (i)             //Υ��
	{
	case 0:
		j = 0;
		break;
	case 1:
	case 2:
		j = 1;
		break;
	}
	return (0);
}


