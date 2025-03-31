//5.10.2　(必要)将长整型量赋给短整型变量必须显式强制转换
//------维持8114的“R - 1 - 10 - 2 长整数变量赋给短整数变量必须强制转换”

int main(void)
{
	signed char cVar = 0;
	short sVar = 0;
	int iVar = 0;
	long lVar = 0;
	cVar = sVar;                 //违背
	sVar = iVar;                 //违背2
	iVar = lVar;                 //违背3
	return (0);
}

