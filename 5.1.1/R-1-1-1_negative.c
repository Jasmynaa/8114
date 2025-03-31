//------替代8114的“R-1-1-1 禁止通过宏定义改变关键字和基本类型含义” 
#define pStr char *    //违背
void main(void)
{
	char string[4] = "abc";
	pStr p1, p2;
	p1 = string;
	p2 = string;      //导致p2是char，而非char *
	return;
}
