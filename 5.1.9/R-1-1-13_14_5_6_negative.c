//------����ά�ֵ�ͳһ�ϲ�8114�ġ�R-1-1-13 ���������б���Բ������ͽ��������������б������� 
//------��R - 1 - 1 - 14 �������������뺯��ԭ��һ�¡�
//------�� R - 1 - 7 - 5 ���������ͺ��������еĲ������ͱ���һ�¡�
//------�� R - 1 - 7 - 6 ���������ͺ��������еķ������ͱ���һ�¡�

int fun1();                 // Υ��R-1-1-13
int fun2(int, int);         // Υ��R-1-1-13

int fun3(short height);     // Υ��R-1-1-14  R-1-7-5
float fun4(int height);     // Υ��R-1-1-14  R-1-7-6
int fun5(int height);       // Υ��R-1-1-14

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
