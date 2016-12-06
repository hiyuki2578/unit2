#include <stdio.h>
int main(void) {
	double a;
	FILE *fp;
	if((fp = fopen("text412.txt","r")) == NULL){
		printf("値を読み込めませんでした。\n");
		return 1;
	}
	fscanf(fp,"%lf",&a);
	fclose(fp);
	printf("%f",a);
	return 0;
}
