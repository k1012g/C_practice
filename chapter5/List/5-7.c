#include <stdio.h>

int main(void){
	int i, j;
	int score1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
	int score2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
	int sum[4][3];

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			sum[i][j] = score1[i][j] + score2[i][j];
		}
	}


	puts("1回目の点数");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%4d", score1[i][j]);
		}
		puts("");
	}

	puts("2回目の点数");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%4d", score2[i][j]);
		}
		puts("");
	}

	puts("合計点");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%4d", sum[i][j]);
		}
		puts("");
	}

	return 0;
}