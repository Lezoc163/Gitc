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
	/*
	 * 打印文件中发现的单词的直方图。
	 * "单词"是用任何空格分隔的字符。
	 * 单词的排列没有任何顺序。
	 * 修正：仍然需要实现。
	 */
	printf("单词的直方图\n");
	ht_init();
}
