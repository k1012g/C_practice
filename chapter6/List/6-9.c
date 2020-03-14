#include <stdio.h>

#define STUDENTS 5

int score[STUDENTS];

int top(void);

int main(void){
	int i;

	printf("%d人の人数を入力してください。\n", STUDENTS);
	for (i = 0; i < STUDENTS; i++) {
		printf("生徒%d : ", i + 1);
		scanf("%d", &score[i]);
	}

	printf("最高点 = %d\n", top());

	return 0;
}

int top(void){
	int i;
	int max = score[0];

	for (i = 0; i < STUDENTS; i++) {
		if (score[i] > max) {
			max = score[i];
		}
	}

	return max;
}