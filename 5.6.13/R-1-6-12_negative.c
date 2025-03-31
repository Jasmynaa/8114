//5.6.13　(强制)除法运算中禁止被零除。
//------维持8114的“R - 1 - 6 - 12 除法运算中禁止被零除”

void calculate(int db, int x)
{ 
	//除法计算前没有判断除数是否为零
	printf("%d", db / x);           //违背   
}

int main()
{
	int b, c;
	scanf("%d%d", &b, &c);
	calculate(b, c);
	return  0;
}