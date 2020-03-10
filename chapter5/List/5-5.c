#include <stdio.h>

#define NUMBER 5

int main(void){
	int i, max, min;
	int score[NUMBER];
	int sum = 0;

	printf("%d人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d番 : ", i + 1);
		scanf("%d", &score[i]);
		sum += score[i];
	}

	min = max = score[0];

	for (i = 1; i < NUMBER; i++) {
		if (score[i] > max) max = score[i];
		if (score[i] < min) min = score[i];
	}

	printf("最高点 : %d点\n", max);
	printf("最低点 : %d点\n", min);

	return 0;
}