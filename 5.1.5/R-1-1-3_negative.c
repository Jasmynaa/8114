//5.1.5��(��Ҫ)�Զ������ͽ�ֹ�������Ե��ظ�����
//------���8114�ġ�R-1-1-3 ��typedef�Զ�������ͽ�ֹ�����¶��塱 

typedef int mytype;
int fun(void);
int main(void)
{
	typedef float mytype;   // Υ��
	mytype a = 0;
	a = fun();
	return (0);
}
typedef unsigned int mytype;   //Υ��
int fun(void)
{
	mytype x = 0;
	return (int)x;
}
