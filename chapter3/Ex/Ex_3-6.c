#include <stdio.h>

int main(void){

	int num1, num2, num3;

	puts("3つの整数を入力してください。");

	printf("整数A : "); scanf("%d", &num1);
	printf("整数B : "); scanf("%d", &num2);
	printf("整数C : "); scanf("%d", &num3);

	if (num1 == num2 && num1 == num3) {
		puts("3つの値は等しいです。");
	}else if (num1 == num2 || num2 == num3 || num1 == num3) {
		puts("2つの値は等しいです。");
	}else {
		puts("3つの値は異なります。");
	}

	return 0;
}