extern int zdata;           // ��ѭ
extern int fadd(int, int);  // ��ѭ
int main(void)
{
	int x, y;
	x = 1;
	y = 2;
	zdata = fadd(x, y);
	return 0;
}