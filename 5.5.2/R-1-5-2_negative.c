//5.5.2��(��Ҫ)��ֹʹ��setjmp/longjmp
//------ά��8114�ġ�R - 1 - 5 - 2 ��ֹʹ��setjmp / longjmp��

#include <math.h>
#include <setjmp.h>
jmp_buf mark;
double fdiv(double a, double b);
int main(void)
{
	int jmpret;
	double r, n1 = 1.0, n2 = 0.0;
	jmpret = setjmp(mark);   //Υ��
	if (0 == jmpret)
	{
		r = fdiv(n1, n2);
	}
	else
	{
		return(-1);
	}
	return (0);
}
double fdiv(double a, double b)
{
	double div = a / b;
	if (fabs(b) < 1e-10)
	{
		longjmp(mark, -1);   //Υ��
	}
	return div;
}
