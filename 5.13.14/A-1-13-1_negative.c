//5.13.14　(建议)推荐使用带类型前缀的变量命名
//------维持8114的“A - 1 - 13 - 1 推荐使用带类型前缀的变量命名”
//--推荐使用带类型前缀的变量命名见表1。
//--表1　带类型前缀的变量命名
//--序号	前缀	类型	说明	参考的类型范围
//--二进制位	值域
//--1	c	char	字符型	8[-128, 127]
//--2	sc	signed char	有符号字符型	8[-128, 127]
//--3	uc	unsigned char	无符号字符型	8[0, 255]
//--4	i	int	整型	16[-32768, 32767]
//--5	si	signed int	有符号整型	16[-32768, 32767]
//--6	ui	unsigned int	无符号整型	16[0, 65535]
//--7	s	short int	短整型	16[-32768, 32767]
//--8	ss	signed short int	有符号短整型	16[-32768, 32767]
//--9	us	unsigned short int	无符号短整型	16[0, 65535]
//--10	l	long int	长整型	32[-, -1]
//--11	sl	signed long int	有符号长整型	32[-, -1]
//--12	ul	unsigned long int	无符号长整型	32[0, -1]
//--13	f	float	浮点型	32	(3.4, 3.4)
//--14	d	double	双精度型	64	(1.7, 1.7)
//--15	ld	long double	长双精度型	80	(1.2, 1.2)

//示例：
//uiLaunchButton表明该变量含义是发射按钮，类型是unsigned int；
//lLaunchTime表明该变量含义是发射时间，类型是long int；
//dLaunchAzim表明该变量含义是发射方位角，类型是double。
//实际使用语言的类型范围与参考的类型范围可能存在差异，在需求规格说明的软件环境一节中应予以明确说明。

#include<stdlib.h>
int main(void)
{
	int launchButton;    //违背
	unsigned int flag;    //违背
	/*...*/
	return (0);
}