#include<stdio.h>
typedef struct{
	char	name[20];
	int	height;
	double	weight;
}data;
int main(void){
	data student = { "Kojima", 165, 62.3 };
	printf("名前=%s\n",student.name);
	printf("身長=%d[cm]\n",student.height);
	printf("体重=%f[kg]\n",student.weight);
	return 0;
}
