#include <stdio.h>
#include <stdlib.h>

int counter(int* array, int* end);

int main() {

	char* X = "Techie";
	char* Y = "Tech";

	/*int ret = strcmp(X, Y);

	if (ret > 0) {
		printf("%s'n", "X is greater than Y");
	}
	else if (ret < 0) {
		printf("%s\n", "X is less than Y");
	}
	else {
		printf("%s\n", "X is equal to Y");
	}
	*/
	// static 
	int arr1[4];
	//printf("%p\n", arr1);
	arr1[0] = 1;
	//printf("%p\n", &arr1[0]);
	arr1[1] = 3;
	//printf("%p\n", &arr1[1]);
	arr1[2] = 5;
	arr1[3] = 7;

	// dynamic
	int *arr2 = (int*)malloc(sizeof(int) * 3);
	arr2[0] = 4;
	arr2[1] = 5;
	arr2[2] = 6;
	
	int lengthArr1 = sizeof(arr1) / sizeof(arr1[0]);
	//int lengthArr2 = sizeof(arr2) / sizeof(arr2[0]);
	int* end = arr2 + 3;
	printf("num of elems is = %d\n", counter(arr2, end));
	/*for (int i = 0; i < lengthArr1; i++) {
		printf("Elements in arr1 = %d\n", arr1[i]);
	}
	*/
	
	return 0;
}


int counter(int* array, int *end) {
	int count = 0;
	int i = 0;
	while(array < end) {
		printf("%d\n",*(array + i));
		count++;
		array++;
		i++;
	}

	return count;
}

int strcmp(const char* X, const char* Y)
{
	int count = 0;
	while (*X)
	{
		printf("hi");
		// if characters differ, or end of the second string is reached
		if (*X != *Y) {
			break;
		}

		// move to the next pair of characters
		X++;
		Y++;
		printf("%d\n", count++);
	}

	// return the ASCII difference after converting `char*` to `unsigned char*`
	return *(const unsigned char*)X - *(const unsigned char*)Y;
}

