//5.6.17��(����)��̬����ռ��ָ��Ӧ����Ϊ��������
//------����ϸ��8114�ġ�R - 1 - 6 - 17 ��free��ָ�����ָ�����malloc��calloc����ĵ�ַ��

int fun(void)
{
	int *p = (int*)malloc(3 * sizeof(int)); //Υ��
	p++;
	free(p);   //Υ��
	return 0;
}