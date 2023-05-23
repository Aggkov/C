#include <stdio.h>
#include <stdbool.h>

/*
* 
	[1,2,3,7,10] --> Really sorted
	[1,2,3,3,10] --> Somewhat sorted
	[1,7,3,12,10] --> NOT sorted
*/

#define UNEVEN 5
#define EVEN 6

bool checkIfSorted(int arr[], rsize_t size);


int main() {
	int arr[UNEVEN] = { 1, 3, 3, 7, 10 };
	checkIfSorted(arr, UNEVEN);
	return 0;

}

bool checkIfSorted(int arr[], rsize_t size) {
	int count = 0;
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			printf("array is not sorted\n");
			return false;
		}
		if (arr[i] < arr[i + 1]) {
			continue;
		}
		if (arr[i] == arr[i + 1]) {
			count++;
		}
	}
	if (count > 0) {
		printf("array is somewhat sorted\n");
		return;
	}
	printf("array is really sorted\n");
	return true;
}