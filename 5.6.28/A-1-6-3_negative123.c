//5.6.28��(��Ҫ)��̬������ڴ�ռ������ʱ�ͷ�
//------����8114�ġ�A - 1 - 6 - 3 ��̬������ڴ�ռ������ʱ�ͷš�

int fun()
{
	int *a = (int *)malloc(sizeof(int));//Υ��
	int arr[5] = {1, 2, 3, 4, 5};
	a=&arr[2];
	fun1();
}
fun1()
{
	int *b=(int*)malloc(sizeof(int));
	int arr[5] = {1, 2, 3, 4, 5};
	b=arr ;
	free(b);
	
}