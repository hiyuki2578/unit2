#include <stdio.h>
#include <ctype.h>
int main(void) {
	char str[12];
	int i;
	printf("文字列を入力してください\n");
	gets(str);
	printf("大文字に変換します\n");
	for(i=0;i<=12;i++){
		str[i]=toupper(str[i]);
	}
	printf("%s\n",str);
	return 0;
}
