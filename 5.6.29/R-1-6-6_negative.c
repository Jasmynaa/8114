//5.6.29　(建议)谨慎使用逗号操作符
//------维持8114的“A - 1 - 6 - 6 谨慎使用逗号操作符”

int main(void)
{
	int datax, datay, dataz;
	datax = (datay = 1, dataz = 2);    //违背
	return (0);
}
