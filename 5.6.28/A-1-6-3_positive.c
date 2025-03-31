int fun()
{
	int *a = (int *)malloc(sizeof(int));
	int arr[5] = {1, 2, 3, 4, 5};
	a=&arr[2];
	int *b=(int*)malloc(sizeof(int));
	b=arr ;
	free(b);
	//...
	free(a);//×ñÑ­

}