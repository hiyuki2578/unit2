#include <stdio.h>
int main(void) {
    FILE *fp;
    int i;
    int data[5]={7,10,5,8,6};
    if((fp = fopen("text423.txt","w")) == NULL){
        printf("ファイルを開けませんでした。\n");
        return 1;
    }
    for(i=0;i<5;i++){
        fprintf(fp,"%d\n",data[i]);
    }
        fclose(fp);
        printf("ファイルに値を書き込みます\n");
        return (0);
}
