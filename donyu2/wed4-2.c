#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main (void){
	int i;
	int a=0,b;
	srand((unsigned)time(NULL));
	for(i=0;i<10000;i++){
		b=rand()%100+1;
		printf("%d\n",b);
		if(b%2==0){
			a=a+1;
		}
	}
	printf("偶数=%d\n",a);
	printf("奇数=%d\n",10000-a);
	return 0;
}
