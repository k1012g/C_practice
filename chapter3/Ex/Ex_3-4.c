#include <stdio.h>

int main(void){
	int num1, num2, num3, min;

	puts("3つの整数を入力してください。");

	printf("整数1 : "); scanf("%d", &num1);
	printf("整数2 : "); scanf("%d", &num2);
	printf("整数3 : "); scanf("%d", &num3);

	min = num1;
	if (num1 > num2) {
		min = num2;
	}else if (num2 > num3){
		min = num3;
	}

	printf("最小値は%dです。\n", min);

	return 0;
}