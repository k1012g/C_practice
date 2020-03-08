#include <stdio.h>

int main(void){
	int height;
	double ave_weight;

	puts("身長を入力してください。");

	printf("身長 : "); scanf("%d", &height);

	ave_weight = 0.9 * (height - 100);

	printf("標準体重は%4.1fkgです。\n", ave_weight);

	return 0;
}