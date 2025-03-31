int fun(void)
{
	const int *p = (int*)malloc(3 * sizeof(int)); //×ñÑ­
	int *p1 = p;
	p1++;
	free(p);   //×ñÑ­
	return 0;
}