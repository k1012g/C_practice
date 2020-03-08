#include <stdio.h>

int main(void){
	int num1, num2;

	puts("2つの整数を入力してください。");

	printf("整数1 : "); scanf("%d", &num1);
	printf("整数2 : "); scanf("%d", &num2);

	if (num1 % num2){
		printf("%dは%dの約数ではありません。\n", num2, num1);
	}else{
		printf("%dは%dの約数です。\n", num2, num1);
	}

	return 0;
}