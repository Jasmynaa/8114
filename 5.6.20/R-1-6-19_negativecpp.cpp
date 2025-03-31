//5.6.20　(必要)禁止使用strcpy函数，推荐使用strncpy函数或strncpy_s函数
//------具体化8114的“R - 1 - 6 - 19 使用字符串赋值、拷贝、追加等函数时，禁止目标字符串存储空间越界”

int main(void)
{
	char s1[10] = { 0 };
		char s2[10] = { 0 };
	strncpy(s1, "hello world", 11);//违背
	return 0;
}