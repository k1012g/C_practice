#include <stdio.h>

int main(void){
	int num;

	printf("正の整数を入力してください : ");
	scanf("%d", &num);

	if (num > 0){
		while (num >= 1){
			printf("%d ", num--);
		}
		puts("");
	}

	return 0;
}