//5.3.7　(必要)禁止对函数中参数指针进行赋值
//------内容维持但表述修改8114的“R - 1 - 3 - 3 禁止对参数指针进行赋值”

unsigned int pfun(unsigned int *pa);
int main(void)
{
	unsigned int data;
	unsigned int result;
	result = pfun(&data);
	return (0);
}
unsigned int pfun(unsigned int *pa)
{
	static unsigned int i = 10;
	i = i + 1;
	pa = &i;            //违背
	return i;
}

