#include <stdio.h>

void put_stars(int n){
	while (n-- > 0){
		putchar('*');
	}
}

int main(void){
	int i, len;

	printf("左下二等辺直角三角形を作ります。\n");
	printf("短辺 : "); scanf("%d", &len);

	for (i = 0; i <= len; i++) {
		put_stars(i);
		puts("");
	}

	return 0;
}