#include <stdio.h>

#define NUM 6

int main(void){
	int i, j;
	int score[NUM][2];
	int student_score[NUM];
	int subject[2];

	printf("%d人の国語と数学の点数を入力してください。\n", NUM);

	for (i = 0; i < NUM; i++) {
		printf("%2d番   国語 : ", i + 1);
		scanf("%d", &score[i][0]);
		printf("       数学 : ");
		scanf("%d", &score[i][1]);

		student_score[i] = score[i][0] + score[i][1];
		subject[0] += score[i][0];
		subject[1] += score[i][1];
	}

	printf("-----------------------------\n");
	printf("番号  国語  数学  合計  平均\n");
	printf("-----------------------------\n");

	for (i = 0; i < NUM; i++) {
		printf("%3d%6d%6d%6d%7.1f\n", i + 1, score[i][0], score[i][1], student_score[i], (double)student_score[i] / 2);
	}

	printf("-----------------------------\n");
	printf("平均 %6.1f%6.1f%6.1f\n", (double)subject[0] / NUM, (double)subject[1] / NUM, (double)(subject[0] + subject[1]) / NUM);
	printf("-----------------------------\n");

	return 0;
}