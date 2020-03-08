#include <stdio.h>

int main(void){
	int num;

	puts("整数を入力してください。");

	printf("整数 : "); scanf("%d", &num);

	switch (num % 3) {
		case 0:
			puts("その数は3で割り切れます。");
			break;
		case 1:
			puts("その数を3で割った剰余は1です。");
			break;
		case 2:
			puts("その数を3で割った剰余は2です。");
			break;
	}

	return 0;
}