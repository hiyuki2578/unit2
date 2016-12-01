#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	char str[2][10] = { "HIT","OUT" };
	int i, count = 0;
	double avg, x;
	srand((unsigned)time(NULL));
	printf("打率:");
	scanf("%lf", &avg);
	for (i = 0;i<9;i++) {
		x = (double)rand() / RAND_MAX;
		if (x<avg) {
			printf("%s\n", str[0]);;
			count++;
		}
		else {
			printf("%s\n", str[1]);
		}
	}
	printf("HITは%d本\n", count);
	return 0;
}
