#include <stdio.h>

int main(void){
	int i = 0;
	int num;

	printf("正の整数を入力してください : ");
	scanf("%d", &num);

	while (i <= num) {
		printf("%d ", i++);
	}

	puts("");

	return 0;
}