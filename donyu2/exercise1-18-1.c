#include<stdio.h>
typedef struct {
	char name[20];
	int point;
}data;
void print_point (data student) {
	printf("%sの点数は%d点です\n",student.name,student.point);
}
int main(void){
	int i;
	data person[3]={
		{"yamada",92},
		{"sato",85},
		{"takahashi",66},
	};
	for(i=0;i<3;i++){
		print_point(person[i]);
	}
	return 0;
}