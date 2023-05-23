#include <stdio.h>

//#define _CRT_SECURE_NO_WARNINGS


int main() {

	int num;
	scanf("%d ", &num);
	for (int i = 1; i <= 10; i++) {
		printf("%d * %d = %d\n", i, num, i * num);
		//continue;
	}

	return 0;
}