//5.3.13��(����)����ָ���ʹ�ý������&��ȷ˵��
//------�ſ�8114�ġ�R - 1 - 3 - 2 ����ָ���ʹ�ñ������&��ȷ˵����

// ����һ���������Ͳ������������Ͳ����ĺ�������
typedef int(*FuncPtr)(int, int);

// ����ֱ���ڶ��庯��ָ��ʱ��ʹ��typedef��������ͨ����Ϊ����
// int (*myFuncPtr)(int, int);

// һ�����������������͵�ʵ�ʺ���
int add(int a, int b) {
	return a + b;
}

int main() {

	FuncPtr myFuncPtr = add;		//Υ��
	int result = myFuncPtr(5, 3);
	return 0;
}