#include<stdio.h>
int main(void){
	int a=0;
	double b=0, c=0;
	double data[10];
	FILE *fp;
	if ((fp = fopen("wed1.txt", "r")) == NULL) {
		printf("ファイルを開けませんでした。\n");
		return 1;
	}
	for (;; a++) {
		if ((fscanf(fp, "%lf", &data[a])) == EOF) break;
	}
	fclose(fp);
	if ((fp = fopen("wed2.txt", "w")) == NULL) {
		printf("ファイルを開けませんでした。\n");
		return 1;
	}
	for (a = 0; a < 10; a++) {
		b += data[a];
	}
	c = b / 10;
	fprintf(fp, "合計:%f\n平均値:%f\n", b, c);
	fclose(fp);
	return(0);
}