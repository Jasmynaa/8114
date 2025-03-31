//5.4.6　(必要)switch语句的所有分支必须具有相同的层次范围
//------维持8114的“R - 1 - 4 - 8 switch语句的所有分支必须具有相同的层次范围”

int main(void)
{
	int x = 2;
	int y = 0;
	int z = 0;
	//...
	switch (x)
	{
	case 1:
		if (0 == y)
		{
			case 2:        //违背 1
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
