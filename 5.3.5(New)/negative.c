//5.3.5��(ǿ��)��ֹʹ���ѱ��رյ�FILE����ָ��
//����׼��

#include <stdio.h>

int main() {
	FILE *file = fopen("example.txt", "w");
	if (file == NULL) {
		perror("Failed to open file");
		return 1;
	}
	// �ر��ļ�
	fclose(file);
	// ���󣺳���ʹ���ѹرյ�FILEָ��
	fprintf(file, "This will cause undefined behavior!\n");//Υ��

	return 0;
}