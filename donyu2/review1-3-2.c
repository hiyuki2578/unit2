#include<stdio.h>
int main(void) {
	int answer[5];
	int i,a=0,b=0;
	printf("�D���Ȉ��ݕ����P�I�����Ă��������B\n");
	for (i = 0; i<5; i++) {
		printf("[%d �l��] 1.�E�[�������A2.�~�l�����E�H�[�^�[�A3.�T�C�_�[:", i+1);
		scanf("%d\n", &a);
			if (a == 1) {
				b = b + 1;
			}
	}
	printf("�E�[���������D���Ȑl��%d�l�ł����B\n", b);
	return(0);
}

