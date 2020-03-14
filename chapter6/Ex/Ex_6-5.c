#include <stdio.h>

void alert(int count){
	while (count-- > 0){
		putchar('\a');
	}
}

int main(void){
	int i, num;

	printf("正の整数を入力してください : "); scanf("%d", &num);

	if (num > 0){
		for (i = 1; i <= num; i++) {
			alert(i);
			puts("");
		}
	}

	return 0;
}