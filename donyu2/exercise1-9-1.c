#include <stdio.h>
#include <string.h>
int main(void) {
	char str1[10];
	char str2[10];
	printf("単語を入力してください\n");
	gets(str1);
	printf("Enterキーを押すとコピーします\n");
	strcpy(str2,str1);
	printf("コピー結果\n");
	printf("srt1=%s,srt2=%s\n",str1,str2);
	return 0;
}
