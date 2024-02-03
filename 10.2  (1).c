#include <stdio.h>

int calculateStringLength(char str[]);

int main() {
    char inputString[100];

    printf("Enter any string: ");
    scanf("%s", inputString);

    int length = calculateStringLength(inputString);
    printf("Length is: %d\n", length);

    return 0;
}

int calculateStringLength(char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}
