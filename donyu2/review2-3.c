#include<stdio.h>
int main(void) {
	int a, b;
	printf("�ϐ�A�ɐ�����ݒ肵�Ă�������:");
	scanf("%d", &a);
	printf("�ϐ�B�ɐ�����ݒ肵�Ă�������:");
	scanf("%d", &b);
	if (a < b) {
		printf("B�̕���A���%d�傫���ł��B\n",b-a );
	}else if (b < a) {
		printf("A�̕���B���%d�傫���ł��B\n", a - b);
	}else {
		printf("A��B�͓������ł��B\n");
	}
	return(0);
}
