#include <stdio.h>

int main() {
	
    printf("Enter the first number: ");
    double num1;
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    double num2;
    scanf("%lf", &num2);

    printf("Enter the third number: ");
    double num3;
    scanf("%lf", &num3);

    printf("Enter the fourth number: ");
    double num4;
    scanf("%lf", &num4);

    double maximum;
    if (num1 >= num2) {
        if (num1 >= num3) {
            if (num1 >= num4) {
                maximum = num1;
            } else {
                maximum = num4;
            }
        } else {
            if (num3 >= num4) {
                maximum = num3;
            } else {
                maximum = num4;
            }
        }
    } else {
        if (num2 >= num3) {
            if (num2 >= num4) {
                maximum = num2;
            } else {
                maximum = num4;
            }
        } else {
            if (num3 >= num4) {
                maximum = num3;
            } else {
                maximum = num4;
            }
        }
    }

    printf("The maximum value is: %.2lf\n", maximum);

    return 0;
}

