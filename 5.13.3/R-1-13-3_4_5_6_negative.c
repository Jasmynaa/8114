//5.13.3　(建议)避免变量名、函数名、枚举元素名、自定义类型名之间的同名
//------放宽并统一8114的
//------“R - 1 - 13 - 3 禁止变量名与函数名同名”
//------“R - 1 - 13 - 4 禁止变量名与标识名同名” 
//------“R - 1 - 13 - 5 禁止变量名与枚举元素同名”
//------“R - 1 - 13 - 6 禁止变量名与typedef自定义的类型名同名”

int fun(int sign)
{
	//..
	return 0;
}
struct POINTA
{
	unsigned int x;
	unsigned int y;
};

enum Name_type { first = 0, second }EnumVar;

typedef int INT; 
INT out;
typedef unsigned char unit8_t; 


int main()
{
	int fun;  //违背 变量名与函数名同名
	fun = 0;
	unsigned int POINTA;  //违背 变量名与标识名同名
	POINTA = 1;
	unsigned int second = 0;   //违背 变量名与枚举元素同名
	EnumVar = second;
	char INT = 'a'; //违背 变量名与typedef自定义的类型名同名
	int unit8_t;    //违背 变量名与typedef自定义的类型名同名
	return 0;
}


