//5.6.12　(建议)非枚举类型变量谨慎使用枚举类型值
//------放宽8114的“R - 1 - 6 - 11 禁止非枚举类型变量使用枚举类型的值”

int main(void)
{
	enum Edata { Enum1 = 0, Enum2, Enum3 };
	unsigned int data;
	data = Enum2;      //违背
	return (0);
}
