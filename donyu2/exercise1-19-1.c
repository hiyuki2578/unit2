#include<stdio.h>
typedef struct {
	char name[20];
	int point;
}data;

data add_point (data student);

int main(void){
	int a;
	data person[3]={
		{"yamada",92},		
		{"sato",85},
	{"takahashi",66}
	}
	for(a=0;a<3;a++){
		person[a]=add_point(person[a]);
		printf("%sの点数は%d点になりました\n",person[a].name,person[a].point);
	}
	return 0;
}
	data add_point(data student){
	student.point = student.point+5;
	return student;
}
