#include <stdio.h>
#include <string.h>

#define SIZE 4

int main() {
	char str1[6] = "Hello";
	char str2[6];
	strcpy(str2, str1);
	puts(str2);
}
