#include <stdio.h>


int main() {
	
	int size;
	int arr[7] = { 1,9,10,11,13,14,15 };

	for (int i = 0; i < 7; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (arr[i] > arr[j]) {
				printf("not asc");
				break;
			}
		}
	}
	printf("asc");

	return 0; 
}