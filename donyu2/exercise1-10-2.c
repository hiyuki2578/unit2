#include <stdio.h>
int main(void) {
	int a;
	FILE *fp;
	if((fp = fopen("text411.txt","r")) == NULL){
		printf("ファイルを開けませんでした。\n");
		return 1;
	}
	fscanf(fp,"%d",&a);
	fclose(fp);
	printf("%d",a);
	return 0;
}
