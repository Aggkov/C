#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
*
	Rotate an Array by N positions to the LEFT
	Example [5,4,7,3] ==> [4,7,3,5];
*/

#define SIZE 5
#define ROTATION 2

void rotateArrayByN(int arr[], int size, int N);
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
	//int *new = rotateArrayByNMoreEfficient(arr, SIZE, ROTATION);
	rotateArrayByN(arr, SIZE, ROTATION);
	printf("---After Left Rotation by %d---\n", ROTATION);
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}

void rotateArrayByN(int* arrP, int size, int N) {
	// create tmp array to store elements in start that will be rotated to the end of the array (left rotation)
	int tmp[ROTATION] = { 0 };
	for (int i = 0; i < N; i++) {
		tmp[i] = arrP[i];
	}
	int k = 0;
	for (int i = 0; i < size; i++) {
		// example with 4 rotations and size of array 9 ==> index 5 of initial array will take index 0 of tmp
		if (i == size - N + k) {
			arrP[size - N + k] = tmp[k];
			k++;
		}
		else {
			arrP[i] = arrP[i + N];
		}
	}
}

int* rotateArrayByNMoreEfficient(int arr[], int size, int N) {
	int i, j;
	int *newArray = (int*)malloc(sizeof(int) * size);
	if (newArray == NULL) {
		return;
	}
	for (i = 0; i < size; i++) {
		j = (size + i - N) % (size); // for right rotation: (i+N)%(size);
		newArray[j] = arr[i];
	}
	return newArray;
}