//(必要)禁止逻辑量与非逻辑量之间的隐式转换
//------拓展且细化8114的“R - 1 - 6 - 3 禁止在逻辑表达式中使用赋值语句”

int main() {

	bool isDone = true;  // 逻辑量，
	// 非逻辑量赋值
	int score = 95;  // 非逻辑量，
	char ca='2' ;
	 ca=isDone ;// 违背
	short st=32 ;
	st=isDone ;//// 违背
	
	int logicalValue = isDone;  // 违背
	bool intValue = score; //违背
	if(isDone == 1)//违背
	{
	   int k=0;
	}

	return 0;
}
