
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	//...
	switch (i)
	{
	case 1:                  //×ñÑ­
		if (j > 0)
		{
			k = 1;
			break;
		}
		k = 2;
		break;
	case 2:
	case 3:                  //×ñÑ­
	{
								 j = 3;
	}
		break;
	case 4:  /* shared */     //×ñÑ­
		k = 4;
	case 5:
		j = 5;
		break;
	default:                  //×ñÑ­
		j = -1;
		break;
	}
	return (0);
}

