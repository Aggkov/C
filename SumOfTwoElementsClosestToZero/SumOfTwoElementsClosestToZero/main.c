#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 5
#define ROTATION 4

/*
* 
* print the sum of two elements that is closest to zero
*  { 1,-2,3,2,1 } ==> -2 + 2 = 0
*/

int findSumClosestToZero(int arr[], int size);

int main() {
	int arr[5] = { 1,-6,4,-2,3 };
	printf("Closest sum to Zero is %d\n", findSumClosestToZero(arr, SIZE));

}

int findSumClosestToZero(int arr[], int size) {
	int minSum = 2147483647;
	int elem1;
	int elem2;
	int index1;
	int index2;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			int sum = arr[i] + arr[j];
			if (abs(sum) < minSum) {
				minSum = abs(sum);
				elem1 = arr[i];
				index1 = i;
				elem2 = arr[j];
				index2 = j;
			}
		}
	}
	printf("Element %d at index %d\n", elem1, index1);
	printf("Element %d at index %d\n", elem2, index2);
	return minSum;
}
	