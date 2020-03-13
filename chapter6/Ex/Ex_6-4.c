#include <stdio.h>

int sumUp(int n){
	int sum, i;

	for (i = 1; i <= n; i++) {
		sum += i;
	}

	return sum;
}

int main(void){
	int x;

	puts("整数を入力してください。");
	printf("整数x : "); scanf("%d", &x);

	printf("1から%dまでの全整数の和は%dです。\n", x, sumUp(x));

	return 0;
}