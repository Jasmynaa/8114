//------���8114�ġ�R-1-1-1 ��ֹͨ���궨��ı�ؼ��ֺͻ������ͺ��塱 
#define pStr char *    //Υ��
void main(void)
{
	char string[4] = "abc";
	pStr p1, p2;
	p1 = string;
	p2 = string;      //����p2��char������char *
	return;
}
