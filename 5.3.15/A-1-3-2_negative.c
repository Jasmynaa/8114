//5.3.15　(建议)谨慎使用无类型指针
//------维持8114的“A - 1 - 3 - 2 谨慎使用无类型指针”

#include<stdio.h>
void* pvoid1;  // 违背
void fun(void* p1)  //违背
{
	/*…*/
}
int main(void)
{
	void* pvoid2;    //违背
	/*…*/
	return (0);
}