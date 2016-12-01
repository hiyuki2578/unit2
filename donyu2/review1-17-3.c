#include<stdio.h>
typedef struct {
	char name[20];
	int height;
	double weight;
}data;
int main(void){
	data student[100];
	int i;
	for(i=0;i<2;i++){
		printf("名前\n");
		scanf("%s",student[i].name);
		printf("身長\n");
		scanf("%d",&student[i].height);
		printf("体重\n");
		scanf("%lf",&student[i].weight);
		printf("\n");
	}
	for(i=0;i<2;i++){
		printf("名前=%s\n",student[i].name);
		printf("身長=%d[cm]\n",student[i].height);
		printf("体重=%f[kg]\n",student[i].weight);
	}
	return 0;
}