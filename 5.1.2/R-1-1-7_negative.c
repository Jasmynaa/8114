//5.1.2　(强制)以函数形式定义的宏，参数和结果表达式必须用括号括起来
//--------内容维持但表述修改8114的“R-1-1-7 以函数形式定义的宏，参数和结果必须用括号括起来” 
//违背与遵循示例：
#define p1(x)   x >= 0 ? x : -x         //违背
#define p2(x)  (x >= 0 ? x : -x)        //违背
#define p3(x) ((x) >= 0 ? (x) : -(x))   //遵循
int main(void){
	int result1 = 0, result2 = 0, result3 = 0;
	int a = 6;
	result1 = p1(a) + 1;
	result2 = p2(a) + 1;
	result3 = p3(a) + 1;
	a = -6;
	result1 = p1(a + 1);
	result2 = p2(a + 1);
	result3 = p3(a + 1);
	return(0);
}
