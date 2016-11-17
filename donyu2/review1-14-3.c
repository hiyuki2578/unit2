#include<stdio.h>
int main(void)
{
	char a[256];
	char filename[256];
	FILE *fp;
	printf("ファイル名を入力してください。\n");
	gets(filename);
	if ((fp = fopen(filename, "r")) == NULL) {
		printf("ファイルを開けませんでした。\n");
		return 1;
	}
	printf("%sファイルを開きます。\n", filename);
	printf("--------------------------\n");
	fscanf(fp, "%s", a);
	printf("%s\n", a);
	fclose(fp);
	return(0);
}