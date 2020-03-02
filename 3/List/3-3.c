#include <stdio.h>

int main(void){
	int num;

	printf("整数を入力してください : ");
	scanf("%d", &num);

	if (num == 0) {
		puts("その数は0です。");
	}else if (num > 0) {
		puts("その数は正の数です。");
	}else {
		puts("その数は負の数です。");
	}

	return 0;
}