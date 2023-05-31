#include <stdio.h>


//Find and Print which lowercase letter or letters appear the most in sourceArr

#define SIZE1 10
#define SIZE2 26

int main() {
	char sourceArr[SIZE1] = { 'c', 'z', 'z', 'z', 'a', 'f', 'f', 'c', 'r', 'c' };
	int countArr[SIZE2] = { 0 };
	int i;
	for (i = 0; i < SIZE1; i++) {
		// convert char to index
		int index = sourceArr[i] - 'a';
		countArr[index]++;
	}
	int max = countArr[0];
	char element = 'a';
	for (i = 1; i < SIZE2; i++) {
		if (countArr[i] > max) {
			max = countArr[i];
			element = i + 'a';
		}
	}
	printf("Element %c was found the most times = %d\n", element, max);
	// find if there is another value occuring same times as max found already
	for (i = 0; i < SIZE2; i++) {
		if (countArr[i] == max && (i + 'a') != element) {
			element = i + 'a';
			printf("Element %c was found the most times = %d\n", element, countArr[i]);
		}
	}

	return 0;
}