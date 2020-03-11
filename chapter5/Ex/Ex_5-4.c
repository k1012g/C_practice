#include <stdio.h>

int main(void){
	int i, j, k;
	int line1[4][3];
	int line2[3][4];
	int line3[4][4];

	puts("整数を入力してください。");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("line1[%d][%d] : ", i, j); scanf("%d", &line1[i][j]);
		}
	}

	puts("整数を入力してください。");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("line2[%d][%d] : ", i, j); scanf("%d", &line2[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			line3[i][j] = 0;
			for (k = 0; k < 3; k++) {
				line3[i][j] += line1[i][k] * line2[k][j];
			}
		}
	}
	puts("");

	puts("line3");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("line3[%d][%d] = %d\n", i, j, line3[i][j]);
		}
	}

	return 0;
}