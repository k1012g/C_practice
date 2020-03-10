#include <stdio.h>

#define NUMBER 30
#define MAX 100

int main(void){
	int i, j;
	int num;
	int score[NUMBER];
	int graph[11] = {0};

	printf("人数を入力してください : ");

	do{
		scanf("%d", &num);
		if (num < 1 || num > NUMBER){
			printf("\a1 ~ %dで入力してください : ", NUMBER);
		}
	}while (num < 1 || num > NUMBER);

	printf("%d人の点数を入力してください。\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d番 : ", i + 1);
		do {
			scanf("%d", &score[i]);
			if (score[i] < 0 || score[i] > MAX){
				printf("\a0 ~ 100で入力してください : ");
			}
		}while (score[i] < 0 || score[i] > MAX);
		graph[score[i] / 10]++;
	}

	puts("\n---分布グラフ---");
	printf("      100 : ");

	for (j = 0; j < graph[10]; j++) {
		putchar('*');
	}
	puts("");

	for (i = 9; i >= 0; i--) {
		printf("%3d ~ %3d : ", i * 10, i * 10 + 9);
		for (j = 0; j < graph[i]; j++) {
			putchar('*');
		}
		puts("");
	}

	return 0;
}