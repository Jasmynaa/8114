// ����һ���������Ͳ������������Ͳ����ĺ�������
typedef int(*FuncPtr)(int, int);

// ����ֱ���ڶ��庯��ָ��ʱ��ʹ��typedef��������ͨ����Ϊ����
// int (*myFuncPtr)(int, int);

// һ�����������������͵�ʵ�ʺ���
int add(int a, int b) {
	return a + b;
}

int main() {

	FuncPtr myFuncPtr = &add;		//��ѭ
	int result = myFuncPtr(5, 3);
	return 0;
}