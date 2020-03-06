#include <stdio.h>

int main(void){
	int i, num;

	printf("何個*を表示しますか? : "); scanf("%d", &num);

	if (num > 0) {
		for (i = 1; i <= num; i++) {
			putchar('*');
			if (i % 5 == 0) {
				puts("");
			}
		}
	}

	puts("");

	return 0;
}