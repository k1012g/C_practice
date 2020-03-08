#include <stdio.h>

int main(void){
	int i, j, num;

	puts("ピラミッドを作ります。");

	printf("何段ですか? : "); scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		for (j = 1; j <= num - i; j++) {
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			putchar('*');
		}
		puts("");
	}

	return 0;
}