#include <stdio.h>

int cube(int x){
	return x * x * x;
}

int main(void){
	int x;

	puts("整数を入力してください。");
	printf("整数x : "); scanf("%d", &x);

	printf("xの3乗値は%dです。\n", cube(x));

	return 0;
}