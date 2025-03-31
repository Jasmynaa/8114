//5.4.5　(必要)switch语句中的case和default分支必须以break或return终止，共用非空case必须加以明确注释
//------放宽8114的“R - 1 - 4 - 7 switch中的case和default必须以break或return终止，共用case必须加以明确注释”

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	//...
	switch (i)
	{
	case 1:         //违背
		if (j > 0)
		{
			k = 1;
			break;
		}
		k = 2;
	case 2:
	case 3:         //违背
	{
						j = 3;
	}
	case 4:         //违背
		k = 4;
	case 5:
		j = 5;
		break;
	default:        //违背
		j = -1;
	}
	return (0);
}
