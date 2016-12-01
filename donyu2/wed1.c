#include<stdio.h>
#include<stdlib.h>
void fp_err(){
	printf("ファイルを開けませんでした。\n");
	exit(1);
}
int main(void){
	int i;
	double sum=0,tmp;
	FILE *fp;
	if ((fp = fopen("wed1.txt", "r")) == NULL) {
		fp_err();
	}
	for (i=0;i<10;i++) {
		fscanf(fp, "%lf", &tmp);
		sum += tmp;
	}
	fclose(fp);
	if ((fp = fopen("wed2.txt", "w")) == NULL) {
		fp_err();
	}
	fprintf(fp, "合計:%f\n平均値:%f\n", sum, sum/10);
	fclose(fp);
	return 0;
}
