#include<stdio.h>
int main(void){
int i, count=0; char str[100];
	printf("文字列を入力 : ");
	gets(str);
	for (i=0;str[i]!='\0';i++){
			if (str[i]=='w'){
					count++;
			}
	}
	printf("wは%d個です\n",count);
	return 0;
}
