#include <stdio.h>

int main(void){
	int i, num;

	printf("nの値 : "); scanf("%d", &num);

	for (i = 1; i <= num; i++){
		printf("%dの2乗は%d\n", i, i * i);
	}

	return 0;
}