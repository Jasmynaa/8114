int main(void)
{
	int x = 0, y = 1, z = 2;
	if ((x == 1) || (y == 2))  //��ѭ
	{
		z = 3;
	}
	if ((x == 3) && (y == 4))  //��ѭ
	{
		z = 5;
	}
	if ((x | y) == 1)            //��ѭ
	{
		z = 7;
	}
	return (0);
}
