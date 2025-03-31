//5.3.5　(强制)禁止使用已被关闭的FILE对象指针
//新增准则

#include <stdio.h>

int main() {
	FILE *file = fopen("example.txt", "w");
	if (file == NULL) {
		perror("Failed to open file");
		return 1;
	}
	// 关闭文件
	fclose(file);
	// 错误：尝试使用已关闭的FILE指针
	fprintf(file, "This will cause undefined behavior!\n");//违背

	return 0;
}