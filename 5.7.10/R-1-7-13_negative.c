//5.7.10　(建议)静态函数(static)应在所在文件中被使用
//------放宽8114的“R - 1 - 7 - 13 静态函数必须被使用”

static int fun(int paData);
int main(void)
{
	int i, thData;
	thData = 2;
	i = 2 * thData;
	return (0);
}
static int fun(int paData)   //违背
{
	int i;
	i = 2 * paData;
	return i;
}
