#include <stdio.h>
int main(void) {
	int no;
	printf("整数値の入力");
	scanf("%d", &no);
	for(;no>=1;no--){
		printf("%d ", no);
	}
	return 0;
}
