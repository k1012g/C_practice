#include <stdio.h>

int main(void){
	int num1, num2, num3, num4, max;

	puts("4つの整数を入力してください。");

	printf("整数1 : "); scanf("%d", &num1);
	printf("整数2 : "); scanf("%d", &num2);
	printf("整数3 : "); scanf("%d", &num3);
	printf("整数4 : "); scanf("%d", &num4);

	max = num1;
	max = (max > num2) ? max : num2;
	max = (max > num3) ? max : num3;
	max = (max > num4) ? max : num4;

	printf("最大値は%dです。\n", max);

	return 0;
}