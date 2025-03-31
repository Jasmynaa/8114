//(必要)禁止在sizeof中包含副作用
//------内容维持但表述修改8114的“R - 1 - 6 - 13 禁止在sizeof中使用赋值”

int main(void)
{
	int x = 1, y = 2;
	int ilen;
	ilen = sizeof(x = y); //违背
	return (0);
}
