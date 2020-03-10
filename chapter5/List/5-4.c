#include <stdio.h>

#define NUMBER 5

int main(void){
	int i;
	int score[NUMBER];
	int sum = 0;

	printf("%d人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d番 : ", i + 1);
		scanf("%d", &score[i]);
		sum += score[i];
	}

	printf("平均点 : %5.1f点\n", (double)sum / NUMBER);

	return 0;
}