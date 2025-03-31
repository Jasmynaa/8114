//5.1.5　(必要)自定义类型禁止被差异性地重复定义
//------替代8114的“R-1-1-3 用typedef自定义的类型禁止被重新定义” 

typedef int mytype;
int fun(void);
int main(void)
{
	typedef float mytype;   // 违背
	mytype a = 0;
	a = fun();
	return (0);
}
typedef unsigned int mytype;   //违背
int fun(void)
{
	mytype x = 0;
	return (int)x;
}
