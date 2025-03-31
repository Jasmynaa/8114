int main(void)
{
	char s1[20] = { 0 };
	char s2[10] = { 0 };
	strncpy(s1, "hello world", 11);//×ñÑ­
	strncpy_s(s1, "hello world", 11);//×ñÑ­
	return 0;
}