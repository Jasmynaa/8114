//5.6.27　(必要)除了求余求模外，禁止分母为整数的数值计算
//------加严8114的“A - 1 - 6 - 1 谨慎对有符号整型量进行位运算”

void main()
{
	int a, b;
	float c1, c2;
	a = 3;
	b = 6;
	c1 = a * 4 / 5 + b / 5 / 2;         //违背       
	c2 = a * 4 / 5.0 + b / 5.0 / 2.0;   //遵循             
	return;
}
