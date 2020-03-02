#include <stdio.h>

int main(void){
	int num;

	printf("整数を入力してください : ");
	scanf("%d", &num);

	if (num % 5) {
		printf("%dは5で割り切れません\n", num);
	}else{
		printf("%dは5で割り切れます\n", num);
	}

	return 0;
}