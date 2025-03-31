//5.7.9　(建议)具有返回值的函数，其返回值如果不被使用，调用时应有(void)说明
//------放宽8114的“R - 1 - 7 - 11 具有返回值的函数，其返回值如果不被使用，调用时应有(void)说明”

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
	func(local);      //违背
	//...
	return (0);
}
