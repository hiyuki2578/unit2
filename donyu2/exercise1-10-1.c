#include <stdio.h>
int main(void) {
	int a;
	FILE *fp;
	if((fp = fopen("text411.txt","w")) == NULL){
		printf("ファイルを開けませんでした。\n");
		return 1;
	}
	fprintf(fp, "%d",a);
	fclose(fp);
	return 0;
}
