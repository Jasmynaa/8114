//5.13.5　(必要)禁止仅依赖某一字母大小写区分的变量
//------基本维持8114的“R - 1 - 13 - 8 禁止仅依赖大小写区分的变量”
//------违背示例：变量fSpeed和变量fspeed。

int main(void)
{
	int fSpeed = 0;
	char fspeed = 'a';  //违背
	/*...*/
	return (0);
}