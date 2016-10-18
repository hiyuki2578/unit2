#include <stdio.h>
int main(void) {
    char str[2][128];
    printf("What's your name?\n");
    gets(str[0]);
    printf("How old are you?\n");
    gets(str[1]);
    printf("入力された文章は次です\n");
    printf("1. My name is %s\n",str[0]);
    printf("2. %s year old.\n",str[1]);
    
    return 0;
}
