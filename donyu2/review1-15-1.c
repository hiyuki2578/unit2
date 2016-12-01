#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
	double x;
	int i;
	char HL;
	FILE *fp;
	if(fp = fopen("text511.txt","w")==NULL){
		printf("ファイルを開けませんでした。\n");
		return 1;
	}
	srand((unsigned)time(NULL));
	for(i=0;i<10;i++){
		x=(double)rand()/RAND_MAX;
	if(x<0.5)HL='L'
	else HL ='H';		
	printf("乱数値は%f[%c]です\n",x,HL);
	fprintf(fp,"%c",HL);
	fclose(fp);
	return(0);
}
	