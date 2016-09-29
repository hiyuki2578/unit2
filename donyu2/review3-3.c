#include<stdio.h>
int main(void) {
	int answer[5][2];
	int i,b = 0;
	
	for (i = 0; i<5; i++) {
		printf("[%d 人目]好きな飲み物を１つ選択してください。\n", i + 1);
		printf("1.ウーロン茶、2.ミネラルウォーター、3.サイダー:");
		scanf("%d", &answer[i][0]);
		printf("あなたの性別を教えてください。1.男性2.女性:");
		scanf("%d", &answer[i][1]);
		if (answer[i][0] == 1&& answer[i][1] ==2) {
			b++;
		}
	}
	printf("ウーロン茶が好きな女性は%d人でした。\n", b);
	return(0);
}

