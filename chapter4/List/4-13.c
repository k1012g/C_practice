#include <stdio.h>

int main(void){
	int retry;

	do {
		int i, num;

		do {
			printf("正の整数を入力してください : ");
			scanf("%d", &num);

			if (num <= 0) {
				puts("\a正の整数ではありません。");
			}
		}while(num <= 0);

		for (i = 1; i <= num; i++) {
			putchar('*');
		}
		puts("");

		printf("もう一度? [Yes ... 0 / No ... 9] : ");
		scanf("%d", &retry);
	}while (retry == 0);

	puts("終了します。");

	return 0;
}