#include <stdio.h>
#include <stdbool.h>

/*
*
	Find And Print All Unique Elements 
*/

#define SIZE 5


void removeDuplicates(int arr[], rsize_t size);
bool contains(int arr[], int elem);

int main() {
	int array[SIZE] = { 1, 3, 3, 7, 10 };
	uniqueElems(array, SIZE);
	return 0;

}

void removeDuplicates(int arr[], rsize_t size) {
	int set[SIZE];
	for (int i = 0; i < size; i++) {
		if (!contains(set, arr[i])) {
			set[i] = arr[i];
		}
	}
	printf("Unique elements are\n");
	for (int i = 0; i < size; i++) {
		printf("%d\n", set[i]);
	}


}

bool contains(int arr[], int elem) {
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] == elem) {
			return true;
		}
	}
	return false;
}