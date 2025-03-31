int Gstate = 0;                //×ñÑ­
int main(void)
{
	static int StateN = 0;     //×ñÑ­2
	if (1 == Gstate)
	{
		StateN = StateN + 1;
	}
	return (0);
}
