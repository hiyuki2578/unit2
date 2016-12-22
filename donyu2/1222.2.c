#include<stdio.h>
typedef struct{
	char name[4];
	int age;
	double height;
}profile;

int main(void) {
	profile persons[2];
	int i;
	for (i = 0;i < 2;i++) {
		printf("name:");scanf("%s", persons[i].name);
		printf("age:");scanf("%d", &persons[i].age);
		printf("height:");scanf("%lf", &persons[i].height);
		printf("\n");
	}
	printf("name,age,height\n");
	for (i = 0;i < 2;i++) {
		printf("%4s", persons[i].name);
		printf("%5d", persons[i].age);
		printf("%6.1f\n", persons[i].height);
		printf("\n");

	}
	return 0;
}