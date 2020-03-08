#include <stdio.h>

int main(void){
	int i, j, length;

	puts("右上直角二等辺三角形を作ります。");

	printf("辺の長さ : "); scanf("%d", &length);

	for (i = length; i >= 1; i--) {
		for (j = 1; j <= length - i; j++) {
			putchar(' ');
		}
		for (j = 1; j <= i; j++) {
			putchar('*');
		}
		puts("");
	}
	return 0;
}