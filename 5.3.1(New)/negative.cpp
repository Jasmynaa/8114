//5.3.1��(ǿ��)��ֹ�����������ڵĶ����ַ��ֵ�����������ڵĶ���
//------����׼���Ǹ������Ե�׼��һЩ׼���Ǹ�׼��ľ���������磺���������ص�ָ���ֹ��ָ�����ھֲ�������ַ��ָ�롱

#include <iostream>
 
class MyClass {
public:
    MyClass() { std::cout << "Constructor called\n"; }
    ~MyClass() { std::cout << "Destructor called\n"; }
    void show() { std::cout << "Showing MyClass\n"; }
};
 
void func() {
    MyClass obj;  // ���������ڶ���
    MyClass* ptr = &obj;  // ���ֲ�����ĵ�ַ����ָ��
}
 
int main() {
    func(); // ��func()����ʱ��obj���������ڽ�����ptrָ�����ҵ��ڴ�
    // �����Ҫʹ��ptr��Ӧ�����·����ڴ��ʹ����������
    return 0;
}