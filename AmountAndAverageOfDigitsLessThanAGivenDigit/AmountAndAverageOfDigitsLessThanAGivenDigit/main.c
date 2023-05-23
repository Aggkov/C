#include <stdio.h>
#include <stdlib.h>


// Parameters(number && digit): 13572 , 3 
// print total amout of digits in num that are less than digit (3) ==> 2 digits(1,2) in 13572
// return average of those digits (1 + 2) / 2

double func(int number, int digit);

int main() {

	printf("average is %.2lf\n",func(13572, 3));

	return 0;
}

double func(int number, int digit) {
	int sum = 0;
	// count how many digits is the number
	while (number > 0) {
		int currentDigit = number % 10;
		if (currentDigit < digit) {
			printf("%d is less than %d given\n", currentDigit, digit);
			sum += currentDigit;
		}
		number /= 10;
		
	}
	// return average
	return sum / 2.0;

}