int fun(void)
{
	const int *p = (int*)malloc(3 * sizeof(int)); //��ѭ
	int *p1 = p;
	p1++;
	free(p);   //��ѭ
	return 0;
}