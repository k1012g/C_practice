#include <stdio.h>

int main(void){
	int num1, num2, num3;

	puts("3つの整数を入力してください。");

	printf("整数1 : "); scanf("%d", &num1);
	printf("整数2 : "); scanf("%d", &num2);
	printf("整数3 : "); scanf("%d", &num3);

	printf("それらの和は%dです。\n", num1 + num2 + num3);

	return 0;
}