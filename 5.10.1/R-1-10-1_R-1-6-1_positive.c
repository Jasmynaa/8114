
#define Round(x) ((x) >= 0 ? (int)((x) + 0.5) : (int)((x) - 0.5))
int main(void)
{
	int ix, iy;
	float fx = 1.85;
	float fy = -1.85;
	ix = (int)(fx);          //��ѭ
	ix = Round(fx);          //��ѭ2
	iy = (int)(fy);          //��ѭ3
	iy = Round(fy);          //��ѭ4
	return (0);
}
