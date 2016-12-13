#include<stdio.h>
int main(void) {
	int xa,xb;
	int *pa,*pb;
	pa = &xa;
	pb = &xb;
	xa = 10;
	*pb = 20;
	printf("xa=%d xb=%d\n",xa,xb);
	printf("pa=%d pb=%d\n",*pa,*pb);
	return 0;
}