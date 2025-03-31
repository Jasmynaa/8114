enum WorkMode { INI = 0, FIGHT, MAINTAIN, TRAIN } work_state;
int main(void)
{
	int i = 0;
	int j = 0;
	//...
	switch (work_state)    //×ñÑ­
	{
	case INI:
		i = 1;
		break;
	case FIGHT:
		i = 2;
		break;
	case MAINTAIN:
		i = 3;
		break;
	case TRAIN:
		i = 0;
		break;
	}
	switch (i)             //×ñÑ­
	{
	case 0:
		j = 0;
		break;
	case 1:
	case 2:
		j = 1;
		break;
	default:
		j = -1;
		break;
	}
	return (0);
}
