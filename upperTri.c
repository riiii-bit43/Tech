#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

    printf("Upper triangular matrix:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j >= i) {
                printf("%d ", matrix[i][j]); // print element
            } else {
                printf("0 "); // replace lower part with 0
            }
        }
        printf("\n");
    }

    return 0;
}
