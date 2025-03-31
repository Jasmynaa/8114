int main(void)
{
	int x = 2;
	int y = 0;
	int z = 0;
	//...
	switch (x)
	{
	case 1:
		break;
	case 2: //×ñÑ­
		if (0 == y)
		{       
			z = 1;
			break;
		}
		z = 2;
		break;
	default:
		break;
	}
	return (0);
}
