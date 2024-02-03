#include <stdio.h>

int main() {
    
    printf("Enter the first number: ");
    double num1;
    scanf("%lf", &a);

    printf("Enter the second number: ");
    double num2;
    scanf("%lf", &b);

    printf("Enter the third number: ");
    double num3;
    scanf("%lf", &c);

    double minimum;
    if (a <= b) {
        if (a <= c) {
            minimum = a;
        } else {
            minimum = c;
        }
    } else {
        if (b <= c) {
            minimum = b;
        } else {
            minimum = c;
        }
    }


}

