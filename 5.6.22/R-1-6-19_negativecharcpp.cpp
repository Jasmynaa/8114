//5.6.22��(��Ҫ)ʹ��strncpy_s(des,m,src,n)����ʱ��m��n�������㰲ȫ��������(ǿ��)
//------���廯8114�ġ�R - 1 - 6 - 19 ʹ���ַ�����ֵ��������׷�ӵȺ���ʱ����ֹĿ���ַ����洢�ռ�Խ�硱
//--m��n�������㰲ȫ��������
//--(1) m <= sizeof(des)
//--(2) n <= sizeof(src)
//--(3) ���ƺ�des��m���ֽ��д��ڽ�����

#include <string.h>
void main(void)
{
	int r;
	char *src= (char*)malloc(4*sizeof(char));
	char *des = (char*)malloc(3*sizeof(char));
	r = strncpy_s(des, 3, src, 3);  //Υ��
	return;
}
