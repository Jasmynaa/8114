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
	int sign = 0;
	//...
	sign = func(local);      //��ѭ
	//...
	(void)func(local);       //��ѭ2
	//...
	return (0);
}
