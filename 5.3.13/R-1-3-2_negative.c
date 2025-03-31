//5.3.13　(建议)函数指针的使用建议加以&明确说明
//------放宽8114的“R - 1 - 3 - 2 函数指针的使用必须加以&明确说明”

// 定义一个返回整型并接受两个整型参数的函数类型
typedef int(*FuncPtr)(int, int);

// 或者直接在定义函数指针时不使用typedef，但这样通常较为繁琐
// int (*myFuncPtr)(int, int);

// 一个符合上述函数类型的实际函数
int add(int a, int b) {
	return a + b;
}

int main() {

	FuncPtr myFuncPtr = add;		//违背
	int result = myFuncPtr(5, 3);
	return 0;
}