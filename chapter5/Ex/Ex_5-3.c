#include <stdio.h>

#define NUMBER 15

int main(void){
	int i, num;
	int data[NUMBER];

	printf("データ数を入力してください : ");
	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER){
			printf("1 ~ %dまでの間で入力してください : ", NUMBER);
		}
	}while (num < 1 || num > NUMBER);

	for (i = 0; i < num; i++) {
		printf("%2d番 : ", i + 1);
		scanf("%d", &data[i]);
	}

	printf("{");
	for (i = 0; i < num; i++) {
		if (i == num - 1) {
			printf("%d", data[i]);
		}else{
			printf("%d, ", data[i]);
		}
	}
	printf("}\n");

	return 0;
}