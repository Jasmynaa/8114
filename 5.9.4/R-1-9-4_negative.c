//5.9.4　(建议)无限循环建议统一规范化使用while(1)语句
//------放宽8114的“R - 1 - 9 - 4 无限循环必须使用while(1)语句，禁止使用for(;;)等其它形式的语句”

int Gstate = 0;
int main(void)
{
	for (;;)//违背
	{
		//...
		if (1 == Gstate)
		{
			break;
		}
	}
	return 0;
}
