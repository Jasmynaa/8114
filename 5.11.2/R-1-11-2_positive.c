int Gstate = 0;                //��ѭ
int main(void)
{
	static int StateN = 0;     //��ѭ2
	if (1 == Gstate)
	{
		StateN = StateN + 1;
	}
	return (0);
}
