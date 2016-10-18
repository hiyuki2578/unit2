#include <stdio.h>
int main(void) {
    int i;
    char str[3][10]={"Japan","Italy","France"};
    for(i=0;i<=2;i++){
        printf("%d.%s\n",i+1,str[i]);
    }
    return 0;
}


