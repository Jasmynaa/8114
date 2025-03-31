//5.1.22　(建议)建议用宏或const定义常数
//------维持8114的“A-1-1-6 建议用宏或const定义常数” 

int fun_bad(double pi1)
{
	if (1){
		double pi2 = 3.1415926; // 违背
	}
	double pi4 = pi1 + 3.1415926;

	return (0);
}