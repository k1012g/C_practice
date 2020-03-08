#include <stdio.h>

int main(void){
	int num1, num2;

	puts("2つの整数を入力してください。");

	printf("整数A : "); scanf("%d", &num1);
	printf("整数B : "); scanf("%d", &num2);

	if (num1 > num2) {
		if (num1 - num2 >= 11) {
			puts("それらの差は11以上です。");
		}else{
			puts("それらの差は10以下です。");
		}
	}else{
		if (num2 - num1 >= 11){
			puts("それらの差は11以上です。");
		}else{
			puts("それらの差は10以下です。");
		}
	}

	return 0;
}