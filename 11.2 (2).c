#include <stdio.h>


void squareElements(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i));
    }
}

int main() {
    int size;

    
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];

    
    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    
    squareElements(arr, size);

    
    printf("Square of each element:\n");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }

    return 0;
}
