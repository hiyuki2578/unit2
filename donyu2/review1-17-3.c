#include<stdio.h>
  typedef struct {
   char name[20];
   int height;
   double weight;
   }data;
   int main(void){
    struct data student[100] = {
    printf("名前\n");scanf("%s,&student[1].name");
    printf("身長\n");scanf("%d,&student[1].height");
    printf("体重\n");scanf("%s,&student[1].weight");
    
    printf("名前\n");scanf("%s,&student[2].name");
    printf("身長\n");scanf("%d,&student[2].height");
    printf("体重\n");scanf("%s,&student[2].weight");
    
    
    {"Jun" , 170, 65.0 },
    {"Nero", 160, 51.2 }
    };
    printf("名前=%s\n",student[1].name);
    printf("身長=%d[cm]\n",student[1].height);
    printf("体重=%f[kg]\n",student[1].weight);
    
    printf("名前=%s\n",student[1].name);
    printf("身長=%d[cm]\n",student[1].height);
    printf("体重=%f[kg]\n",student[1].weight);
   return 0;
  }