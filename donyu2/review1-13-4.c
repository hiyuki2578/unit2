#include <stdio.h>
int main(void) {
    FILE *fp;
    char str[127][3];
    int i;
    if((fp = fopen("text444.txt","r")) == NULL){
        printf("ファイルを開けませんでした。\n");
        return 1;
    }
    
    printf("text444.txtからデータを読み込みます。\n");
    for(i=0;i<3;i++){
        fscanf(fp,"%s",str[i]);
        printf(fp,"ファイル内の文字列：%s\n",str[i]);
    }
        fclose(fp);
        return (0);
}
