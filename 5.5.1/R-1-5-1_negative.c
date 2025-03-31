//5.5.1　(必要)禁止从复合语句外goto到复合语句内，或由下向上goto
//------维持8114的“R - 1 - 5 - 1 禁止从复合语句外goto到复合语句内，或由下向上goto”

int main(void)
{
	int i = -2, j = -2;
	int k;
	//...
L0:
	i = i + 1;
	if (i < 0)
	{
		//……
		goto L0;     //违背
	}
	if (j < 0)
	{
		k = -10;
		j = 0;
		goto L1;     //违背2
	}
	for (k = 0; k<10; k++)
	{
	L1:
		j = j + k;
	}
	return (0);
}
