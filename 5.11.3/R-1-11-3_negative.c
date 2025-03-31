//5.11.3　(建议)结构体初始化的嵌套结构应与定义一致
//------放宽8114的“R - 1 - 11 - 3 结构体初始化的嵌套结构必须与定义一致”

struct Spixel
{
	unsigned int colour;
	struct Scoords
	{
		unsigned int x;
		unsigned int y;
	} coords;
};
int main(void)
{
	struct Spixel pixel = { 1, 2, 3 };     //违背
	return (0);
}

