#include <stdio.h>

int main(void){
	int num1, num2, max, min, start_num;
	int sum = 0;

	puts("2つの整数を入力してください。");

	printf("整数1 : "); scanf("%d", &num1);
	printf("整数2 : "); scanf("%d", &num2);

	if (num1 > num2) {
		max = num1;
		min = num2;
	}else{
		max = num2;
		min = num1;
	}

	start_num = min;
	do {
		sum += start_num;
		start_num++;
	}while(start_num <= max);

	printf("%d以上%d以下の全整数の和は%dです。\n", min, max, sum);

	return 0;
}