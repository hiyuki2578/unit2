#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
	int i;
	double x;
	srand((unsigned)time(NULL));
	for (i = 0; i<10; i++) {
		x = (double)rand()/RAND_MAX;
		printf("%f\n", x);
	}
	return 0;
}

