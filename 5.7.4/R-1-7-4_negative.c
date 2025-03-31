//5.7.4　(必要)禁止使用旧形式的函数参数表定义形式
//------维持8114的“R - 1 - 7 - 4 禁止使用旧形式的函数参数表定义形式”
//--注：	旧形式的函数参数表定义形式为：
//--function_type function_name(parameter_name1, parameter_name2, …)
//--parameter_type1 parameter_name1;
//--parameter_type2 parameter_name2;
//--…;
//--{}

void fun(int *p1, int *p2);
int main(void)
{
	int i = 0, j = 0;
	fun(&i, &j);
	return (0);
}
void fun(p1, p2)      //违背
int *p1;
int *p2;
{
	*p1 = *p1 + 1;
	*p2 = *p2 + 2;
}
