//5.3.14��(����)����ʹ�ú���ָ��
//------ά��8114�ġ�A - 1 - 3 - 1 ����ʹ�ú���ָ�롱

typedef struct struct_fn_t
{
	void(*s_fn)(struct struct_fn_t * s_fn_ptr);
} struct_fn;

void sda_054(void)
{
	struct_fn s_fn_ptrs[10];
	struct_fn * sda_054_p = &s_fn_ptrs[0];

	/* ----- */

	sda_054_p->s_fn(sda_054_p++);      //Υ��

	/* ----- */
}