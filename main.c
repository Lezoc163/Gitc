#include <stdio.h>
#include <stdlib.h>

struct htentry {
	char* item;
	int count;
	struct htentry* next;
};

struct htentry ht_table[256];

void ht_init(void) {
	/* 修复：细节 */
}

int main(int argc, char* argv[])
{
	FILE* f;
	errno_t err;
	
	if (argc != 2)
	{
		printf("用法：%s文件名\n",argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((err = fopen_s(&f, argv[1], "r")) != 0)
	{
		printf("不能打开%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if (f == 0)
		exit(-1);
	/*
	 * 打印文件中发现的单词的直方图。
	 * "单词"是用任何空格分隔的字符。
	 * 单词的排列没有任何顺序。
	 * 修正：仍然需要实现。
	 */
	printf("单词的直方图\n");
	ht_init();
}
