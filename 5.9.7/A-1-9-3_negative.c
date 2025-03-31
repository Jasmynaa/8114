//5.9.7　(建议)谨慎在循环中使用多个continue语句
//------维持8114的“A - 1 - 9 - 3 谨慎在循环中使用多个continue语句”
int main()
{
	for (int i = 1; i<10; i++)
	{
		if (i == 1)
		{
			continue;   //违背

		}
		else if (i == 5)
		{
			 continue;//违背
		}
		printf("Number=%d\n", i);
	}
	return 0;
}

