//5.10.3　(必要)将长浮点型量赋给短浮点型变量必须显式强制转换
//------内容维持8114的“R - 1 - 10 - 3 double型变量赋给float型变量必须强制转换”

int main(void)
{
	double dData = 0.0;
	float  fData;
	fData = dData;             //违背
	return (0);
}

