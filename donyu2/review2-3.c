#include<stdio.h>
int main(void) {
	int a, b;
	printf("•Ï”A‚É®”‚ğİ’è‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d", &a);
	printf("•Ï”B‚É®”‚ğİ’è‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d", &b);
	if (a < b) {
		printf("B‚Ì•û‚ªA‚æ‚è%d‘å‚«‚¢‚Å‚·B\n",b-a );
	}else if (b < a) {
		printf("A‚Ì•û‚ªB‚æ‚è%d‘å‚«‚¢‚Å‚·B\n", a - b);
	}else {
		printf("A‚ÆB‚Í“™‚µ‚¢‚Å‚·B\n");
	}
	return(0);
}
