//5.4.6��(��Ҫ)switch�������з�֧���������ͬ�Ĳ�η�Χ
//------ά��8114�ġ�R - 1 - 4 - 8 switch�������з�֧���������ͬ�Ĳ�η�Χ��

int main(void)
{
	int x = 2;
	int y = 0;
	int z = 0;
	//...
	switch (x)
	{
	case 1:
		if (0 == y)
		{
			case 2:        //Υ�� 1
			z = 1;
			break;
		}
		z = 2;
		break;
	default:
		break;
	}
	return (0);
}
