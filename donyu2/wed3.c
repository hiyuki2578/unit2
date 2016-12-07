#include<stdio.h>
typedef struct{
	char	name[20];
	int	number;
	double	height;
	double	weight;
}data;
int main(){
	data person[5];
	FILE *fp;
	int i;
	if((fp=fopen("wed3.txt","r"))==NULL){
		printf("ファイルを開けませんでした。\n");
		return 1;
	}
	for(i=0;i<5;i++){
		fscanf(fp,"%[^,],%d,%lf,%lf",person[i].name,&person[i].number,&person[i].height,&person[i].weight);
	}
	fclose(fp);
	for(i=0;i<5;i++){
		printf("名前:%s\n",person[i].name);
		printf("学籍番号:%d\n",person[i].number);
		printf("身長:%f\n",person[i].height);
		printf("体重:%f\n",person[i].weight);
	}
	return 0;
}

