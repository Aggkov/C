#include <stdio.h>
#include <stdbool.h>

/*
*
	Find and print unique elements
*/

#define SIZE 12


int findUniqueElements(int arr[], rsize_t size);
bool contains(int arr[], int elem, rsize_t size);

int main() {
	int arr[SIZE]= {7,3, 10, 7, 10, 3 , 8, 8, 9, 13, 10, 10};
	
	printf("Count is %d\n", findUniqueElements(arr, SIZE));
	return 0;
}

int findUniqueElements(int arr[], rsize_t size) {
	int uniqueElements[SIZE] = {0};
	int haveSeenBefore[SIZE] = { 0 };
	int count = 0;
	for (int i = 0; i < size; i++) {
		int flag = 1; // 1 = elem is unique, 0 = elem is duplicate
		for (int j = i + 1; j < size; j++) {
			if (arr[i] == arr[j]) {
				haveSeenBefore[i] = arr[i];
				flag = 0;
				break;
			}
		}
		if (flag == 1 || i == size - 1) {
			if (!contains(haveSeenBefore, arr[i], SIZE)) {
				count++;
				uniqueElements[i] = arr[i];
			}
		}
	}
	printf("Unique elements are: \n");
	for (int i = 0; i < size; i++) {
		printf("%d ", uniqueElements[i]);
	}
	printf("\n");
	return count;
}

bool contains(int arr[], int elem, rsize_t size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == elem) {
			return true;
		}
	}
	return false;
}


