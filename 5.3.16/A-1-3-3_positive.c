
void static_p(unsigned int *p1_ptr)
{
	unsigned int w;
	unsigned int array[5];
	p1_ptr = array;
	w = *(p1_ptr + 8);
}