//5.1.2��(ǿ��)�Ժ�����ʽ����ĺ꣬�����ͽ�����ʽ����������������
//--------����ά�ֵ������޸�8114�ġ�R-1-1-7 �Ժ�����ʽ����ĺ꣬�����ͽ�������������������� 
//Υ������ѭʾ����
#define p1(x)   x >= 0 ? x : -x         //Υ��
#define p2(x)  (x >= 0 ? x : -x)        //Υ��
#define p3(x) ((x) >= 0 ? (x) : -(x))   //��ѭ
int main(void){
	int result1 = 0, result2 = 0, result3 = 0;
	int a = 6;
	result1 = p1(a) + 1;
	result2 = p2(a) + 1;
	result3 = p3(a) + 1;
	a = -6;
	result1 = p1(a + 1);
	result2 = p2(a + 1);
	result3 = p3(a + 1);
	return(0);
}
