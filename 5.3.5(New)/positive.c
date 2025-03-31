#include <stdio.h>

int main() {
	FILE *file = fopen("example.txt", "w");
	if (file == NULL) {
		perror("Failed to open file");
		return 1;
	}
	// 写一些内容到文件
	fprintf(file, "Hello, World!\n");// 遵循
	// 关闭文件
	fclose(file);
	return 0;
}