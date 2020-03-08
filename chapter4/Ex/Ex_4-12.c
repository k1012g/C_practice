#include <stdio.h>

int main(void){
	int i;
	int num;

	printf("整数値 : "); scanf("%d", &num);

	if (num > 0) {
		for (i = 1; i <= num; i++) {
			if (num % i == 0) {
				printf("%d ", i);
			}
		}
	}

	puts("");

	return 0;
}