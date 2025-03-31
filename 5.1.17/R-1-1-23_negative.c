//5.1.17　(建议)函数参数表为空时，应使用void明确说明
//------放宽8114的“R-1-1-23 函数参数表为空时，必须使用void明确说明” 

int fun();          // 违背
int datax = 0;
int datay = 0;
int main(void)
{
	int iz01, iz02;
	datax = 1;
	datay = 2;
	iz01 = fun();
	return 0;
}
int fun()           // 违背
{
	int temp;
	temp = 2 * datax + 3 * datay;
	return temp;
}