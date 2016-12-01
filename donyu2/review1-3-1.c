#include<stdio.h>
#define N 10
int main(void){
	int num[N];
	int i,n;
	printf("nに9以下の整数を設定して下さい : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("何か整数を入力してください : ");
		scanf("%d",&num[i]);
	}
	printf("入力された値を表示します。\n");
	for(i=0;i<n;i++){
		printf("num[%d]=%d\n",i,num[i]);
	}
	return 0;
}
