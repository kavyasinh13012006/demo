#include <stdio.h>

int calculateSum(int arr[], int size);

int main() {
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    int sum = calculateSum(array, size);
    printf("\nThe sum of the array: %d\n", sum);

    return 0;
}

int calculateSum(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}
