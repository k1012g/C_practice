#include <stdio.h>

int main(void){
	int i;
	int num;
	int sum = 0;

	printf("正の整数を入力してください : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		sum += i;
	}

	printf("1から%dまでの和は%dです。\n", num, sum);

	return 0;
}