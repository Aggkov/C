#include <stdio.h>

#define SIZE1 8
#define SIZE2 3

int main() {
	int sourceArr[SIZE1] = {0, 2, 1, 1, 0, 2, 2, 2};
	int countArr[SIZE2] = {0};

	for (int i = 0; i < SIZE1; i++) {
		countArr[sourceArr[i]]++;
	}

	for (int i = 0; i < SIZE2; i++) {
		printf("Value %d was found %d times\n", i, countArr[i]);
	}
}