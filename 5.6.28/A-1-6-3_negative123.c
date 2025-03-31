//5.6.28　(必要)动态申请的内存空间用完后及时释放
//------加严8114的“A - 1 - 6 - 3 动态申请的内存空间用完后及时释放”

int fun()
{
	int *a = (int *)malloc(sizeof(int));//违背
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