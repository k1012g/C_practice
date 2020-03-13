#include <stdio.h>

int sqr(int x){
	return x * x;
}

int pow4(int x){
	return sqr(sqr(x));
}

int main(void){
	int x;

	puts("整数を入力してください。");
	printf("整数x : "); scanf("%d", &x);

	printf("xの4乗値は%dです。\n", pow4(x));

	return 0;
}