#include <stdio.h>

int main(void){
	int i, num;

	printf("正の整数を入力してください : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		putchar('*');
	}

	puts("");

	return 0;
}