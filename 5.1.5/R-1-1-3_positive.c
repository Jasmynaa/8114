
typedef int mytype;
int fun(void);
int main(void)
{
	typedef float mytype2;   // ��ѭ
	mytype a = 0;
	a = fun();
	return (0);
}
typedef unsigned int mytype1;   //��ѭ
int fun(void)
{
	mytype1 x = 0;
	return (int)x;
}