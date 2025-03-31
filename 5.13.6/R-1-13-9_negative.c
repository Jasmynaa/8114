//5.13.6　(必要)禁止仅依赖小写字母“l”与数字“1”区分的变量
//------维持8114的“R - 1 - 13 - 9 禁止仅依赖小写字母“l”与数字“1”区分的变量”
//------违背示例：变量fSpeedl和变量fSpeed1。

int fun()
{
	int fSpeedl;      //违背-- fSpeedl小写字母l
	int fSpeed1;      //违背-- fSpeedl数字1
	/*...*/
	return 0;
}