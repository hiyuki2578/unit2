#include<stdio.h>
int main(void) {
	int answer[5];
	int i,a=0,b=0;
	printf("好きな飲み物を１つ選択してください。\n");
	for (i = 0; i<5; i++) {
		printf("[%d 人目] 1.ウーロン茶、2.ミネラルウォーター、3.サイダー:", i+1);
		scanf("%d\n", &a);
			if (a == 1) {
				b = b + 1;
			}
	}
	printf("ウーロン茶が好きな人は%d人でした。\n", b);
	return(0);
}

