#include <stdio.h>

int main(void){
	int i;
	int a[5] = {1,2,3,4,5};
	int b[5];

	puts("   b   a");

	for (i = 0; i < 5; i++) {
		b[i] = a[4 - i];

		printf("%4d%4d\n", b[i], a[i]);
	}

	return 0;
}