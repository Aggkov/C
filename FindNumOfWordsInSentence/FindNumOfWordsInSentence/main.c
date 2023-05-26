#include <stdio.h>
#include <string.h>

#define SIZE 80

int words(char *str);

int main() {
    /*char value[80] = "gogo";
    puts(value);
    strcpy_s(value, strlen(value), "11");
    puts(value);
    fgets(value, 80, stdin);
    puts(value);*/
    char string[SIZE];
    gets(string);
    printf("%d\n", words(string));
    
    return 0;

}

int words(char *str) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            if (str[i + 1] == ' ' || str[i + 1] == '\0') {
                continue;
            }
            else {
                count++;
            }
        }
    }
	return count;
}

int words2(char *str) {
    int i = 0;
    int count = 0;
    while (*str) {
        if (*str == ' ') {
            count++;
        }
        str++;
    }
    count++;
    return count;
}