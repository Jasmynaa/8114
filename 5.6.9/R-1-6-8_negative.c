//5.6.9��(ǿ��)�����ֹԽ��ʹ��
//------ά��8114�ġ�R - 1 - 6 - 8 �����ֹԽ��ʹ�á�

void comp(int a[], int n) //nΪ���鳤��
{
	int i;
	for (i = 0; i <= n; i++) //Υ��
	{
		a[i] = 0;
	}
}
int main(void)
{
	int array[100];
	comp(array, 100);
	array[100] = 1;          //Υ��
	return (0);
}
