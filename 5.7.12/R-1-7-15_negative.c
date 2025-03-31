//5.7.12　(建议)谨慎使用函数变长参数列表
//------放宽8114的“R - 1 - 7 - 15 禁止在函数参数表中使用省略号”

int fun(int datax, ...);    //违背
int main(void)
{
	int ix, iy, iz;
	ix = 1;
	iy = 2;
	iz = fun(ix, iy);
	return (0);
}
int fun(int datax, ...)     //违背2
{
	int temp;
	temp = 2 * datax;
	return temp;
}
