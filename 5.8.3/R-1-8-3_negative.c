//5.8.3　(必要)禁止使用无效语句
//------维持8114的“R - 1 - 8 - 3 禁止使用无效语句”

int main(void)
{
	unsigned int local = 0;
	unsigned int para = 0;
	//...
	local;         //违背
	para - 0;      //违背2
	local == para; //违背3
	local > para;  //违背4
	return (0);
}
