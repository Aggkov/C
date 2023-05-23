#include <stdio.h>
#include <stdbool.h>

/*
* find largest sum of two adjacent elements in array
	[1,4,3,7,2] --> 10
*/

#define UNEVEN 5
#define EVEN 6

int findSumAdjacentElements(int arr[], rsize_t size);


int main() {
	int arr[UNEVEN] = { 1, 4, 3, 7, 2 };
	printf("largest sum is %d", findSumAdjacentElements(arr, UNEVEN));
	return 0;

}

int findSumAdjacentElements(int arr[], rsize_t size) {
	int largestSum = arr[0] + arr[1];
	int newSum = 0;
	for (int i = 1; i < size; i++) {
		newSum = arr[i] + arr[i + 1];
		if (newSum > largestSum) {
			largestSum = newSum;
		}
	}
	return largestSum;
}