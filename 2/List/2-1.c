#include <stdio.h>

int main(void){
	int num1, num2;

	puts("2つの整数を入力してください。");

	printf("整数1 : "); scanf("%d", &num1);
	printf("整数2 : "); scanf("%d", &num2);

	printf("num1 + num2 = %d\n", num1 + num2);
	printf("num1 - num2 = %d\n", num1 - num2);
	printf("num1 * num2 = %d\n", num1 * num2);
	printf("num1 / num2 = %d\n", num1 / num2);
	printf("num1 %% num2 = %d\n", num1 % num2);

	return 0;
}