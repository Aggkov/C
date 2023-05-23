#include <stdio.h>
#include <stdbool.h>

/*
* [1,3,2,3,1] Palindrome
* [1,2,3,3,2,1] Palindrome
* [1,4,6,2,5] NOT a Palindrome
*/

#define UNEVEN 5
#define EVEN 6

bool checkIfPalindrome(int arr[], size_t size);

int main() {
	int arr[UNEVEN] = { 1, 3, 2, 3, 1 };
	int arr2[UNEVEN] = { 1,4,6,2,5 };
	int arr3[EVEN] = { 1, 2, 3, 3, 2, 1 };
	int arr4[EVEN] = { 1, 2, 6, 3, 2, 1 };
	
	if (checkIfPalindrome(arr4, EVEN)) {
		printf("Array is a Palindrome");
	}
	else {
		printf("Array is not a Palindrome");
	}
	return 0;
}

bool checkIfPalindrome(int arr[], size_t size) {
	if (size % 2 == 1) {
		for (int i = 0; i < size; i++) {
			if (arr[i] == arr[size - 1 - i]) {
				if (size / 2 == i) {
					return true;
					break;
				}
			}
			else {
				return false;
			}
		}
	}
	else if (size % 2 == 0) {
		for (int i = 0; i < size; i++) {
			if (arr[i] == arr[size - 1 - i]) {
				if (i > size / 2) {
					return true;
					break;
				}
			}
			else {
				return false;
			}
		}
	}
}