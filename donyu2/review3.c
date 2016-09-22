#include<stdio.h>
int main(void) {
	int a, b;
	a = 10;
	printf("10+bは12のとき、bの値は？\n");
	scanf("%d", &b);
	if (a+b==12)
		printf("正解です。\n");
	else
		printf("それは違います。\n");
return(0);
}
