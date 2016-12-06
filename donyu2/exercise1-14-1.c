#include<stdio.h>
int main(void)
{
	int a=0;
	int data[5];
	FILE *fp;
	printf("test451.txtからデータを読み込みます。\n");
	if ((fp = fopen("test451.txt", "r")) == NULL) {
		printf("ファイルを開けませんでした。\n");
		return 1;
	}
	for (;;a++) {
		if ((fscanf(fp, "%d", &data[a])) == EOF) break;
	}
	fclose(fp);
	if ((fp = fopen("test451.txt", "w")) == NULL){
		printf("ファイルを開けませんでした。\n");
		return 1;
	}
	for (a = 0; a < 5; a++) {
		fprintf(fp, " %2d", data[a]*2);
	}
	fprintf(fp, "\n");
	printf("test451.txtにデータを書き込みます。\n");
	fclose(fp);
	return 0;
}
