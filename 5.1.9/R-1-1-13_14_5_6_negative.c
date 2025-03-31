//------内容维持但统一合并8114的“R-1-1-13 函数声明中必须对参数类型进行声明，并带有变量名” 
//------“R - 1 - 1 - 14 函数声明必须与函数原型一致”
//------“ R - 1 - 7 - 5 函数声明和函数定义中的参数类型必须一致”
//------“ R - 1 - 7 - 6 函数声明和函数定义中的返回类型必须一致”

int fun1();                 // 违背R-1-1-13
int fun2(int, int);         // 违背R-1-1-13

int fun3(short height);     // 违背R-1-1-14  R-1-7-5
float fun4(int height);     // 违背R-1-1-14  R-1-7-6
int fun5(int height);       // 违背R-1-1-14

int main(void)
{
	int a, b, c, d;
	a = 10;
	b = 5;
	c = fun1(a, b);
	d = fun2(a, b);

	int i, j1, j2, j3;
	i = 1000;
	j1 = fun3(i);
	j2 = fun4(i);
	j3 = fun5(i);
	return 0;
}
int fun1(int a, int b)
{
	int ret;
	ret = a + b;
	return ret;
}
int fun2(int a, int b)
{
	int ret;
	ret = a - b;
	return ret;
}

int fun3(int height)
{
	int h;
	h = height + 10;
	return h;
}
int fun4(int height)
{
	int h;
	h = height - 10;
	return h;
}
int fun5(int width)
{
	int w;
	w = width - 10;
	return w;
}
