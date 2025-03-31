
#include <iostream>
#include <memory> // ʹ������ָ��std::unique_ptr��std::shared_ptr
 
class MyClass {
public:
    MyClass() { std::cout << "Constructor called\n"; }
    ~MyClass() { std::cout << "Destructor called\n"; }
    void show() { std::cout << "Showing MyClass\n"; }
};
 
void func() {
    MyClass* ptr = new MyClass();  // ʹ��new��̬�����ڴ�
    // ����̬����Ķ���ĵ�ַ�������������ڵ�ָ�������ָ��
    std::shared_ptr<MyClass> sharedPtr(ptr); // ʹ������ָ������ڴ�
}
 
int main() {
    func(); // ��func()����ʱ��sharedPtr������ڴ�ֱ��main()����
    return 0;
}