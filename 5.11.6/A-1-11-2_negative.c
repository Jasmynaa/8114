//5.11.6　(建议)建议所有全局变量在统一设计的初始化模块中进行初始化
//------维持8114的“A - 1 - 11 - 2 建议所有全局变量在统一设计的初始化模块中进行初始化”

/*声明全局变量*/
int a;
float b;
char* arr[3];
unsigned int var = 0;       //违背
/*统一初始化所有全局变量*/
void globalVars(void)
{
	a = 1;
	b = 1.0;
	char* arr[3] = { 'a', 'b', 'c' };
}