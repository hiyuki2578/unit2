#include<stdio.h>
struct data {
	char name[20];
	int height;
	double weight;
};
int main(void){
	struct data student[100] = {
		{"Jun" , 170, 65.0 },
		{"Nero", 160, 51.2 }
	};
	printf("名前=%s\n",student[1].name);
	printf("身長=%d[cm]\n",student[1].height);
	printf("体重=%f[kg]\n",student[1].weight);
	return 0;
}
