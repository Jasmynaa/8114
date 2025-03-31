//5.4.4　(必要)除枚举类型列举完全外，switch语句应有default分支
//------内容维持但表述修改8114的“R - 1 - 4 - 6 除枚举类型列举完全外，switch必须要有default”

enum WorkMode { INI = 0, FIGHT, MAINTAIN, TRAIN } work_state;
int main(void)
{
	int i = 0;
	int j = 0;
	//...
	switch (work_state)    //违背
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
	}
	switch (i)             //违背
	{
	case 0:
		j = 0;
		break;
	case 1:
	case 2:
		j = 1;
		break;
	}
	return (0);
}


