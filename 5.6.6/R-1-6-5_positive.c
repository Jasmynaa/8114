
int fun(int p);
int main(void)
{
	int x = 1, y = 2, z = 3;
	int r;
	y = y + x;
	x++;             //��ѭ
	y++;             //��ѭ
	z = z + y;
	z--;             //��ѭ
	z = fun(z);
	r = fun(z);
	z--;             //��ѭ
	return (0);
}
int fun(int p)
{
	int ret;
	ret = 2 * p;
	return ret;
}
