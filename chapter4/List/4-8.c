#include <stdio.h>

int main(void){
	int i, num;

	printf("正の整数を入力してください : ");
	scanf("%d", &num);

	for (i = 0; i <= num; i++) {
		printf("%d ", i);
	}

	putchar('\n');

	return 0;
}