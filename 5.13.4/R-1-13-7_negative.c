//5.13.4　(建议)避免块内标识名与块外标识名同名
//------放宽8114的“R - 1 - 13 - 7 禁止在内部块中重定义已有的变量名”

int main(void)
{
	int i, ix, iy, ip;
	ix = 1;
	ip = 1;
	if (1 == ix)
	{
		int ip = 0;     //违背
		for (i = 0; i<10; i++)
		{
			ip = ip + ix;
		}
	}
	iy = ip;
	return (0);
}