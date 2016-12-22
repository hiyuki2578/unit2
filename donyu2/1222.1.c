#include<stdio.h>
struct profile{
int id;
char name[128];
int point;
};

int main(void) {
	int i;
	struct profile party[2]={
		{ 123,"suzuki",88 },
		{ 456,"Tanaka",92 }
	};
	for (i = 0;i < 2;i++) {
		printf("id:%d", party[i].id);
		printf("name:%s", party[i].name);
		printf("point:%d", party[i].point);
		printf("\n");

		}
	return 0;
}