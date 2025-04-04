// 定义一个返回整型并接受两个整型参数的函数类型
typedef int(*FuncPtr)(int, int);

// 或者直接在定义函数指针时不使用typedef，但这样通常较为繁琐
// int (*myFuncPtr)(int, int);

// 一个符合上述函数类型的实际函数
int add(int a, int b) {
	return a + b;
}

int main() {

	FuncPtr myFuncPtr = &add;		//遵循
	int result = myFuncPtr(5, 3);
	return 0;
}