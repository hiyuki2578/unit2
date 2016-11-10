#include <stdio.h>
int main(void) {
    FILE *fp;
    char str[128];
    int age;
    if((fp = fopen("text432.txt","w")) == NULL){
        printf("ファイルを開けませんでした。\n");
        return 1;
    }
        printf("名前を入力してください。\n");
        gets(str);
        printf("年齢を入力してください。\n");
        scanf("%d", &age);
        fprintf(fp,"%s\n",str);
        fprintf(fp,"%d\n",age);
        fclose(fp);
        printf("入力情報をtext432.txtに書き込みます。\n");
        return (0);
}
