int main(void)
{
	char s1[20] = { 0 };
	char s2[10] = { 0 };
	strncpy(s1, "hello world", 11);//��ѭ
	strncpy_s(s1, "hello world", 11);//��ѭ
	return 0;
}