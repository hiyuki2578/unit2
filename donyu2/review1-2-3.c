#include<stdio.h>
int main(void) {
	int a, b;
	printf("変数Aに整数を設定してください:");
	scanf("%d", &a);
	printf("変数Bに整数を設定してください:");
	scanf("%d", &b);
	if (a < b) {
		printf("Bの方がAより%d大きいです。\n",b-a );
	}else if (b < a) {
		printf("Aの方がBより%d大きいです。\n", a - b);
	}else {
		printf("AとBは等しいです。\n");
	}
	return 0;
}
