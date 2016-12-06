#include<stdio.h>
typedef struct {
	char name[20];
	int point;
}data;
int main(void){
	data person[3];
	int i;
	for(i=0;i<3;i++){
		printf("名前\n");
		scanf("%s",person[i].name);
		printf("点数\n");
		scanf("%d",&person[i].point);
		printf("\n");
	}
	for(i=0;i<3;i++){
		printf("%sの点数は%d点です\n",person[i].name,person[i].point);
	}
	return 0;
}