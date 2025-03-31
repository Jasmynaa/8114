
int main(void)
{
	enum Etype1 {
		RED = 0,      //×ñÑ­
		WHITE,
		BLUE
	} edata1;
	enum Etype2 {     //×ñÑ­2
		BLACK = 3,
		GREEN = 4,
		YELLOW = 5
	} edata2;
	edata1 = BLUE;
	edata2 = GREEN;
	return (0);
}

