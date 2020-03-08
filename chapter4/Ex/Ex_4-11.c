#include <stdio.h>

int main(void){
	int i, height, height2, num;

	printf("何cmから : "); scanf("%d", &height);
	printf("何cmまで : "); scanf("%d", &height2);
	printf("何cmごと : "); scanf("%d", &num);

	if (height > 0) {
		for (i = height; i <= height2; i += num) {
			printf("%dcm %2.2fkg\n", i, (double)(i - 100) * 0.9);
		}
	}

	return 0;
}