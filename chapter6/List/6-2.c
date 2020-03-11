#include <stdio.h>

int max(int a, int b, int c){
	int max = a;

	max = (b > max) ? b : max;
	max = (c > max) ? c : max;

	return max;
}

int main(void){
	int n1, n2, n3;

	puts("3つの整数を入力してください。");
	printf("整数1 : "); scanf("%d", &n1);
	printf("整数2 : "); scanf("%d", &n2);
	printf("整数3 : "); scanf("%d", &n3);

	printf("最大値は%dです。\n", max(n1, n2, n3));

	return 0;
}