#include<stdio.h>
#include<stdlib.h>

int main(void){
	char number[4][7];
	char name[4][31];
	FILE *fp;
	int i;
	if(fp = fopen("text513.txt","r")==NULL){
		printf("ファイルを開けませんでした。\n");
		return 1;
	}
	for(i=0;i<4;i++){
		fprintf(fp,"%s",number[i]);
		printf("学籍番号%sの名前:",number[i]);
		gets(name[i]);
	}
	printf("全学年のリストを表示します\n");
	printf("学籍番号　名前");
	for(i=0;i<4;i++){
		printf("%s %s\n",number[i],name[i]);
	}
	fclose(fp);
	return(0);
}
	