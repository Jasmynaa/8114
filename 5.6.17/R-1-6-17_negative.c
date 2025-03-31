//5.6.17　(建议)动态分配空间的指针应定义为常量属性
//------具体细化8114的“R - 1 - 6 - 17 被free的指针必须指向最初malloc、calloc分配的地址”

int fun(void)
{
	int *p = (int*)malloc(3 * sizeof(int)); //违背
	p++;
	free(p);   //违背
	return 0;
}