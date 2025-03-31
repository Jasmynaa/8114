//5.13.7　(必要)禁止仅依赖大写字母“O”与数字“0”区分的变量
//------维持8114的“R - 1 - 13 - 10 禁止仅依赖大写字母“O”与数字“0”区分的变量”
//------违背示例：变量fSpeedO和变量fSpeed0。

int fun()
{
	int fSpeedO;      //违背-- fSpeedO大写字母O
	int fSpeed0;      //违背-- fSpeed0数字0
	/*...*/
	return 0;
}