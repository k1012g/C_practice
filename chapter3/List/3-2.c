#include <stdio.h>

int main(void){
	int num;

	printf("整数を入力してください : ");
	scanf("%d", &num);

	if (num % 2){
		puts("その数は奇数です。");
	}else{
		puts("その数は偶数です。");
	}

	return 0;
}