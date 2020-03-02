#include <stdio.h>

int main(void){
	int num1, num2;

	printf("2つの整数を入力してください。\n");

	printf("整数1 : "); scanf("%d", &num1);
	printf("整数2 : "); scanf("%d", &num2);

	if (num1 == num2) {
		printf("%dは%dと等しいです。\n", num1, num2);
	}else if (num1 > num2){
		printf("%dは%dより大きいです。\n", num1, num2);
	}else{
		printf("%dは%dより小さいです。\n", num1, num2);
	}

	return 0;
}