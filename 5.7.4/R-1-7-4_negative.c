//5.7.4��(��Ҫ)��ֹʹ�þ���ʽ�ĺ�������������ʽ
//------ά��8114�ġ�R - 1 - 7 - 4 ��ֹʹ�þ���ʽ�ĺ�������������ʽ��
//--ע��	����ʽ�ĺ�������������ʽΪ��
//--function_type function_name(parameter_name1, parameter_name2, ��)
//--parameter_type1 parameter_name1;
//--parameter_type2 parameter_name2;
//--��;
//--{}

void fun(int *p1, int *p2);
int main(void)
{
	int i = 0, j = 0;
	fun(&i, &j);
	return (0);
}
void fun(p1, p2)      //Υ��
int *p1;
int *p2;
{
	*p1 = *p1 + 1;
	*p2 = *p2 + 2;
}
