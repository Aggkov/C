#include <stdio.h>
#include <stdlib.h>

//Find and Print which element or elements appear the most in sourceArr

#define SIZE1 20
#define SIZE2 10

int main() {
	int sourceArr[SIZE1] = { 1, 3, 1, 1, 1, 1, 2, 8, 4, 6, 5, 3, 9, 7, 8, 8, 9, 5, 5, 4 };
	int countArr[SIZE2] = { 0 };
	int i;
	for (i = 0; i < SIZE1; i++) {
		countArr[sourceArr[i]]++;
	}
	int max = countArr[0];
	int element = 0;
	for (i = 1; i < SIZE2; i++) {
		if (countArr[i] > max) {
			max = countArr[i];
			element = i;
		}
	}
	printf("Element %d was found the most times = %d\n", element, max);
	// find if there is another value occuring same times as max found already
	for (i = 0; i < SIZE2; i++) {
		if (countArr[i] == max && i != element) {
			element = i;
			printf("Element %d was found the most times = %d\n", element, countArr[i]);
		}
	}
	return 0;
}