//5.4.3��(��Ҫ)��ֹ���������͵�switch�����Ʊ��ʽ
//------��չ8114�ġ�R - 1 - 4 - 4 ��ֹ��bool��ʹ��switch��䡱

int main(void)
{
	int x = 0;
	int y = 0;
	//...
	switch (0 == x)    //Υ��
	{
	case 1:
		y = 1;
		break;
	default:
		y = 2;
		break;
	}
	return (0);
}
