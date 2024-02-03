#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int *array = (int *)malloc(size * sizeof(int));

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", array + i);
    }

    int *start = array;
    int *end = array + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("\nReversed array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);

        if (i < size - 1) {
            printf(", ");
        }
    }

    free(array);

    return 0;
}
