#include <stdio.h>

int min_of(const int v[], int num){
	int i;
	int min = v[0];

	for (i = 0; i < num; i++) {
		if (min > v[i]){
			min = v[i];
		}
	}

	return min;
}

int main(void){
	int i;
	int x[5];
	int minnimum;

	for (i = 0; i < 5; i++) {
		printf("整数%d : ", i + 1); scanf("%d", &x[i]);
	}

	minnimum = min_of(x, 5);

	printf("最小値は%dです。\n", minnimum);

	return 0;
}