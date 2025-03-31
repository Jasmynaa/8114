extern int zdata;           // ×ñÑ­
extern int fadd(int, int);  // ×ñÑ­
int main(void)
{
	int x, y;
	x = 1;
	y = 2;
	zdata = fadd(x, y);
	return 0;
}