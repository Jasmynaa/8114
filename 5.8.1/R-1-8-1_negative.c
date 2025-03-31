//5.8.1　(必要)禁止不可达语句
//------维持8114的“R - 1 - 8 - 1 禁止不可达语句”

int main(void)
{
	int local = 0;
	int para = 0;
	//...
	switch (para)
	{
		local = para;  //违背
	case 1:
		//...
		break;
	case 2:
		//...
		break;
	default:
		//...
		break;
	}
	return local;
	para++;           //违背2
}
