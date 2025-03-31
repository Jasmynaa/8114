//5.3.1　(强制)禁止将短生存周期的对象地址赋值给长生存周期的对象
//------新增准则，是更概括性的准则，一些准则是该准则的具体情况，如：“函数返回的指针禁止是指向函数内局部变量地址的指针”

#include <iostream>
 
class MyClass {
public:
    MyClass() { std::cout << "Constructor called\n"; }
    ~MyClass() { std::cout << "Destructor called\n"; }
    void show() { std::cout << "Showing MyClass\n"; }
};
 
void func() {
    MyClass obj;  // 短生存周期对象
    MyClass* ptr = &obj;  // 将局部对象的地址赋给指针
}
 
int main() {
    func(); // 当func()返回时，obj的生命周期结束，ptr指向悬挂的内存
    // 如果需要使用ptr，应该重新分配内存或使用其他机制
    return 0;
}