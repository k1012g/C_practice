#include <stdio.h>

int main(void){
	int retry;

	do {
		int num;

		puts("整数を入力してください。");

		printf("整数 : "); scanf("%d", &num);

		if (num % 2) {
			puts("その数は奇数です。");
		}else{
			puts("その数は偶数です。");
		}

		printf("もう一度? [Yes ... 0 / No ... 1] : ");
		scanf("%d", &retry);
	} while (retry == 0);

	puts("終了します。");

	return 0;
}