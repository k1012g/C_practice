#include <stdio.h>

int main(void){
	int sum = 0;
	int count = 0;
	int retry;

	do {
		int num;

		printf("整数を入力してください : ");
		scanf("%d", &num);

		sum += num;
		count++;

		printf("続けますか? [Yes ... 0] : ");
		scanf("%d", &retry);
	} while (retry == 0);

	printf("合計値は%dで、平均値は%fです。\n", sum, (double)sum / count);

	return 0;
}