#include <stdio.h>

int main(void){
	int i;
	int array[5];

	for (i = 0; i < 5; i++) {
		array[i] = 5 - i;
		printf("array[%d] = %d\n", i, array[i]);
	}

	return 0;
}