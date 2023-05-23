#include <stdio.h>

// return 2 values with pointer
int findMinMax(int a, int b, int *min);

int main() {
	int num1 = 5;
	int num2 = 7;
	int min;
	printf("Max is = %d\n", findMinMax(num1, num2, &min));
	printf("Min is = %d\n", min);

	return 0;
}

int findMinMax(int a, int b, int *min) {
	if (a > b) {
		*min = b;
		return a;
	}
	else {
		*min = a;
		return b;
	}
}