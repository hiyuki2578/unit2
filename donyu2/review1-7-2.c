#include <stdio.h>
int main(void) {
    char str[20];
    printf("文字列を入力してください\n");
    gets(str);
    printf("入力された文字列は%sです\n",str);
    return 0;
}
