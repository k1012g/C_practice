#include <stdio.h>

int main(void){
	double num;

	puts("実数を入力してください。");
	scanf("%lf", &num);

	printf("あなたは%fと入力しましたね。\n", num);

	return 0;
}