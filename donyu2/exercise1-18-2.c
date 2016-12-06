#include<stdio.h>
typedef struct {
	char name[20];
	int point;
}data;
void print_point (data student) {
	printf("%sは%d点足りません\n",student.name,100-student.point);
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
