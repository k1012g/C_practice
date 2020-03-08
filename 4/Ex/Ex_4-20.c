#include <stdio.h>

int main(void){
	int i, j, num;

	puts("下向きピラミッドを作ります。");

	printf("何段ですか? : "); scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i - 1; j++) {
			putchar(' ');
		}
		for (j = 1; j <= 2 * (num - i) + 1; j++) {
			printf("%d", i % 10);
		}
		puts("");
	}

	return 0;
}