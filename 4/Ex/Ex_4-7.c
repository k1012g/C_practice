#include <stdio.h>

int main(void){
	int num;
	int i = 0;

	printf("正の整数を入力してください : ");
	scanf("%d", &num);

	while (++i <= num){
		if (i % 2){
			putchar('+');
		}else{
			putchar('-');
		}
	}

	puts("");

	return 0;
}