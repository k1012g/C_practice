#include <stdio.h>

int main(void){
	int i, j, num;

	puts("正方形を作ります。");

	printf("何段ですか？ : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		for (j = 1; j <= num; j++) {
			putchar('*');
		}
		puts("");
	}

	return 0;
}