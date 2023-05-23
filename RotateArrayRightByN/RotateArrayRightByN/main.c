#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
*
	Rotate an Array by N positions to the RIGHT
*/

#define SIZE 5
#define ROTATION 4

void rotateArrayRightByN(int arr[], int size, int N);
int* rotateArrayByNMoreEfficient(int* arrP, int size, int N);

int main() {
	int* arr = malloc(sizeof(int) * SIZE);
	if (arr == NULL) {
		return;
	}
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i] = i + 1);
	}
	printf("\n");
	rotateArrayRightByN(arr, SIZE, ROTATION);
	//int* new = rotateArrayByNMoreEfficient(arr, SIZE, ROTATION);
	printf("---After Rotation---\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}

void rotateArrayRightByN(int* arrP, int size, int N) {
	for (int i = 0; i < N; i++) {
		int tmp = arrP[size - 1];
		for (int i = size - 1; i > 0; i--) {
			arrP[i] = arrP[i - 1];
		}
		arrP[0] = tmp;
	}
}

int* rotateArrayByNMoreEfficient(int arr[], int size, int N) {
	int i, j;
	int* newArray = (int*)malloc(sizeof(int) * size);
	if (newArray == NULL) {
		return;
	}
	for (i = 0; i < size; i++) {
		j = (size + i - N) % (size); // for right rotation: (i+N)%(size);
		newArray[j] = arr[i];
	}
	return newArray;
}