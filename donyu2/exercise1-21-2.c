#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
	double x;
	int i;
	FILE *fp;
	if((fp=fopen("text522.txt","w"))==NULL){
		printf("ファイルを開けません");
		return 1;
	}
	srand((unsigned)time(NULL));
	for(i=0;i<10000;i++){
		x=(double)rand()/RAND_MAX;
		fprintf(fp,"%f\n",x);
	}
	fclose(fp);
	return 0;
	
}