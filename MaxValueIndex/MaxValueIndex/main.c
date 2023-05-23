#include <stdio.h>


int maxIndx(int arr[]);

int main() {
	int arr[] = { 3,2,7,1,2,4 };
	printf("%d\n", maxIndx(arr));
	

}

int maxIndx(int arr[]) {
	int maxVal = arr[0];
	int maxIndex = 0;
	for (int i = 1; i < 6; i++) {
		if (arr[i] > maxVal) {
			maxVal = arr[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}