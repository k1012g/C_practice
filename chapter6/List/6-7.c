#include <stdio.h>

void put_chars(int ch, int n){
	while (n-- > 0){
		putchar(ch);
	}
}

int main(void){
	int i, len;

	printf("右下二等辺直角三角形を作ります。\n");
	printf("短辺 : "); scanf("%d", &len);

	for (i = 1; i <= len; i++){
		put_chars(' ', len - i);
		put_chars('*', i);
		puts("");
	}

	return 0;
}