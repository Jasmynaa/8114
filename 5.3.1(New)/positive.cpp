
#include <iostream>
#include <memory> // 使用智能指针std::unique_ptr或std::shared_ptr
 
class MyClass {
public:
    MyClass() { std::cout << "Constructor called\n"; }
    ~MyClass() { std::cout << "Destructor called\n"; }
    void show() { std::cout << "Showing MyClass\n"; }
};
 
void func() {
    MyClass* ptr = new MyClass();  // 使用new动态分配内存
    // 将动态分配的对象的地址赋给长生存周期的指针或智能指针
    std::shared_ptr<MyClass> sharedPtr(ptr); // 使用智能指针管理内存
}
 
int main() {
    func(); // 当func()返回时，sharedPtr会管理内存直到main()结束
    return 0;
}