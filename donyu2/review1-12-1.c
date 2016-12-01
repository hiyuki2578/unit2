#include <stdio.h>
int main(void) {
	FILE *fp;
	char str[]={"Hello!\n"};
	if((fp = fopen("text431.txt","w")) == NULL){
		printf("ファイルを開けませんでした。\n");
		return 1;
	}
	fprintf(fp,"%s\n",str);
	fclose(fp);
	return 0;
}

