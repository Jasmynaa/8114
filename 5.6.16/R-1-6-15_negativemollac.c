//5.6.16��(ǿ��)������д�������ֹԽ��
//------ά��8114�ġ�R - 1 - 6 - 15 ������д�������ֹԽ�硱

#include <string.h>
int main(void)
{
	int *src = (int*) malloc(4 * sizeof(int));
	int *des = (int*) malloc(2 * sizeof(int));
	memcpy(des, src, sizeof(src));       //Υ��
	return (0);
}
