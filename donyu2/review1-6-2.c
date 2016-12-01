#include<stdio.h>
#include<string.h>
int main(void){
	char ch1;
	char ch2=0x4E;//文字を 16 進数アスキーコードで入力している
	printf("１文字入力してください。¥n");
	scanf("%c", &ch1);
	getchar();
	if( ch1 == ch2 ) {
		printf("正解！¥n");
	}else{
		printf("残念・・・¥n");
	}
	return 0;
}
