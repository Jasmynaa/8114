//5.3.16　(建议)谨慎对指针进行算术运算
//------维持8114的“A - 1 - 3 - 3 谨慎对指针进行代数运算”

void static_p(unsigned int *p1_ptr)
{
	unsigned int w;

	w = *(p1_ptr + 8); //违背
}