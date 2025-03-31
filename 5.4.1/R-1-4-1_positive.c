
int main(void)
{
	int i = 0, j = 0;
	double x = 0.0;
	//..
	if (0 == i)
	{
		x = 1.0;
	}
	else if (1 == i)
	{
		x = 2.0;
	}
	else                   //×ñÑ­
	{
		x = 0.0;
	}
	if (0 == j)
	{
		x = x + 5.0;
	}
	return (0);
}
