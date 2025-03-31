//5.4.7　(建议)避免使用空switch语句
//------放宽8114的“R - 1 - 4 - 3 禁止使用空switch语句”

int main(void)
{
	int i = 0;
	switch (i)  // 违背
	{
	}
	return 0;
}