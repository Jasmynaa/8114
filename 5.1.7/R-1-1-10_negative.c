//5.1.7��(��Ҫ)������λ���������ֹ����Ϊ�з�������
//------����ά�ֵ������޸�8114�ġ�R-1-1-10 λ������з������ͱ���λ���������1��
//--ע��ֻһλ���з������ͱ�������λΪ1ʱ��ʾ-1����λΪ0ʱ��ʾ0��


typedef struct
{
	signed int si01 : 1;      // Υ��
	signed int si02 : 2;
	unsigned int serv : 29;
}sData;
int main(void)
{
	sData data;
	data.si01 = -1;
	data.si02 = -1;
	return 0;
}