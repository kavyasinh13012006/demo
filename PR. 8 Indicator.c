#include <stdio.h>

int cube(int *num) {
    return (*num) * (*num) * (*num);
}

int main() {
    int rows, cols;

    printf("Enter array's size: ");
    scanf("%d", &rows);

    cols = rows;

    int array[rows][cols];
    int *ptr = &array[0][0];

    printf("Enter array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nCubes of all elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%-4d", cube(ptr));
            ptr++;
        }
        printf("\n");
    }

    return 0;
}
