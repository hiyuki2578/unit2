#include<stdio.h>
typedef struct{
	char name[9];
	int hp;
	int st;
}list;
int main(void){
	FILE *fp;
	list member[3];
	int i;
	if((fp=fopen("test1222.txt","r"))==NULL){
		printf("ファイルを開けません。\n");
		return 1;
	}
	for(i=0;i<3;i++){
		fscanf(fp,"%s ",member[i].name);
		fscanf(fp,"%d ",&member[i].hp);
		fscanf(fp,"%d\n",&member[i].st);
	}
	fclose(fp);
	printf(" キャラ名   体力値   筋力値 \n");
	for(i=0;i<3;i++){
		printf("%8s",member[i].name);
		printf("%8d",member[i].hp);
		printf("%8d",member[i].st);
		printf("\n");
	}
	return 0;
}
