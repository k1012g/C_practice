#include <stdio.h>

int main(void){
	int num;

	printf("整数を入力してください : ");
	scanf("%d", &num);

	printf("%dから6を減じると%dです。\n", num, num - 6);

	return 0;
}