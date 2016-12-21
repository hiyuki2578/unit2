#include<stdio.h>
struct data{
	char name[20];
	int nummber;
	int english;
	int math;
	int japanese;
};
	int main(void){
	int english_sum=0;
	int mash_sum=0;
	int japanese_sum=0;
	int i;
	FILE *fp;
	struct data student[5];
	if((fp=fopen("wed5.txt","r"))==NULL){
		printf("ファイルを開けません");
		return 1;
	}
	for(i=0;i<5;i++){
		fscanf(fp,"%s",student[i].name);
		fscanf(fp,"%d",&student[i].nummber);
		fscanf(fp,"%d",&student[i].english);
		fscanf(fp,"%d",&student[i].math);
		fscanf(fp,"%d",&student[i].japanese);
		printf("名前:%s 学籍番号:%d 英語:%d 数学:%d 国語:%d\n",student[i].name,student[i].nummber,student[i].english,student[i].math,student[i].japanese);
		english_sum+=student[i].english;
		mash_sum+=student[i].math;
		japanese_sum+=student[i].japanese;
	}
	printf("英語平均:%f",(double)english_sum/5);
	printf("数学平均:%f",(double)mash_sum/5);
	printf("国語平均:%f",(double)japanese_sum/5);
	fclose(fp);
	return 0;
}