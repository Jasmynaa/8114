//5.8.2　(必要)禁止不可达分支
//------维持8114的“R - 1 - 8 - 2 禁止不可达分支”

int main(void)
{
	unsigned int local = 0;
	unsigned int para = 0;
	//...
	if (local >= 0)
	{
		para = 1;
	}
	else           //违背
	{
		para = 2;
	}
	if (1 == para) {
		//...
	}
	return (0);
}

