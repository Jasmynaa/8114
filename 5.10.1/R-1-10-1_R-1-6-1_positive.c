
#define Round(x) ((x) >= 0 ? (int)((x) + 0.5) : (int)((x) - 0.5))
int main(void)
{
	int ix, iy;
	float fx = 1.85;
	float fy = -1.85;
	ix = (int)(fx);          //×ñÑ­
	ix = Round(fx);          //×ñÑ­2
	iy = (int)(fy);          //×ñÑ­3
	iy = Round(fy);          //×ñÑ­4
	return (0);
}
