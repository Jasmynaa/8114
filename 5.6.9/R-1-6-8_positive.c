void comp(int a[], int n) //n为数组长度
{
	int i;
	for (i = 0; i < n; i++)  //遵循
	{
		a[i] = 0;
	}
}
int main(void)
{
	int array[100];
	comp(array, 100);
	array[99] = 1;           //遵循
	return (0);
}
