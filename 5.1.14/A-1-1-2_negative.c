//------加严8114的“A-1-1-2 谨慎由于宏中括号不匹配造成使用上的误解” 

#define IF0(x) if(0 == (x)) { //违背
int main(void)
{
	int test = 0;
	IF0(test)
		test = test + 1;
}
return (0);
}

