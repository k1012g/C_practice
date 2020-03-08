#include <stdio.h>

int main(void){
	int i, j, num1, num2;

	puts("横長の正方形を作ります。");

	printf("1辺(その1) : "); scanf("%d", &num1);
	printf("1辺(その2) : "); scanf("%d", &num2);

	int max = (num1 > num2) ? num1 : num2;
	int min = (num1 < num2) ? num1 : num2;

	for (i = 1; i <= min; i++) {
		for (j = 1; j <= max; j++) {
			putchar('*');
		}
		puts("");
	}

	return 0;
}