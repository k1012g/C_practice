#include <stdio.h>

int min(int a, int b, int c){
	int min = a;

	min = (b < min) ? b : min;
	min = (c < min) ? c : min;

	return min;
}

int main(void){
	int n1, n2, n3;

	puts("3つの整数を入力してください。");
	printf("整数1 : "); scanf("%d", &n1);
	printf("整数2 : "); scanf("%d", &n2);
	printf("整数3 : "); scanf("%d", &n3);

	printf("最小値は%dです。\n", min(n1, n2, n3));

	return 0;
}