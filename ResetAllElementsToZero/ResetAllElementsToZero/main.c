#include <stdio.h>

#define SIZE 4


void modArr(int* pArr, int size);
void modArr2(int arr[], int size);

int main() {
	int array[SIZE] = {3, 2, 5, 4};
	char name[] = "asdf ada";
	puts(name);
	modArr2(array, SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("%d\n", array[i]);
	}
}


void modArr(int* pArr, int size) {
	for (int i = 0; i < size; i++)
		pArr[i] = 0;
}

// arr[] decays into a pointer
void modArr2(int arr[], int size) {
	for (int i = 0; i < size; i++)
		arr[i] = 0;
}