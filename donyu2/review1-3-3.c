#include<stdio.h>
int main(void) {
	int answer[5][2];
	int i,b = 0;
	
	for (i = 0; i<5; i++) {
		printf("[%d �l��]�D���Ȉ��ݕ����P�I�����Ă��������B\n", i + 1);
		printf("1.�E�[�������A2.�~�l�����E�H�[�^�[�A3.�T�C�_�[:");
		scanf("%d", &answer[i][0]);
		printf("���Ȃ��̐��ʂ������Ă��������B1.�j��2.����:");
		scanf("%d", &answer[i][1]);
		if (answer[i][0] == 1&& answer[i][1] ==2) {
			b++;
		}
	}
	printf("�E�[���������D���ȏ�����%d�l�ł����B\n", b);
	return(0);
}

