#include <stdio.h>
int main(void) {
	int room[3];
	char name[3][64];
	int i;
	FILE *fpr, *fpw;
	if ((fpr = fopen("input.txt", "r")) == NULL) {
		printf("�t�@�C�����J���܂���ł���\n"); 
		return 1;
	}
	for (i = 0;i < 3;i++) {
		fscanf(fpr, "%s", &name[i]);
	}
	fclose(fpr);
	if ((fpw = fopen("output.txt", "w")) == NULL) {
		printf("�t�@�C�����J���܂���ł���\n");
		return 1;
	}
	for (i = 0;i < 3;i++) {
		fprintf(fpw, "����:%d ", room[i]);
		fprintf(fpw, "�R�[�X:%s", name[i]);
	}
	fclose(fpw);
	return 0;
}