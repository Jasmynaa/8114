//5.6.9　(强制)数组禁止越界使用
//------维持8114的“R - 1 - 6 - 8 数组禁止越界使用”

void comp(int a[], int n) //n为数组长度
{
	int i;
	for (i = 0; i <= n; i++) //违背
	{
		a[i] = 0;
	}
}
int main(void)
{
	int array[100];
	comp(array, 100);
	array[100] = 1;          //违背
	return (0);
}
