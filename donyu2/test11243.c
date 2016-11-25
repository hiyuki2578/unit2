#include <stdio.h>
int main(void) {
	int room[3];
	char name[3][64];
	int i;
	FILE *fpr, *fpw;
	if ((fpr = fopen("input.txt", "r")) == NULL) {
		printf("ファイルを開けませんでした\n"); 
		return 1;
	}
	for (i = 0;i < 3;i++) {
		fscanf(fpr, "%s", &name[i]);
	}
	fclose(fpr);
	if ((fpw = fopen("output.txt", "w")) == NULL) {
		printf("ファイルを開けませんでした\n");
		return 1;
	}
	for (i = 0;i < 3;i++) {
		fprintf(fpw, "部屋:%d ", room[i]);
		fprintf(fpw, "コース:%s", name[i]);
	}
	fclose(fpw);
	return 0;
}