int main(void)
{
	unsigned char i;            // ok-1
	int j;
	i = (unsigned char)0xFF;    // ok-2
	j = i + 1;
	return 0;
}
