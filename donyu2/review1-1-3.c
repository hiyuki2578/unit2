#include<stdio.h>
int main(void) {
	int a=10, b;
	printf("%d+b=12のとき、bの値は？：", a);
	scanf("%d", &b);
	if (a+b==12) {
		printf("正解です。\n");
	}else{
		printf("それは違います。\n");
	}
	return 0;
}
