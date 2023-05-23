#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
*
	Rotate an Array by 1 position to the left
	Example [5,4,7,3] ==> [4,7,3,5];
*/

#define SIZE 9

void rotateArray(int *arrP, int size);

int main() {
	int* arr = malloc(sizeof(int) * SIZE);
	if (arr == NULL) {
		return;
	}
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i] = i + 1);
	}
	printf("\n");
	rotateArray(arr, SIZE);
	printf("---After Rotation---\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}



void rotateArray(int* arrP, int size) {
	int tmp;
	for (int i = 0; i < size; i++) {
		if (i == 0) {
			tmp = arrP[i];
		}
		if (i == size - 1) {
			arrP[size - 1] = tmp;
		}
		else {
			arrP[i] = arrP[i + 1];
		}
	}
}