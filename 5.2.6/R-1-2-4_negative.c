//5.2.6　(必要)引起二义性理解的逻辑表达式，必须使用括号显式说明优先级顺序
//------维持8114的“R - 1 - 2 - 4 引起二义性理解的逻辑表达式，必须使用括号显式说明优先级顺序”
//引起二义性理解的逻辑表达式包括：
//--a)　a && b || c
//--b)　a || b && c
//--c)　!a && b
//--d)　!a || b

int main(void)
{
	int i = 0, j = 1, k = 2;
	int a = 0, b = 0;
	//......
	if ((0 == i) || (1 == j) && (2 == k))      //违背
	{
		a = 0;
	}
	else
	{
		a = 1;
	}
	return (0);
}


