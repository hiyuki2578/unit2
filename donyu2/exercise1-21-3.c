#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
	int count[10];
	double x;
	int i;
	FILE *fp;
	for(i=0;i<10;i++){
		count[i]=0;
	}
	if((fp=fopen("text522.txt","r"))==NULL){
		printf("ファイルを開けません");
		return 1;
	}
	
	for(i=0;i<10000;i++){
		fscanf(fp,"%lf",&x);
		if(0.0<=x && x<0.1)count[0]++;
		else if(0.1<=x && x<0.2)count[1]++;
		else if(0.2<=x && x<0.3)count[2]++;
		else if(0.3<=x && x<0.4)count[3]++;
		else if(0.4<=x && x<0.5)count[4]++;
		else if(0.5<=x && x<0.6)count[5]++;
		else if(0.6<=x && x<0.7)count[6]++;
		else if(0.7<=x && x<0.8)count[7]++;
		else if(0.8<=x && x<0.9)count[8]++;
		else if(0.9<=x && x<1.0)count[9]++;
		
	}
	printf("( 1)%d個\n",count[0]);
	printf("( 2)%d個\n",count[1]);
	printf("( 3)%d個\n",count[2]);
	printf("( 4)%d個\n",count[3]);
	printf("( 5)%d個\n",count[4]);
	printf("( 6)%d個\n",count[5]);
	printf("( 7)%d個\n",count[6]);
	printf("( 8)%d個\n",count[7]);
	printf("( 9)%d個\n",count[8]);
	printf("(10)%d個\n",count[9]);
	fclose(fp);
	return 0;
}