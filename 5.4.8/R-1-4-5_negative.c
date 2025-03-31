//5.4.8　(建议)避免switch语句中只包含default分支
//------放宽8114的“R - 1 - 4 - 5 禁止switch语句中只包含default语句”

int main(void)
{
	int i = 0;
	switch (i)		// 违背
	{
	default:
		break;
	}
	return 0;
}