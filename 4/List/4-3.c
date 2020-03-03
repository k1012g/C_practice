#include <stdio.h>

int main(void){
	int num;

	printf("正の整数を入力してください : ");
	scanf("%d", &num);

	while (num >= 0){
		printf("%d ", num);
		num--;
	}
	puts("");

	return 0;
}