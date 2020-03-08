#include <stdio.h>

int main(void){
	int i;
	int num;

	printf("正の整数を入力してください : ");
	scanf("%d", &num);

	if (num > 0){
		for (i = 1; i <= num; i++) {
			if (i > 9) {
				printf("%d", i % 10);
			}else{
				printf("%d", i);
			}
		}
	}

	puts("");

	return 0;
}