//5.12.3　(必要)禁止对浮点数进行是否相等的比较
//------维持8114的“R - 1 - 12 - 3 禁止对浮点数进行是否相等的比较”

int main(void) {
	int i, j;
	int P = 1000;
	float d = 0.435;
	if (435 == (P*d))    //违背
	{
		i = 1;
	}
	else {
		i = 2;
	}
	if (435 != (P*d))    //违背2
	{
		j = 1;
	}
	else {
		j = 2;
	}
	return (0);
}

