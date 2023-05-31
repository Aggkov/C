#include <stdio.h>


//Find and Print which lowercase or uppercase letter or space appear the most in sourceArr

#define SIZE1 13
#define SIZE2 53

int main() {
	char sourceArr[SIZE1] = { 'c', 'f', 'B', 'H', 'a', 'B', 'f', 'c', 'r', ' ', ' ', ' ', ' ' };
	int countArr[SIZE2] = { 0 };
	int i;
	for (i = 0; i < SIZE1; i++) {
		// convert char to index
		if (sourceArr[i] >= 'a' && sourceArr[i] <= 'z') {
			int index = sourceArr[i] - 'a';
			countArr[index]++;
		}
		if (sourceArr[i] >= 'A' && sourceArr[i] <= 'Z') {
			int index = sourceArr[i] - 'A' + 25;
			countArr[index]++;
		}
		// if space
		if (sourceArr[i] == ' ') {
			int index = 52;
			countArr[index]++;
		}
	}
	int max = countArr[0];
	char element = 'a';
	for (i = 1; i < SIZE2; i++) {
		if (countArr[i] > max) {
			max = countArr[i];
			if (i >= 0 && i <= 25) {
				element = i + 'a';
			}
			if (i >= 26 && i <= 51) {
				element = (i + 'A') % 26 + 53;
			}
			// if space
			else if (i == 52) {
				element = ' ';
			}
		}
	}
	printf("Element %c was found the most times = %d\n", element, max);
	// find if there is another value occuring same times as max found already
	/*for (i = 0; i < SIZE2; i++) {
		if (countArr[i] == max && (i + 'a') != element) {
			element = i + 'a';
			printf("Element %c was found the most times = %d\n", element, countArr[i]);
		}
	}*/

	return 0;
}