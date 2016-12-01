#include <stdio.h>
int main(void) {
	FILE *fp;
	char str[127][3];
	int i;
	if((fp = fopen("text443.txt","w")) == NULL){
		printf("ファイルを開けませんでした。\n");
		return 1;
	}
	for(i=0;i<3;i++){
		printf("文字列を入力してください。\n");
		gets(str[i]);
		fprintf(fp,"%s\n",str[i]);
	}
	fclose(fp);
	printf("入力情報をtext432.txtに書き込みます。\n");
	return 0;
}
