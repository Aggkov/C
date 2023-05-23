#include <stdio.h>
#include <stdbool.h>
 
#define SIZE 5
//#define TRUE 1
//#define FALSE 0

int checkIfGoodNeighbors(int arr[]);

int main() {
    int arr1[SIZE] = { 1,3,2,6,3 };
    int arr2[SIZE] = { 5,6,4,2,7 };

    if (checkIfGoodNeighbors(arr1) == true) {
        printf("array has good neighbors\n");
    }
    else {
        printf("array does not have good neighbors\n");
    }
    
}

int checkIfGoodNeighbors(int arr[]) {
    for (int i = 1; i < SIZE - 1; i++) {
        if (arr[i - 1] * arr[i + 1] == arr[i]) {
            return true;
        }
    }
    return false;
}
    

