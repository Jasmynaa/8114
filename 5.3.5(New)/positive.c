#include <stdio.h>

int main() {
	FILE *file = fopen("example.txt", "w");
	if (file == NULL) {
		perror("Failed to open file");
		return 1;
	}
	// дһЩ���ݵ��ļ�
	fprintf(file, "Hello, World!\n");// ��ѭ
	// �ر��ļ�
	fclose(file);
	return 0;
}