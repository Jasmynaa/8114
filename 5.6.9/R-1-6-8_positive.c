void comp(int a[], int n) //nΪ���鳤��
{
	int i;
	for (i = 0; i < n; i++)  //��ѭ
	{
		a[i] = 0;
	}
}
int main(void)
{
	int array[100];
	comp(array, 100);
	array[99] = 1;           //��ѭ
	return (0);
}
