#include<stdio.h>
struct person{
	char name[10];
	double h;
}; //personと言う名の構造体を作成
int main(void){
	int i;
	double sum=0;//合計値を入れる変数 sum を使う
	double avg;//平均値を入れる変数 avg を使う
	struct person student[3]; //構造体でstudentを人数分実体を作成。
	FILE *fp;
	fp = fopen("test.txt","r");
	//ファイルを開くのを２行で記述
	if (fp == NULL){
		printf("error\n");
		return 1;
	} //ファイルエラー処理
	for (i=0;i<3;i++){
		fscanf(fp,"%s",student[i].name);//name要素を読み込む
		fscanf(fp,"%lf",&student[i].h);//h 要素を読み込む
		sum += student[i].h;// h の合計値を計算
	}
	fclose(fp);
	avg = sum/3.0; //平均値を(double)で計算
	printf("%lf\n",avg);
	return 0; 
}
