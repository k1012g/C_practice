#include <stdio.h>

int main(void){
	int num1, num2;
	int sum;

	puts("2つの整数を入力してください。");

	printf("整数1 : "); scanf("%d", &num1);
	printf("整数2 : "); scanf("%d", &num2);

	sum = num1 + num2;

	printf("それらの和は%dです。\n", sum);

	return 0;
}